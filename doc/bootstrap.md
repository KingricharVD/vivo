How to create a bootstrap file. Once you are synced all the way up. Make sure the GUI wallet or the Daemon file has been shutdown(STOP).

Then

To create a bootstrap.dat file for a cryptocurrency, you must concatenate the block data files (blk*.dat) from your local wallet's blocks directory.  This process requires having a fully synchronized and verified local copy of the blockchain first.

Windows Method
Open the Command Prompt and navigate to your wallet's blocks folder (e.g., cd C:\Users\%USERNAME%\AppData\Roaming\WalletName\blocks). Then, run the following command to merge all block files into a single bootstrap file:

copy /b blk*.dat bootstrap.dat

macOS and Linux Method
Open the Terminal and navigate to the blocks directory (e.g., cd ~/.WalletName/blocks). Use the cat command to concatenate the files:

cat blk*.dat > bootstrap.dat

For a more robust solution that filters out orphan blocks and ensures correct ordering, you can use the linearize.py script included in the source code of many cryptocurrencies (such as Bitcoin Core).  This involves running the script with a configuration file that specifies your RPC credentials and data directory paths. Once created, place the bootstrap.dat file in your new wallet's data directory to speed up initial synchronization. 
