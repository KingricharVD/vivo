#include <llmq/vivo_quorum_roles.h>
#include <cassert>
#include <iostream>

int main()
{
    using Consensus::LLMQType;

    using llmq::SelectVivoChainLocksType;

    constexpr int H = 350;

    assert(SelectVivoChainLocksType(
        H - 1, H, false, true) == LLMQType::LLMQ_TEST);

    assert(SelectVivoChainLocksType(
        H, H, false, true) ==
        LLMQType::LLMQ_VIVO_CHAINLOCKS);

    assert(SelectVivoChainLocksType(
        H + 1, H, false, true) ==
        LLMQType::LLMQ_VIVO_CHAINLOCKS);

    assert(SelectVivoChainLocksType(
        H, 2147483647, false, true) ==
        LLMQType::LLMQ_TEST);

    assert(SelectVivoChainLocksType(
        2250599, 2250600, true, false) ==
        LLMQType::LLMQ_400_60);

    assert(SelectVivoChainLocksType(
        2250600, 2250600, true, false) ==
        LLMQType::LLMQ_VIVO_CHAINLOCKS);

    std::cout << "REGTEST_BOUNDARIES=PASS\n";
    std::cout << "MAINNET_BOUNDARIES=PASS\n";
    std::cout << "SIGNATURE_VERIFICATION=NOT_TESTED\n";
}
