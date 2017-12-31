// Copyright (c) 2018 The Bitcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file license.txt or http://www.opensource.org/licenses/mit-license.php.

#ifndef __INCLUDED_COIN_H__
#define __INCLUDED_COIN_H__

#include <string>

static const std::string mainnet_seeds[] = {"dnsseed.feathercoin.com",
                                            "dnsseed.feathercoin.ch",
                                            "dnsseed-static.feathercoin.ch",
                                            ""};

static const std::string testnet_seeds[] = {"dnsseed-testnet.feathercoin.ch",
                                            ""};

static const int mainnet_port = 9336;
static const int testnet_port = 19336;

static unsigned char pchMessageStart[4] = { 0xfb, 0xc0, 0xb6, 0xdb };
static unsigned char pchMessageStart_testnet[4] = { 0xfc, 0xc1, 0xb7, 0xdc };

#define REQUIRE_VERSION 60002
static const int minimunClientVersion = 60000;
static const int PROTOCOL_VERSION = 70002;

#endif // __INCLUDED_COIN_H__
