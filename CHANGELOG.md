# CHANGELOG

All notable changes to this project are documented in this file.

This changelog format is based on [Keep a Changelog](https://keepachangelog.com/en/1.0.0/),
and this project adheres to [Semantic Versioning](https://semver.org/spec/v2.0.0.html).

## [Unreleased](https://github.com/iamdefinitelyahuman/eth-event)

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
