#ifndef VIVO_DEV_PAYMENT_H
#define VIVO_DEV_PAYMENT_H

#include <consensus/amount.h>
#include <consensus/params.h>
#include <script/script.h>

#include <vector>

namespace vivo_dev_payment {

// One-time VIVO V2 developer allocation.
// Address: VSWKN1fcV5iyERr8wQTsA1QnicLBqq3Svp
// Base58Check P2PKH version: 70
// hash160: add2cef29fa6e4b52fd6b82a552a2edf8f034de8
//
// This is ADDITIONAL issuance at exactly consensus.nVivoV2Height.
// It does not recur on later blocks.
static constexpr CAmount AMOUNT = 1000000 * COIN;

[[nodiscard]] inline bool IsPaymentHeight(const int height, const Consensus::Params& consensus)
{
    return height == consensus.nVivoV2Height;
}

[[nodiscard]] inline CScript GetScript()
{
    static const std::vector<unsigned char> pubkey_hash{
        0xad, 0xd2, 0xce, 0xf2, 0x9f,
        0xa6, 0xe4, 0xb5, 0x2f, 0xd6,
        0xb8, 0x2a, 0x55, 0x2a, 0x2e,
        0xdf, 0x8f, 0x03, 0x4d, 0xe8,
    };

    return CScript()
        << OP_DUP
        << OP_HASH160
        << pubkey_hash
        << OP_EQUALVERIFY
        << OP_CHECKSIG;
}

} // namespace vivo_dev_payment

#endif // VIVO_DEV_PAYMENT_H
