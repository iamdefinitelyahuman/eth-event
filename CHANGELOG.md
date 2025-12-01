# CHANGELOG

All notable changes to this project are documented in this file.

This changelog format is based on [Keep a Changelog](https://keepachangelog.com/en/1.0.0/),
and this project adheres to [Semantic Versioning](https://semver.org/spec/v2.0.0.html).

## [Unreleased](https://github.com/iamdefinitelyahuman/eth-event)
### Changed
- Bump [faster-hexbytes](https://github.com/BobTheBuidler/faster-hexbytes) to [v1.3.4](https://github.com/BobTheBuidler/faster-hexbytes/releases/tag/v1.3.4)
- Bump [faster-eth-abi](https://github.com/BobTheBuidler/faster-eth-abi) to [v5.2.22](https://github.com/BobTheBuidler/faster-eth-abi/releases/tag/v5.2.22)
- Bump [faster-eth-utils](https://github.com/BobTheBuidler/faster-eth-utils) to [v5.3.20](https://github.com/BobTheBuidler/faster-eth-utils/releases/tag/v5.3.20)
- Bump [cchecksum](https://github.com/BobTheBuidler/cchecksum) to [v0.3.7.dev0](https://github.com/BobTheBuidler/cchecksum/releases/tag/v0.3.6)

## [1.4.5](https://github.com/iamdefinitelyahuman/eth-event/releases/tag/v1.4.5) - 2025-11-31
### Changed
- Bump mypyc compiler version to latest patch

## [1.4.5](https://github.com/iamdefinitelyahuman/eth-event/releases/tag/v1.4.5) - 2025-11-30
### Changed
- Bump mypyc compiler version to latest patch

## [1.4.4](https://github.com/iamdefinitelyahuman/eth-event/releases/tag/v1.4.4) - 2025-10-10
### Added
- Support Python3.14
### Changed
- Require Python 3.9

## [1.4.3](https://github.com/iamdefinitelyahuman/eth-event/releases/tag/v1.4.3) - 2025-09-30
### Changed
- Replace [hexbytes](https://github.com/ethereum/hexbytes) with [faster-hexbytes](https://github.com/BobTheBuidler/faster-hexbytes/tree/master)

## [1.4.2](https://github.com/iamdefinitelyahuman/eth-event/releases/tag/v1.4.2) - 2025-09-20
### Fixed
- Fix incorrect type hint for EventData.value
- Include [faster-eth-abi](https://github.com/BobTheBuidler/faster-eth-abi) in build dependencies
- Bump mypyc compiler version to latest patch

## [1.4.1](https://github.com/iamdefinitelyahuman/eth-event/releases/tag/v1.4.1) - 2025-09-13
### Changed
- Bump mypyc compiler version for faster C code

## [1.4.0](https://github.com/iamdefinitelyahuman/eth-event/releases/tag/v1.4.0) - 2025-08-08
### Changed
- Replace [eth-abi](https://github.com/ethereum/eth-abi) with [faster-eth-abi](https://github.com/BobTheBuidler/faster-eth-abi)

## [1.3.5](https://github.com/iamdefinitelyahuman/eth-event/releases/tag/v1.3.5) - 2025-08-05
### Changed
- Add eth-abi to build deps

## [1.3.4](https://github.com/iamdefinitelyahuman/eth-event/releases/tag/v1.3.4) - 2025-07-19
### Fixed
- Type error if calling decode_traceTransaction with bytes-type `initial_address`

## [1.3.3](https://github.com/iamdefinitelyahuman/eth-event/releases/tag/v1.3.3) - 2025-07-16
### Added
- EventData typed dict
### Changed
- Bump compiler version

## [1.3.2](https://github.com/iamdefinitelyahuman/eth-event/releases/tag/v1.3.2) - 2025-06-02
### Changed
- More specific type hints to enable better compiler optimizations

## [1.3.1](https://github.com/iamdefinitelyahuman/eth-event/releases/tag/v1.3.1) - 2025-06-01
### Changed
- Loosen cchecksum pin to support all v0.3.x
- Update compiler version
- Optimize _decode length check

## [1.3.0](https://github.com/iamdefinitelyahuman/eth-event/releases/tag/v1.3.0) - 2025-05-15
### Changed
- Support hexbytes v1, drop hexbytes v0

## [1.2.8](https://github.com/iamdefinitelyahuman/eth-event/releases/tag/v1.2.8) - 2025-05-15
### Changed
- Compiled eth-event to C for blazing fast decoding

## [1.2.7](https://github.com/iamdefinitelyahuman/eth-event/releases/tag/v1.2.7) - 2025-05-13
### Changed
- Replace `eth_utils.to_checksum_address` with `cchecksum.to_checksum_address` for ~8x faster checksumming

### Fixed
- Better handling of `InvalidPointer` exception

## [1.2.6](https://github.com/iamdefinitelyahuman/eth-event/releases/tag/v1.2.6) - 2025-04-20
### Fixed
- Compatibility with eth-abi >= 5.0.1

## [1.2.5](https://github.com/iamdefinitelyahuman/eth-event/releases/tag/v1.2.5) - 2024-02-02
### Fixed
- Loosen dependencies
- Revert to `hexbytes<1`

## [1.2.4](https://github.com/iamdefinitelyahuman/eth-event/releases/tag/v1.2.4) - 2024-01-31
### Added
- Include `logIndex`, `blockNumber`, `transactionIndex` in decoded event logs

### Fixed
- Bump dependencies
- Updates to handle downstream breaking changes

## [1.2.3](https://github.com/iamdefinitelyahuman/eth-event/releases/tag/v1.2.3) - 2021-04-16
### Fixed
- Do not require `anonymous` field in ABI

## [1.2.2](https://github.com/iamdefinitelyahuman/eth-event/releases/tag/v1.2.2) - 2021-04-09
### Fixed
- Handle indexed tuples

## [1.2.1](https://github.com/iamdefinitelyahuman/eth-event/releases/tag/v1.2.1) - 2021-02-14
### Fixed
- Handle dynamic and fixed size tuples

## [1.2.0](https://github.com/iamdefinitelyahuman/eth-event/releases/tag/v1.2.0) - 2020-07-14
### Added
- Include address in decoded event logs

## [1.1.0](https://github.com/iamdefinitelyahuman/eth-event/releases/tag/v1.1.0) - 2020-05-30
### Added
- Decode events when the ABI contains indexed values but the log has None

### Changed
- More expressive error messages when an event cannot be decoded from an incorrect number of topics

## [1.0.0](https://github.com/iamdefinitelyahuman/eth-event/releases/tag/v1.0.0) - 2020-04-21
### Added
- Anonymous and undecodable events can be returned without raising with the `allow_undecoded` kwarg
- MyPy typing
- Extensive docstrings

### Changed
- `get_event_abi` is now `get_topic_map`
- `decode_event` is now `decode_log`
- `decode_trace` is now `decode_traceTransaction`
- decoding methods can no longer be passed a contract ABI - the ABI must first be converted using `get_topic_map`

### Removed
- `get_topics` method
- `skip_anonymous` kwarg in decoder methods

## [0.2.2](https://github.com/iamdefinitelyahuman/eth-event/releases/tag/v0.2.2) - 2019-11-04
### Added
- Support for Python 3.8

## [0.2.1](https://github.com/iamdefinitelyahuman/eth-event/releases/tag/v0.2.1) - 2019-08-07
### Fixed
- Include components in decoded output for tuples

## [0.2.0](https://github.com/iamdefinitelyahuman/eth-event/releases/tag/v0.2.0) - 2019-08-07
### Added
- Support for tuples (ABIEncoderV2)
- `get_log_topic` method

### Changed
- Update dependency versions
- Require python 3.6

## [0.1.4](https://github.com/iamdefinitelyahuman/eth-event/releases/tag/v0.1.4) - 2019-01-16
### Added
- Verbose exceptions

### Fixed
- Properly handle arrays in events

## [0.1.2](https://github.com/iamdefinitelyahuman/eth-event/releases/tag/v0.1.2) - 2019-01-14
### Added
- `decode_logs` and `decode_trace methods

## [0.1.1](https://github.com/iamdefinitelyahuman/eth-event/releases/tag/v0.1.1) - 2019-01-06
### Added
- `get_event_abi`

### Changed
- cleaned up the project structure

## [0.1.0](https://github.com/iamdefinitelyahuman/eth-event/releases/tag/v0.1.0) - 2019-01-06
### Added
- Initial alpha release
