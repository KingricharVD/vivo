// VIVO quorum recovery - experimental historical role selector.
//
// R41F: This header is not connected to production call sites.
// Historical role selection must be validated before deployment.

#ifndef VIVO_LLMQ_VIVO_QUORUM_ROLES_H
#define VIVO_LLMQ_VIVO_QUORUM_ROLES_H

#include <llmq/params.h>

#include <cstdint>
#include <limits>

namespace llmq {

enum class VivoQuorumRole : uint8_t {
    ChainLocks,
    InstantSend,
    Platform,
    MNHF,
};

struct VivoQuorumRoleTypes {
    Consensus::LLMQType chainLocks;
    Consensus::LLMQType instantSend;
    Consensus::LLMQType platform;
    Consensus::LLMQType mnhf;
};

constexpr VivoQuorumRoleTypes GetVivoQuorumRoleTypes(
    int64_t contextHeight,
    int64_t activationHeight,
    bool isMainnet)
{
    const bool recoveryActive =
        isMainnet &&
        activationHeight < std::numeric_limits<int32_t>::max() &&
        contextHeight >= activationHeight;

    if (recoveryActive) {
        return {
            Consensus::LLMQType::LLMQ_VIVO_CHAINLOCKS,
            Consensus::LLMQType::LLMQ_VIVO_INSTANTSEND,
            Consensus::LLMQType::LLMQ_VIVO_PLATFORM,
            Consensus::LLMQType::LLMQ_VIVO_MNHF,
        };
    }

    return {
        Consensus::LLMQType::LLMQ_400_60,
        Consensus::LLMQType::LLMQ_60_75,
        Consensus::LLMQType::LLMQ_100_67,
        Consensus::LLMQType::LLMQ_400_85,
    };
}

constexpr Consensus::LLMQType SelectVivoQuorumType(
    VivoQuorumRole role,
    int64_t contextHeight,
    int64_t activationHeight,
    bool isMainnet)
{
    const auto types = GetVivoQuorumRoleTypes(
        contextHeight,
        activationHeight,
        isMainnet
    );

    switch (role) {
    case VivoQuorumRole::ChainLocks:
        return types.chainLocks;
    case VivoQuorumRole::InstantSend:
        return types.instantSend;
    case VivoQuorumRole::Platform:
        return types.platform;
    case VivoQuorumRole::MNHF:
        return types.mnhf;
    }

    return Consensus::LLMQType::LLMQ_NONE;
}


// R42I: ChainLocks-only network-aware transition.
// Other quorum roles are deliberately unchanged.
constexpr Consensus::LLMQType SelectVivoChainLocksType(
    int64_t contextHeight,
    int64_t handoverHeight,
    bool isMainnet,
    bool isRegtest)
{
    const bool activationEnabled =
        handoverHeight < std::numeric_limits<int32_t>::max();

    if (isRegtest) {
        return activationEnabled &&
                       contextHeight >= handoverHeight
            ? Consensus::LLMQType::LLMQ_VIVO_CHAINLOCKS
            : Consensus::LLMQType::LLMQ_TEST;
    }

    return SelectVivoQuorumType(
        VivoQuorumRole::ChainLocks,
        contextHeight,
        handoverHeight,
        isMainnet);
}

} // namespace llmq

#endif // VIVO_LLMQ_VIVO_QUORUM_ROLES_H
