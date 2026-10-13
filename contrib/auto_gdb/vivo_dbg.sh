#!/usr/bin/env bash
# Copyright (c) 2018-2023 The Vivo Core developers
# Distributed under the MIT software license, see the accompanying
# file COPYING or http://www.opensource.org/licenses/mit-license.php.
# use testnet settings,  if you need mainnet,  use ~/.vivocore/vivod.pid file instead
export LC_ALL=C

vivo_pid="$(<~/.vivocore/testnet3/vivod.pid)"
sudo gdb -batch -ex "source debug.gdb" vivod "${vivo_pid}"
