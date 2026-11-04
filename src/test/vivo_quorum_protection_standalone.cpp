#include "../llmq/vivo_quorum_protection.h"

#include <algorithm>
#include <cassert>
#include <iostream>
#include <string>
#include <vector>

using namespace llmq::vivo_protection;

static std::string Hash(unsigned n)
{
    std::string h(64, '0');
    static const char hex[] = "0123456789abcdef";
    h[62] = hex[(n >> 4) & 15];
    h[63] = hex[n & 15];
    return h;
}

static std::vector<Candidate> MakeCandidates()
{
    std::vector<Candidate> items;

    for (unsigned i = 1; i <= 14; ++i) {
        Candidate c;

        c.proTxHash = Hash(i);
        c.deterministicRank = i;
        c.enabled = true;
        c.poseBanned = false;

        // Four Regular, ten EVO.
        c.isEvo = i > 4;

        items.push_back(c);
    }

    return items;
}

int main()
{
    SelectionPolicy platform{
        Role::Platform, 4, true
    };

    auto candidates = MakeCandidates();

    // Layer 1: EVO-only selection.
    auto initial =
        BuildSelection(candidates, platform);

    assert(initial.enoughMembers);
    assert(initial.selected.size() == 4);
    assert(initial.standby.size() == 6);
    assert(initial.excluded.size() == 4);

    assert(initial.selected[0] == Hash(5));
    assert(initial.selected[1] == Hash(6));
    assert(initial.selected[2] == Hash(7));
    assert(initial.selected[3] == Hash(8));

    std::cout
        << "EVO_ONLY_SELECTION=PASS\n";

    // Independent input ordering must produce
    // identical deterministic selection.
    std::reverse(
        candidates.begin(), candidates.end());

    auto reversed =
        BuildSelection(candidates, platform);

    assert(reversed.selected == initial.selected);
    assert(reversed.standby == initial.standby);

    std::cout
        << "DETERMINISTIC_ORDER=PASS\n";

    // Layer 2: Simulate a NEW quorum boundary
    // with previously verified consensus exclusion.
    for (auto& c : candidates) {
        if (c.proTxHash == Hash(6)) {
            c.consensusExcluded = true;
        }
    }

    auto recovered =
        BuildSelection(candidates, platform);

    assert(recovered.enoughMembers);
    assert(recovered.selected.size() == 4);

    assert(recovered.selected[0] == Hash(5));
    assert(recovered.selected[1] == Hash(7));
    assert(recovered.selected[2] == Hash(8));
    assert(recovered.selected[3] == Hash(9));

    // Original membership is immutable.
    assert(initial.selected[1] == Hash(6));

    std::cout
        << "NEXT_CYCLE_STANDBY_REPLACEMENT=PASS\n";

    // A PoSe-banned member is ineligible.
    for (auto& c : candidates) {
        if (c.proTxHash == Hash(7)) {
            c.poseBanned = true;
        }
    }

    auto pose =
        BuildSelection(candidates, platform);

    assert(pose.enoughMembers);
    assert(pose.selected[3] == Hash(10));

    std::cout
        << "POSE_FILTER=PASS\n";

    // Too few eligible members must fail closed.
    for (auto& c : candidates) {
        if (c.isEvo) {
            c.enabled = false;
        }
    }

    auto insufficient =
        BuildSelection(candidates, platform);

    assert(!insufficient.enoughMembers);
    assert(insufficient.selected.empty());

    std::cout
        << "INSUFFICIENT_MEMBERS_FAIL_CLOSED=PASS\n";

    // Duplicate registration must be rejected.
    auto duplicate = MakeCandidates();
    duplicate.push_back(duplicate.front());

    bool rejected = false;

    try {
        (void)BuildSelection(duplicate, platform);
    } catch (const std::invalid_argument&) {
        rejected = true;
    }

    assert(rejected);

    std::cout
        << "DUPLICATE_ID_REJECTED=PASS\n";

    std::cout
        << "R57ZA_UNIT_TESTS=PASS\n";

    return 0;
}
