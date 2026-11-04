#ifndef VIVO_LLMQ_QUORUM_PROTECTION_H
#define VIVO_LLMQ_QUORUM_PROTECTION_H

#include <algorithm>
#include <cstddef>
#include <cstdint>
#include <stdexcept>
#include <string>
#include <unordered_set>
#include <utility>
#include <vector>

namespace llmq {
namespace vivo_protection {

/*
 * VIVO two-layer quorum candidate planner.
 *
 * STAGING IMPLEMENTATION.
 *
 * Inputs MUST originate from a common, consensus-derived
 * deterministic masternode list and ranking.
 *
 * This helper does not perform network probes, calculate
 * consensus rankings, validate exclusion evidence, or
 * authorize changes to a running DKG membership.
 */

enum class Role {
    ChainLocks,
    InstantSend,
    Platform,
    MNHF
};

struct Candidate {
    std::string proTxHash;

    // Rank supplied by the existing deterministic
    // quorum-selection algorithm.
    uint64_t deterministicRank{0};

    bool enabled{false};
    bool poseBanned{false};
    bool isEvo{false};

    // Must be derived from verified consensus state.
    // Never set directly from local TCP reachability.
    bool consensusExcluded{false};
};

struct SelectionPolicy {
    Role role{Role::Platform};
    std::size_t quorumSize{4};
    bool evoOnly{true};
};

struct SelectionResult {
    std::vector<std::string> selected;
    std::vector<std::string> standby;
    std::vector<std::string> excluded;

    bool enoughMembers{false};
};

/*
 * Layer 1:
 * Filter consensus-eligible candidates.
 *
 * Layer 2:
 * Generate a deterministic standby ordering for use
 * at the NEXT quorum-selection boundary.
 *
 * Changing the input eligibility snapshot never changes
 * membership of an already-running DKG.
 */
inline SelectionResult BuildSelection(
    std::vector<Candidate> candidates,
    const SelectionPolicy& policy)
{
    if (policy.quorumSize == 0) {
        throw std::invalid_argument(
            "VIVO quorum size must be positive");
    }

    std::unordered_set<std::string> seen;

    for (const auto& candidate : candidates) {
        if (candidate.proTxHash.size() != 64 ||
            candidate.proTxHash.find_first_not_of(
                "0123456789abcdef") != std::string::npos) {
            throw std::invalid_argument(
                "Invalid canonical ProTx hash");
        }

        if (!seen.insert(candidate.proTxHash).second) {
            throw std::invalid_argument(
                "Duplicate ProTx hash");
        }
    }

    // Ranking is already established by consensus.
    // Do not reorder candidates based on local health.
    std::sort(
        candidates.begin(),
        candidates.end(),
        [](const Candidate& a, const Candidate& b) {
            if (a.deterministicRank != b.deterministicRank) {
                return a.deterministicRank <
                       b.deterministicRank;
            }

            return a.proTxHash < b.proTxHash;
        }
    );

    SelectionResult result;

    for (const auto& candidate : candidates) {
        const bool eligible =
            candidate.enabled &&
            !candidate.poseBanned &&
            !candidate.consensusExcluded &&
            (!policy.evoOnly || candidate.isEvo);

        if (!eligible) {
            result.excluded.push_back(
                candidate.proTxHash);
            continue;
        }

        if (result.selected.size() < policy.quorumSize) {
            result.selected.push_back(
                candidate.proTxHash);
        } else {
            result.standby.push_back(
                candidate.proTxHash);
        }
    }

    result.enoughMembers =
        result.selected.size() == policy.quorumSize;

    return result;
}

} // namespace vivo_protection
} // namespace llmq

#endif
