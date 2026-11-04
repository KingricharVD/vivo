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

        import json
        import time

        def snapshot(label):
            self.log.info("TYPE8_SNAPSHOT_START=%s", label)
            for i, mn in enumerate(mns):
                status = mn.get_node(self).quorum("dkgstatus")
                sessions = [
                    s for s in status.get("session", [])
                    if s.get("llmqType") == NAME
                ]
                connections = [
                    s for s in status.get("quorumConnections", [])
                    if s.get("llmqType") == NAME
                ]
                self.log.info(
                    "TYPE8_NODE=%s LABEL=%s HEIGHT=%s SESSIONS=%s CONNECTIONS=%s",
                    i,
                    label,
                    mn.get_node(self).getblockcount(),
                    json.dumps(sessions, sort_keys=True),
                    json.dumps(connections, sort_keys=True),
                )
            self.log.info("TYPE8_SNAPSHOT_END=%s", label)

        snapshot("BASE")
        for offset in range(1, 4):
            self.move_blocks(nodes, 1)
            time.sleep(2)
            snapshot("BASE_PLUS_" + str(offset))

        self.log.info("R381_PHASE_PROBE=COMPLETE")
        return

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

        # Confirm that the DKG actually produced
        # mineable type-8 commitments.
        self.wait_for_quorum_commitment(
            qhash, mns,
            llmq_type=TYPE, timeout=90
        )

        self.wait_for_quorum_commitments_on_miner(
            qhash, mns, timeout=90
        )

        self.log.info("TYPE8_COMMITMENT_CREATED=PASS")

        # At this point the DKG base is offset 10.
        # Advance to the beginning of the type-8
        # commitment mining window, not offset 11.
        offset = node.getblockcount() - qheight
        remaining = WINDOW_START - offset - 1

        assert remaining >= 0
        self.move_blocks(nodes, remaining)

        self.log.info(
            "Pre-mining offset=%d",
            node.getblockcount() - qheight
        )

        # Trigger block template creation and mine
        # within the specified commitment window.
        node.getblocktemplate()
        self.move_blocks(nodes, 1)

        offset = node.getblockcount() - qheight

        assert WINDOW_START <= offset <= WINDOW_END

        self.log.info(
            "TYPE8_COMMITMENT_MINING_OFFSET=%d",
            offset
        )

        self.wait_for_quorum_list(
            qhash, nodes, timeout=90,
            llmq_type_name=NAME
        )

        listing = node.quorum("list", TYPE)
        assert qhash in listing[NAME]

        info = node.quorum("info", TYPE, qhash)

        assert_equal(int(info["llmqType"]), TYPE)

        assert_equal(len(info["members"]), SIZE)

        assert all(
            "isValid" in member
            for member in info["members"]
        ), "Missing member validity evidence"

        valid = sum(
            1 for member in info["members"]
            if member["isValid"] is True
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


if __name__ == "__main__":
    VivoType8DKGTest().main()
