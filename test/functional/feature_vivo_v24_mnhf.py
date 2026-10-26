#!/usr/bin/env python3
# Distributed under the MIT software license, see the accompanying
# file COPYING or http://www.opensource.org/licenses/mit-license.php.
"""VIVO "path B": V24 (extended addresses) activated through an EHF signal signed by LLMQ_VIVO_MNHF.

Runs 8 masternodes (the size of the VIVO mainnet today) and checks that:
  1. before V24 an IPv6 masternode address is rejected;
  2. LLMQ_VIVO_MNHF (8/6/5) forms once -testactivationheight=vivo_mnhf is reached;
  3. the masternodes sign the V24 MnHF signal on their own and it gets mined;
  4. V24 goes defined -> started -> locked_in -> active;
  5. after V24, IPv6 and several masternodes on one IPv4 (different ports) are accepted as ProTx v3.
"""

from test_framework.authproxy import JSONRPCException
from test_framework.test_framework import DashTestFramework
from test_framework.util import assert_equal, get_bip9_details

LLMQ_VIVO_MNHF = 10
LLMQ_NAME = "llmq_vivo_mnhf"
DKG_INTERVAL = 24 * 24
PHASE_BLOCKS = 4
VIVO_MNHF_HEIGHT = 200


class VivoV24MnhfTest(DashTestFramework):
    def add_options(self, parser):
        self.add_wallet_options(parser)

    def set_test_params(self):
        args = [
            f"-testactivationheight=vivo_mnhf@{VIVO_MNHF_HEIGHT}",
            # same window/threshold shape as regtest default, EHF on (like mainnet)
            "-vbparams=v24:0:999999999999:0:10:8:6:5:1",
            "-debug=llmq", "-debug=llmq-dkg", "-debug=ehf",
        ]
        self.set_dash_test_params(9, 8, extra_args=[list(args) for _ in range(9)])

    def skip_test_if_missing_module(self):
        self.skip_if_no_wallet()

    def v24(self):
        return get_bip9_details(self.nodes[0], "v24")["status"]

    def set_sporks(self):
        self.nodes[0].sporkupdate("SPORK_17_QUORUM_DKG_ENABLED", 0)
        self.nodes[0].sporkupdate("SPORK_19_CHAINLOCKS_ENABLED", 4070908800)
        self.nodes[0].sporkupdate("SPORK_2_INSTANTSEND_ENABLED", 4070908800)
        self.wait_for_sporks_same()

    def try_register(self, label, addrs):
        node = self.nodes[0]
        collat, owner, voting, payout = (node.getnewaddress() for _ in range(4))
        fund = node.getnewaddress()
        node.sendtoaddress(fund, 5001)
        self.generate(node, 1)
        op_pub = node.bls("generate")["public"]
        try:
            txid = node.protx("register_fund", collat, addrs, owner, op_pub, voting, 0, payout, fund)
            self.log.info(f"[{label}] {addrs} -> ACCEPTED {txid}")
            return txid
        except JSONRPCException as e:
            self.log.info(f"[{label}] {addrs} -> REJECTED: {e.error['message']}")
            return None

    def mine_vivo_mnhf_quorum(self):
        node = self.nodes[0]
        nodes = [node] + [mn.get_node(self) for mn in self.mninfo]
        spork21 = node.spork("show")["SPORK_21_QUORUM_ALL_CONNECTED"] <= 1
        spork23 = node.spork("show")["SPORK_23_QUORUM_POSE"] <= 1
        members = len(self.mninfo)
        expected_connections = (members - 1) if spork21 else 2

        skip = DKG_INTERVAL - (node.getblockcount() % DKG_INTERVAL)
        self.log.info(f"Moving {skip} blocks to the next {LLMQ_NAME} DKG (height {node.getblockcount() + skip})")
        while skip > 0:
            step = min(skip, 50)
            self.bump_mocktime(1)
            self.generate(node, step, sync_fun=lambda: self.sync_blocks(nodes))
            skip -= step

        q = node.getbestblockhash()
        self.log.info(f"DKG quorum hash {q} at height {node.getblockcount()}")
        assert LLMQ_NAME in node.quorum("list"), f"{LLMQ_NAME} should be enabled past height {VIVO_MNHF_HEIGHT}"
        self.wait_for_quorum_phase(q, 1, members, None, 0, self.mninfo, llmq_type_name=LLMQ_NAME, timeout=90)
        self.wait_for_quorum_connections(q, expected_connections, self.mninfo, llmq_type_name=LLMQ_NAME,
                                         wait_proc=lambda: self.bump_mocktime(1), timeout=90)
        if spork23:
            self.wait_for_masternode_probes(q, self.mninfo, wait_proc=lambda: self.bump_mocktime(1), llmq_type_name=LLMQ_NAME)
        for phase, field, count in [(2, "receivedContributions", members), (3, "receivedComplaints", 0),
                                    (4, "receivedJustifications", 0), (5, "receivedPrematureCommitments", members),
                                    (6, None, 0)]:
            self.move_blocks(nodes, PHASE_BLOCKS)
            self.log.info(f"Waiting for DKG phase {phase}")
            self.wait_for_quorum_phase(q, phase, members, field, count, self.mninfo, llmq_type_name=LLMQ_NAME, timeout=90)

        self.wait_for_quorum_commitment(q, self.mninfo, llmq_type=LLMQ_VIVO_MNHF, timeout=60)
        self.wait_for_quorum_commitments_on_miner(q, self.mninfo, timeout=60)
        for _ in range(40):
            if q in node.quorum("list")[LLMQ_NAME]:
                break
            self.move_blocks(nodes, 1)
        assert q in node.quorum("list")[LLMQ_NAME], f"{LLMQ_NAME} quorum was not mined"
        info = node.quorum("info", LLMQ_VIVO_MNHF, q)
        self.log.info(f"{LLMQ_NAME} quorum mined: height {info['height']}, {len(info['members'])} members, "
                      f"valid {sum(1 for m in info['members'] if m['valid'])}")
        return q

    def run_test(self):
        node = self.nodes[0]
        self.set_sporks()
        self.log.info(f"height {node.getblockcount()}, V24 = {self.v24()}, quorum types: {sorted(node.quorum('list').keys())}")
        # quorum list only shows types enabled at the tip: not yet before vivo_mnhf height
        assert node.getblockcount() < VIVO_MNHF_HEIGHT
        assert LLMQ_NAME not in node.quorum("list")
        assert_equal(self.v24(), "defined")

        self.log.info("Before V24: IPv6 masternode must be rejected")
        assert self.try_register("before-V24", ["[2a01:4f8:c17:1::10]:23456"]) is None

        q = self.mine_vivo_mnhf_quorum()

        self.log.info("Waiting for the masternodes to sign + mine the V24 MnHF signal and for V24 to activate")
        seen = {self.v24()}
        state = {"ehf_block": None}

        def step():
            self.bump_mocktime(1)
            h = self.generate(self.nodes[0], 1)[0]
            if state["ehf_block"] is None:
                for tx in node.getblock(h, 2)["tx"]:
                    if tx.get("type") == 7:
                        state["ehf_block"] = node.getblockcount()
                        self.log.info(f"MnHF signal tx {tx['txid']} mined at height {state['ehf_block']}: {tx.get('mnhfTx')}")
            s = self.v24()
            if s not in seen:
                seen.add(s)
                self.log.info(f"height {node.getblockcount()}: V24 -> {s}")
            return s == "active"
        self.wait_until(step, timeout=300, sleep=0.5)
        assert state["ehf_block"] is not None
        bip9 = get_bip9_details(node, "v24")
        self.log.info(f"V24 active since height {bip9['since']} (signal used quorum {q})")

        self.log.info("After V24: IPv6 and shared-IPv4 masternodes")
        txids = [self.try_register("after-V24", ["[2a01:4f8:c17:1::10]:23456"]),
                 self.try_register("after-V24", ["1.2.3.4:40001"]),
                 self.try_register("after-V24", ["1.2.3.4:40002"])]
        assert all(txids)
        self.generate(node, 1)
        for mn in node.protx("list", "registered", True):
            if mn["proTxHash"] in txids:
                st = mn["state"]
                self.log.info(f"  ProTx v{st['version']} addresses={st.get('addresses')}")
                assert_equal(st["version"], 3)


if __name__ == '__main__':
    VivoV24MnhfTest().main()
