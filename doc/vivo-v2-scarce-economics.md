# VIVO v2 Scarce Economics

- Deterministic MN registration height: 2147483647
- V2 economics height: 2147483647
- Block subsidy at activation: 1.00000000 VIVO
- Miner subsidy: 60%
- Masternode subsidy: 40%
- Masternode collateral: 5,000 VIVO
- Halving: 50% every 262,800 blocks (365 days at 120-second target spacing) from V2 activation
- Transaction fees: miner keeps fees
- Masternode architecture: DIP3 deterministic list / ProRegTx
- VIVO v2 MN type: Regular only
- Minimum collateral confirmations: 15
- DASH treasury/superblocks disabled for this stage
- Evo/Platform, BRR, ChainLocks and later DASH features not activated in this stage


## V2 annual block subsidy schedule

The subsidy epoch is counted from `consensus.nVivoV2Height`.

- Year 1: `1.00000000 VIVO` per block
- Year 2: `0.50000000 VIVO` per block
- Year 3: `0.25000000 VIVO` per block
- Year 4: `0.12500000 VIVO` per block
- Year 5: `0.06250000 VIVO` per block

The subsidy halves again every 262,800 blocks. At VIVO's 120-second
target block spacing, 262,800 blocks is exactly 365 days.

## One-time V2 developer allocation

- Developer wallet: `VSWKN1fcV5iyERr8wQTsA1QnicLBqq3Svp`
- Amount: `1,000,000.00000000 VIVO`
- Activation: exactly `consensus.nVivoV2Height`
- Issuance model: additional one-time coinbase issuance
- Recurrence: none; no developer payment before or after the activation block
- P2PKH hash160: `add2cef29fa6e4b52fd6b82a552a2edf8f034de8`

## V2 network protocol gate

- Current pre-fork VIVO protocol: `70241`
- New V2 VIVO protocol: `70250`
- New release software advertises `70250` immediately.
- Before `consensus.nVivoV2Height`, the existing
  `MIN_PEER_PROTO_VERSION` policy remains unchanged.
- At and after `consensus.nVivoV2Height`, peers must advertise protocol
  `70250` or greater.
- A peer using protocol `70241` that is already connected when V2
  activates is disconnected by the peer-processing loop.
- Protocol versions above `70250` remain allowed for forward compatibility.
