Vivo Core staging tree
===========================

| `master` | `develop` |
| -------- | --------- |
| [![Build Status](https://github.com/KingricharVD/vivo/actions/workflows/build.yml/badge.svg?branch=master)](https://github.com/KingricharVD/vivo/tree/master) | [![Build Status](https://github.com/KingricharVD/vivo/actions/workflows/build.yml/badge.svg?branch=develop)](https://github.com/KingricharVD/vivo/tree/develop) |

https://github.com/KingricharVD/vivo

For an immediately usable, binary version of the Vivo Core software, see
https://github.com/KingricharVD/vivo/releases.

Vivo Core connects to the Vivo peer-to-peer network to download and fully
validate blocks and transactions. It also includes a wallet and graphical user
interface, which can be optionally built.

Further information about Vivo Core is available in the [doc folder](/doc).

What is Vivo?
-------------

Vivo is a digital currency that enables instant, private payments to anyone,
anywhere in the world. Vivo uses peer-to-peer technology to operate with
no central authority: managing transactions and issuing money are carried out
collectively by the network. Vivo Core is the name of the open
source software which enables the use of this currency.


For more information, see the project documentation in the `doc` directory.

License
-------

Vivo Core is released under the terms of the MIT license. See [COPYING](COPYING) for more
information or see https://opensource.org/licenses/MIT.

Development Process
-------------------

The `master` branch is meant to be stable. Development is normally done in separate branches.
[Tags](https://github.com/KingricharVD/vivo/tags) are created to indicate new official,
stable release versions of Vivo Core.

The `develop` branch is regularly built (see doc/build-*.md for instructions) and tested, but is not guaranteed to be
completely stable.

The contribution workflow is described in [CONTRIBUTING.md](CONTRIBUTING.md)
and useful hints for developers can be found in [doc/developer-notes.md](doc/developer-notes.md).

Build / Compile from Source
---------------------------

The `./configure`, `make`, and `cmake` steps, as well as build dependencies, are in [./doc/](/doc) as well:

- **Linux**: [./doc/build-unix.md](/doc/build-unix.md) \
  Ubuntu, Debian, Fedora, Arch, and others
- **macOS**: [./doc/build-osx.md](/doc/build-osx.md)
- **Windows**: [./doc/build-windows.md](/doc/build-windows.md)
- **OpenBSD**: [./doc/build-openbsd.md](/doc/build-openbsd.md)
- **FreeBSD**: [./doc/build-freebsd.md](/doc/build-freebsd.md)
- **NetBSD**: [./doc/build-netbsd.md](/doc/build-netbsd.md)

- **Short** version to build

- # Ubuntu / Debian x86_64

sudo apt update
sudo apt install -y \
    build-essential autoconf automake autotools-dev libtool \
    pkg-config bsdmainutils bison cmake curl patch python3 xz-utils

tar -xzf vivo-24.0.0.1-source.tar.gz
cd vivo-24.0.0.1-source

# Build project dependencies, including compatible wallet libraries
make -C depends -j"$(nproc)"

# Generate configure
NOCONFIGURE=1 ./autogen.sh

# Build VIVO
mkdir build-linux
cd build-linux

CONFIG_SITE="$PWD/../depends/x86_64-pc-linux-gnu/share/config.site" \
../configure --disable-tests

make -j"$(nproc)"

# Verify
./src/vivod --version
./src/qt/vivo-qt --version

Testing
-------

Testing and code review is the bottleneck for development; we get more pull
requests than we can review and test on short notice. Please be patient and help out by testing
other people's pull requests, and remember this is a security-critical project where any mistake might cost people
lots of money.

### Automated Testing

Developers are strongly encouraged to write [unit tests](src/test/README.md) for new code, and to
submit new unit tests for old code. Unit tests can be compiled and run
(assuming they weren't disabled in configure) with: `make check`. Further details on running
and extending unit tests can be found in [/src/test/README.md](/src/test/README.md).

There are also [regression and integration tests](/test), written
in Python.
These tests can be run (if the [test dependencies](/test) are installed) with: `test/functional/test_runner.py`

The CI (Continuous Integration) systems make sure that every pull request is built for Windows, Linux, and macOS,
and that unit/sanity tests are run automatically.

### Manual Quality Assurance (QA) Testing

Changes should be tested by somebody other than the developer who wrote the
code. This is especially important for large or high-risk changes. It is useful
to add a test plan to the pull request description if testing the changes is
not straightforward.

Translations
------------

Changes to translations as well as new translations can be submitted to
Translations are maintained in the source tree under `src/qt/locale`.

Translations are periodically pulled from Transifex and merged into the git repository. See the
[translation process](doc/translation_process.md) for details on how this works.

**Important**: We do not accept translation changes as GitHub pull requests because the next
pull from Transifex would automatically overwrite them again.
