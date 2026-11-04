#!/usr/bin/env python3
"""VIVO isolated type-8 DKG formation test.

Requires nine regtest nodes, eight registered masternodes,
and the custom 8-member rotating LLMQ.

A failure is evidence to investigate, not a PASS.
"""

from test_framework.test_framework import DashTestFramework
from test_framework.util import assert_equal


TYPE = 8
NAME = "llmq_vivo_instantsend"
SIZE = 8
MIN_VALID = 6
THRESHOLD = 5
INTERVAL = 288
WINDOW_START = 42
WINDOW_END = 50


class VivoType8DKGTest(DashTestFramework):

    def add_options(self, parser):
        self.add_wallet_options(
            parser,
            descriptors=True,
            legacy=False,
        )

    def set_test_params(self):
        args = [
            "-llmqtestinstantsenddip0024=" + NAME,
            "-testactivationheight=vivo_mnhf@500",
            "-watchquorums=1",
            "-vbparams=testdummy:999999999999:999999999999",
        ]

        self.set_dash_test_params(
            9,
            8,
            extra_args=[list(args) for _ in range(9)],
        )

    def run_test(self):
        self.log.info("R379G: begin isolated type-8 DKG")

        node = self.nodes[0]
        mns = self.mninfo.copy()

        assert_equal(len(mns), SIZE)

        nodes = [node] + [
            mn.get_node(self) for mn in mns
        ]

        self.log.info("Checking registered masternodes")

        expected_protx = {
            mn.proTxHash for mn in mns
        }
        assert_equal(len(expected_protx), SIZE)

        def eligible_mns():
            height = node.getblockcount()
            work_height = max(1, height - 8)

            entries = node.protx(
                "diff", 1, work_height
            )["mnList"]

            return {
                entry["proRegTxHash"]
                for entry in entries
                if (
                    entry.get("isValid", False)
                    and int(
                        entry.get("confirmedHash", "0"),
                        16
                    ) != 0
                )
            }

        self.log.info("Confirming DKG spork")
        node.sporkupdate(
            "SPORK_17_QUORUM_DKG_ENABLED", 0
        )
        self.wait_for_sporks_same()

        height = node.getblockcount()

        # Advance to a future type-8 interval boundary,
        # leaving sufficient room for MN confirmations.
        target = 1152
        assert height < target - 1, "TEST_HEIGHT_ALREADY_REACHED"

        self.log.info(
            "Current height=%d target=%d", height, target
        )

        # R379AJD: Keep DKG enabled across historical
        # rotation cycles rather than skipping them.
        #
        # This does NOT guarantee historical snapshots
        # or valid early-cycle final commitments.
        # Verify those independently in execution.
        advance = target - height - 1
        assert advance > 0

        self.log.info(
            "R379AJD_HISTORY_START=%d TARGET=%d",
            height, target
        )

        # Advance through consensus block processing.
        # The functional framework handles mining/sync.
        # R379AJF: Mine one block per synchronization step.
        # This preserves intermediate DKG cycle processing.
        #
        # A successful mining loop does not by itself prove
        # successful DKG formation or saved snapshots.
        assert 0 < advance <= 1500, (
            "HARD_STOP=UNEXPECTED_ADVANCE_RANGE"
        )

        checkpoints = (288, 576, 864, 1152)

        self.log.info(
            "R379AJF_CONTROLLED_START=%d TARGET=%d",
            height, target
        )

        for step in range(advance):
            self.move_blocks(nodes, 1)

            current_height = node.getblockcount()

            if current_height in checkpoints:
                self.log.info(
                    "R379AJF_HISTORICAL_CHECKPOINT=%d",
                    current_height
                )

                # Record progress only. Historical quorum
                # snapshots must be verified separately.

            if current_height % 100 == 0:
                self.log.info(
                    "R379AJF_PROGRESS=%d",
                    current_height
                )

        assert node.getblockcount() == target - 1, (
            "HARD_STOP=HISTORY_HEIGHT_MISMATCH"
        )


        self.log.info(
            "R379AJD_HISTORY_COMPLETE=%d",
            node.getblockcount()
        )


        # Work-block membership is evaluated eight
        # blocks before the DKG base. Confirm the
        # registered test masternodes are eligible.
        work_height = target - 8

        entries = node.protx(
            "diff", 1, work_height
        )["mnList"]

        eligible = {
            entry["proRegTxHash"]
            for entry in entries
            if (
                entry.get("isValid", False)
                and int(
                    entry.get("confirmedHash", "0"),
                    16
                ) != 0
            )
        }

        missing = expected_protx - eligible

        assert not missing, (
            f"DKG_WORK_BLOCK_INELIGIBLE: "
            f"height={work_height} "
            f"missing={len(missing)}"
        )

        self.log.info(
            "TYPE8_ELIGIBLE_MEMBERS=%d",
            len(expected_protx)
        )

        # Block at the exact interval boundary.
        self.move_blocks(nodes, 1)

        qhash = node.getbestblockhash()
        qheight = node.getblockcount()

        assert_equal(qheight % INTERVAL, 0)

        self.log.info(
            "TYPE8_DKG_BASE_HEIGHT=%d HASH=%s",
            qheight, qhash
        )

        self.log.info("R397_FULL_DKG_TEST=START")

        self.wait_for_quorum_phase(
            qhash, 1, SIZE, None, 0, mns,
            llmq_type_name=NAME, timeout=90
        )

        self.log.info("TYPE8_PHASE1=PASS")

        self.wait_for_quorum_connections(
            qhash,
            2,
            mns,
            wait_proc=lambda: self.bump_mocktime(1),
            llmq_type_name=NAME,
        )

        self.log.info(
            "TYPE8_QUORUM_CONNECTIONS=PASS"
        )

        # DKG phase spacing is two blocks.
        self.move_blocks(nodes, 2)

        self.wait_for_quorum_phase(
            qhash, 2, SIZE,
            "receivedContributions", MIN_VALID,
            mns, llmq_type_name=NAME, timeout=90
        )

        self.log.info("TYPE8_PHASE2=PASS")

        self.move_blocks(nodes, 2)
        self.wait_for_quorum_phase(
            qhash, 3, SIZE, None, 0, mns,
            llmq_type_name=NAME, timeout=90
        )

        self.log.info("TYPE8_PHASE3=PASS")

        self.move_blocks(nodes, 2)
        self.wait_for_quorum_phase(
            qhash, 4, SIZE, None, 0, mns,
            llmq_type_name=NAME, timeout=90
        )

        self.log.info("TYPE8_PHASE4=PASS")

        self.move_blocks(nodes, 2)
        self.wait_for_quorum_phase(
            qhash, 5, SIZE,
            "receivedPrematureCommitments",
            THRESHOLD,
            mns, llmq_type_name=NAME, timeout=90
        )

        self.log.info("TYPE8_PHASE5=PASS")

        self.move_blocks(nodes, 2)
        self.wait_for_quorum_phase(
            qhash, 6, SIZE, None, 0, mns,
            llmq_type_name=NAME, timeout=90
        )

        self.log.info("TYPE8_PHASE6=PASS")

        # R397E9: Final commitments were observed in
        # R397E3, but the old test queried dkgstatus
        # before the commitment mining window opened.
        #
        # Advance to one block BEFORE WINDOW_START,
        # then mine the first commitment-window block.
        # The following quorum-list assertions must
        # establish actual on-chain activation.

        self.log.info(
            "R397E9_FINALIZATION_PHASE_COMPLETE"
        )

        offset = node.getblockcount() - qheight

        assert 10 <= offset < WINDOW_START, (
            f"INVALID_PRE_WINDOW_OFFSET={offset}"
        )

        remaining = WINDOW_START - offset - 1

        assert remaining >= 0

        self.log.info(
            "R397E9_ADVANCE_TO_PRE_WINDOW=%d",
            remaining
        )

        if remaining:
            self.move_blocks(nodes, remaining)

        offset = node.getblockcount() - qheight

        assert_equal(offset, WINDOW_START - 1)

        self.log.info(
            "R397E9_PRE_WINDOW_OFFSET=%d",
            offset
        )

        # Mine the first block within the commitment
        # mining window using the unchanged daemon.
        self.move_blocks(nodes, 1)

        offset = node.getblockcount() - qheight

        assert_equal(offset, WINDOW_START)

        self.log.info(
            "R397E9_MINING_WINDOW_REACHED=%d",
            offset
        )

        self.wait_for_quorum_list(
            qhash, nodes, timeout=90,
            llmq_type_name=NAME
        )

        listing = node.quorum("list")
        assert qhash in listing[NAME]

        info = node.quorum("info", TYPE, qhash)

        if "llmqType" in info:
            assert_equal(int(info["llmqType"]), TYPE)
        else:
            assert_equal(info.get("type"), NAME)

        assert_equal(len(info["members"]), SIZE)

        assert all(
            "valid" in member
            and isinstance(member["valid"], bool)
            for member in info["members"]
        ), "Missing member validity evidence"

        valid = sum(
            1 for member in info["members"]
            if member["valid"] is True
        )

        assert valid >= MIN_VALID, (
            f"Only {valid} valid members"
        )

        self.log.info(
            "TYPE8_VALID_MEMBERS=%d", valid
        )

        self.log.info(
            "TYPE8_FINAL_COMMITMENT=PASS"
        )

        self.log.info(
            "TYPE8_ACTIVE_QUORUM=PASS"
        )

        # R397E20: independent MnHF on-chain
        # acceptance using the unchanged daemon.
        mnhf_type = 10
        mnhf_name = "llmq_vivo_mnhf"
        mnhf_base_height = 1152

        target_hash = node.getblockhash(
            mnhf_base_height
        )

        public_keys = set()

        for index, peer in enumerate(nodes):
            listing = peer.quorum("list")

            assert target_hash in listing.get(
                mnhf_name, []
            ), (
                f"MnHF commitment missing on node {index}"
            )

            info = peer.quorum(
                "info", mnhf_type, target_hash
            )

            if "llmqType" in info:
                assert_equal(
                    int(info["llmqType"]), mnhf_type
                )
            else:
                assert_equal(
                    info["type"], mnhf_name
                )

            members = info["members"]
            assert_equal(len(members), 8)

            assert all(
                "valid" in member
                and isinstance(member["valid"], bool)
                for member in members
            ), "Missing MnHF member validity evidence"

            valid_count = sum(
                member["valid"] is True
                for member in members
            )

            assert valid_count >= 6, (
                f"MnHF valid members: {valid_count}"
            )

            key = info["quorumPublicKey"]
            assert key, "Missing MnHF quorum public key"
            public_keys.add(key)

            self.log.info(
                "R397E20_MNHF_NODE_%d=PASS "
                "VALID=%d",
                index,
                valid_count
            )

        assert_equal(len(public_keys), 1)

        self.log.info(
            "R397E20_MNHF_QUORUM_HASH=%s",
            target_hash
        )
        self.log.info(
            "R397E20_MNHF_ONCHAIN_9_OF_9=PASS"
        )

        # R397E21: independently verify ChainLocks
        # and Platform commitments on all nine nodes.
        # Type 8 and type 10 are already checked above.

        extra_quorums = [
            (
                7,
                "llmq_vivo_chainlocks",
                8,
                6,
                "CHAINLOCKS",
            ),
            (
                9,
                "llmq_vivo_platform",
                4,
                3,
                "PLATFORM",
            ),
        ]

        for (
            quorum_type,
            quorum_name,
            expected_size,
            minimum_valid,
            label,
        ) in extra_quorums:

            listings = [
                peer.quorum("list")
                for peer in nodes
            ]

            common = set(
                listings[0].get(quorum_name, [])
            )

            for listing in listings[1:]:
                common.intersection_update(
                    listing.get(quorum_name, [])
                )

            assert common, (
                f"{label}: no common mined quorum "
                "across the nine nodes"
            )

            # Verify one identical listed commitment
            # with quorum info on every node.
            target_hash = sorted(common)[-1]
            public_keys = set()

            for index, peer in enumerate(nodes):

                info = peer.quorum(
                    "info",
                    quorum_type,
                    target_hash,
                )

                if "llmqType" in info:
                    assert_equal(
                        int(info["llmqType"]),
                        quorum_type,
                    )
                elif "type" in info:
                    assert_equal(
                        info["type"],
                        quorum_name,
                    )
                else:
                    raise AssertionError(
                        f"{label}: missing type field"
                    )

                members = info["members"]

                assert_equal(
                    len(members),
                    expected_size,
                )

                assert all(
                    isinstance(
                        member.get("valid"),
                        bool,
                    )
                    for member in members
                ), (
                    f"{label}: member validity "
                    "evidence missing"
                )

                valid_count = sum(
                    member["valid"] is True
                    for member in members
                )

                assert valid_count >= minimum_valid, (
                    f"{label}: only {valid_count} "
                    "valid members"
                )

                key = info.get(
                    "quorumPublicKey"
                )

                assert key, (
                    f"{label}: missing public key"
                )

                public_keys.add(key)

                self.log.info(
                    "R397E21_%s_NODE_%d=PASS VALID=%d",
                    label,
                    index,
                    valid_count,
                )

            assert_equal(
                len(public_keys),
                1,
            )

            self.log.info(
                "R397E21_%s_HASH=%s",
                label,
                target_hash,
            )

            self.log.info(
                "R397E21_%s_ONCHAIN_9_OF_9=PASS",
                label,
            )

        self.log.info(
            "R397E21_FOUR_QUORUM_ACCEPTANCE=PASS"
        )




if __name__ == "__main__":
    VivoType8DKGTest().main()
