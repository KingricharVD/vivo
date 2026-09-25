#ifndef VIVO_PROTOCOL_H
#define VIVO_PROTOCOL_H

#include <consensus/params.h>
#include <version.h>

// Before V2, preserve the existing network minimum so this release can
// propagate without prematurely disconnecting legacy peers.
//
// Beginning with the block after V2 activation (mainnet height 2176697), protocol 70250 becomes mandatory.
[[nodiscard]] static constexpr int GetVivoMinimumPeerProtocolVersion(
    const int active_height,
    const Consensus::Params& consensus)
{
    return active_height >= consensus.nVivoV2Height + 1
        ? VIVO_V2_PROTOCOL_VERSION
        : MIN_PEER_PROTO_VERSION;
}

#endif // VIVO_PROTOCOL_H
