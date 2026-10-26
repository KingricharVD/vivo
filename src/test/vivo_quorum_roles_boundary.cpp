#include <llmq/vivo_quorum_roles.h>

using namespace llmq;
using Consensus::LLMQType;

constexpr int64_t H = 2250000;
constexpr int64_t DISABLED = 2147483647;

static_assert(
    SelectVivoQuorumType(
        VivoQuorumRole::ChainLocks,H-1,H,true)
    == LLMQType::LLMQ_400_60
);

static_assert(
    SelectVivoQuorumType(
        VivoQuorumRole::ChainLocks,H,H,true)
    == LLMQType::LLMQ_VIVO_CHAINLOCKS
);

static_assert(
    SelectVivoQuorumType(
        VivoQuorumRole::InstantSend,H-1,H,true)
    == LLMQType::LLMQ_60_75
);

static_assert(
    SelectVivoQuorumType(
        VivoQuorumRole::InstantSend,H,H,true)
    == LLMQType::LLMQ_VIVO_INSTANTSEND
);

static_assert(
    SelectVivoQuorumType(
        VivoQuorumRole::Platform,H-1,H,true)
    == LLMQType::LLMQ_100_67
);

static_assert(
    SelectVivoQuorumType(
        VivoQuorumRole::Platform,H,H,true)
    == LLMQType::LLMQ_VIVO_PLATFORM
);

static_assert(
    SelectVivoQuorumType(
        VivoQuorumRole::MNHF,H-1,H,true)
    == LLMQType::LLMQ_400_85
);

static_assert(
    SelectVivoQuorumType(
        VivoQuorumRole::MNHF,H,H,true)
    == LLMQType::LLMQ_VIVO_MNHF
);

static_assert(
    SelectVivoQuorumType(
        VivoQuorumRole::ChainLocks,H,DISABLED,true)
    == LLMQType::LLMQ_400_60
);

static_assert(
    SelectVivoQuorumType(
        VivoQuorumRole::ChainLocks,H,H,false)
    == LLMQType::LLMQ_400_60
);

int main()
{
    return 0;
}
