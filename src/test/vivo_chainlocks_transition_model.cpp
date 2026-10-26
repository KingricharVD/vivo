#include <llmq/vivo_quorum_roles.h>

#include <cassert>
#include <cstdint>
#include <iostream>
#include <limits>

using Consensus::LLMQType;

namespace {

constexpr int64_t H = 2250000;
constexpr int64_t DISABLED =
    std::numeric_limits<int32_t>::max();

// Test-only signing policy. Not consensus code.
constexpr LLMQType SelectSigningTypeForModel(
    int64_t height,
    bool newQuorumAvailable)
{
    const auto type = llmq::SelectVivoQuorumType(
        llmq::VivoQuorumRole::ChainLocks,
        height, H, true);

    if (type == LLMQType::LLMQ_VIVO_CHAINLOCKS &&
        !newQuorumAvailable) {
        return LLMQType::LLMQ_NONE;
    }

    return type;
}

constexpr LLMQType SelectHistoricalTypeForModel(
    int64_t signedHeight)
{
    return llmq::SelectVivoQuorumType(
        llmq::VivoQuorumRole::ChainLocks,
        signedHeight, H, true);
}

static_assert(
    SelectSigningTypeForModel(H - 1, false) ==
    LLMQType::LLMQ_400_60);

static_assert(
    SelectSigningTypeForModel(H, false) ==
    LLMQType::LLMQ_NONE);

static_assert(
    SelectSigningTypeForModel(H, true) ==
    LLMQType::LLMQ_VIVO_CHAINLOCKS);

static_assert(
    SelectHistoricalTypeForModel(H - 1) ==
    LLMQType::LLMQ_400_60);

static_assert(
    SelectHistoricalTypeForModel(H) ==
    LLMQType::LLMQ_VIVO_CHAINLOCKS);

static_assert(
    llmq::SelectVivoQuorumType(
        llmq::VivoQuorumRole::ChainLocks,
        H + 100, DISABLED, true) ==
    LLMQType::LLMQ_400_60);

} // namespace

int main()
{
    std::cout << "PRE_ACTIVATION=PASS\n";
    std::cout << "NO_NEW_QUORUM_MODEL=PASS\n";
    std::cout << "NEW_QUORUM_AVAILABLE_MODEL=PASS\n";
    std::cout << "HISTORICAL_SELECTION_MODEL=PASS\n";
    std::cout << "DISABLED_ACTIVATION_MODEL=PASS\n";
    std::cout << "NOTE=MODEL_ONLY_NOT_CHAINLOCK_VERIFICATION\n";
    return 0;
}
