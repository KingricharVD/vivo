# VIVO Core v26.0.0.0

Status: DEVELOPMENT ONLY
Base: VIVO v25.0.6.1 R64

## Development objectives

1. Restore complete DKG contribution generation.
2. Restore complaint and justification handling.
3. Restore premature commitment generation.
4. Restore final commitment aggregation.
5. Validate BLS signature generation and verification.
6. Verify eight-member custom quorums on isolated regtest.
7. Resolve InstantSend rotation/initialization mismatch.
8. Test ChainLocks, InstantSend, Platform and MNHF.
9. Verify CbTx quorum Merkle roots.
10. Validate compatibility with existing mainnet history.

## Restrictions

- Do not deploy to mainnet without validation.
- Do not bypass quorum signature verification.
- Do not lower mainnet consensus thresholds.
- Do not change activation heights without review.
- Preserve the original v25.0.6.1 source snapshot.

## Reference

Dash v22 DKG source is staged separately under:

/root/vivo-r15-dkg-upstream-reference/

No DKG restoration is included in the R16 version
staging operation.
