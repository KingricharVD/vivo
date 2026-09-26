Dash Core
==========

This is the official reference wallet for Dash digital currency and comprises the backbone of the Dash peer-to-peer network. You can [download Dash Core](https://www.vivo.org/downloads/) or [build it yourself](#building) using the guides below.

Running
---------------------
The following are some helpful notes on how to run Dash Core on your native platform.

### Unix

Unpack the files into a directory and run:

- `bin/vivo-qt` (GUI) or
- `bin/vivod` (headless)

### Windows

Unpack the files into a directory, and then run vivo-qt.exe.

### macOS

Drag Dash Core to your applications folder, and then run Dash Core.

### Need Help?

* See the [Dash documentation](https://docs.vivo.org)
for help and more information.
* Ask for help on [Dash Discord](http://stayvivoy.com)
* Ask for help on the [Dash Forum](https://vivo.org/forum)

Building
---------------------
The following are developer notes on how to build Dash Core on your native platform. They are not complete guides, but include notes on the necessary libraries, compile flags, etc.

- [Dependencies](dependencies.md)
- [macOS Build Notes](build-osx.md)
- [Unix Build Notes](build-unix.md)
- [Windows Build Notes](build-windows.md)
- [OpenBSD Build Notes](build-openbsd.md)
- [NetBSD Build Notes](build-netbsd.md)
- [Android Build Notes](build-android.md)

Development
---------------------
The Dash Core repo's [root README](/README.md) contains relevant information on the development process and automated testing.

- [Developer Notes](developer-notes.md)
- [Productivity Notes](productivity.md)
- [Release Notes](release-notes.md)
- [Release Process](release-process.md)
- Source Code Documentation ***TODO***
- [Translation Process](translation_process.md)
- [Translation Strings Policy](translation_strings_policy.md)
- [JSON-RPC Interface](JSON-RPC-interface.md)
- [Unauthenticated REST Interface](REST-interface.md)
- [Shared Libraries](shared-libraries.md)
- [BIPS](bips.md)
- [Dnsseed Policy](dnsseed-policy.md)
- [Benchmarking](benchmarking.md)
- [Internal Design Docs](design/)

### Resources
* See the [Dash Developer Documentation](https://vivocore.readme.io/)
  for technical specifications and implementation details.
* Discuss on the [Dash Forum](https://vivo.org/forum), in the Development & Technical Discussion board.
* Discuss on [Dash Discord](http://stayvivoy.com)
* Discuss on [Dash Developers Discord](http://chat.vivodevs.org/)

### Miscellaneous
- [Assets Attribution](assets-attribution.md)
- [vivo.conf Configuration File](vivo-conf.md)
- [CJDNS Support](cjdns.md)
- [Files](files.md)
- [Fuzz-testing](fuzzing.md)
- [I2P Support](i2p.md)
- [Init Scripts (systemd/upstart/openrc)](init.md)
- [Managing Wallets](managing-wallets.md)
- [Multisig Tutorial](multisig-tutorial.md)
- [P2P bad ports definition and list](p2p-bad-ports.md)
- [PSBT support](psbt.md)
- [Reduce Memory](reduce-memory.md)
- [Reduce Traffic](reduce-traffic.md)
- [Tor Support](tor.md)
- [Transaction Relay Policy](policy/README.md)
- [ZMQ](zmq.md)

- ### Create a Bootstrap File
- To create a bootstrap.dat file for a cryptocurrency, you must concatenate the block data files (blk*.dat) from your local wallet's blocks directory.  This process requires having a fully synchronized and verified local copy of the blockchain first.

Windows Method
Open the Command Prompt and navigate to your wallet's blocks folder (e.g., cd C:\Users\%USERNAME%\AppData\Roaming\WalletName\blocks). Then, run the following command to merge all block files into a single bootstrap file:

copy /b blk*.dat bootstrap.dat

macOS and Linux Method
Open the Terminal and navigate to the blocks directory (e.g., cd ~/.WalletName/blocks). Use the cat command to concatenate the files:

cat blk*.dat > bootstrap.dat

For a more robust solution that filters out orphan blocks and ensures correct ordering, you can use the linearize.py script included in the source code of many cryptocurrencies (such as Bitcoin Core).  This involves running the script with a configuration file that specifies your RPC credentials and data directory paths. Once created, place the bootstrap.dat file in your new wallet's data directory to speed up initial synchronization. 

License
---------------------
Distributed under the [MIT software license](/COPYING).
