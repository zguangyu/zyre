/*  =========================================================================
    zyre_classes - private header file

    Copyright (c) the Contributors as noted in the AUTHORS file.

    This file is part of Zyre, an open-source framework for proximity-based
    peer-to-peer applications -- See http://zyre.org.

    This Source Code Form is subject to the terms of the Mozilla Public
    License, v. 2.0. If a copy of the MPL was not distributed with this
    file, You can obtain one at http://mozilla.org/MPL/2.0/.
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
    =========================================================================
*/

#ifndef ZYRE_CLASSES_H_INCLUDED
#define ZYRE_CLASSES_H_INCLUDED

//  Platform definitions, must come first
#include "platform.h"

//  External API
#include "../include/zyre.h"

//  Extra headers

//  Opaque class structures to allow forward references
#ifndef ZRE_MSG_T_DEFINED
typedef struct _zre_msg_t zre_msg_t;
#define ZRE_MSG_T_DEFINED
#endif
#ifndef ZYRE_PEER_T_DEFINED
typedef struct _zyre_peer_t zyre_peer_t;
#define ZYRE_PEER_T_DEFINED
#endif
#ifndef ZYRE_GROUP_T_DEFINED
typedef struct _zyre_group_t zyre_group_t;
#define ZYRE_GROUP_T_DEFINED
#endif
#ifndef ZYRE_NODE_T_DEFINED
typedef struct _zyre_node_t zyre_node_t;
#define ZYRE_NODE_T_DEFINED
#endif

//  Internal API

#include "zre_msg.h"
#include "zyre_peer.h"
#include "zyre_group.h"
#include "zyre_node.h"

//  *** To avoid double-definitions, only define if building without draft ***
#ifndef ZYRE_BUILD_DRAFT_API

//  *** Draft method, defined for internal use only ***
//  Set an alternative endpoint value when using GOSSIP ONLY. This is useful
//  if you're advertising an endpoint behind a NAT.
ZYRE_PRIVATE void
    zyre_set_advertised_endpoint (zyre_t *self, const char *value);

//  *** Draft method, defined for internal use only ***
//  Apply a azcert to a Zyre node.
ZYRE_PRIVATE void
    zyre_set_zcert (zyre_t *self, zcert_t *zcert);

//  *** Draft method, defined for internal use only ***
//  Specify the ZAP domain (for use with CURVE).
ZYRE_PRIVATE void
    zyre_set_zap_domain (zyre_t *self, const char *domain);

//  *** Draft method, defined for internal use only ***
//  Set-up gossip discovery with CURVE enabled.
ZYRE_PRIVATE void
    zyre_gossip_connect_curve (zyre_t *self, const char *public_key, const char *format, ...) CHECK_PRINTF (3);

//  *** Draft method, defined for internal use only ***
//  Explicitly connect to a peer
ZYRE_PRIVATE int
    zyre_require_peer (zyre_t *self, const char *uuid, const char *endpoint, const char *public_key);

//  *** Draft method, defined for internal use only ***
//  Self test of this class.
ZYRE_PRIVATE void
    zre_msg_test (bool verbose);

//  *** Draft method, defined for internal use only ***
//  Self test of this class.
ZYRE_PRIVATE void
    zyre_peer_test (bool verbose);

//  *** Draft method, defined for internal use only ***
//  Self test of this class.
ZYRE_PRIVATE void
    zyre_group_test (bool verbose);

//  *** Draft method, defined for internal use only ***
//  Self test of this class.
ZYRE_PRIVATE void
    zyre_node_test (bool verbose);

//  Self test for private classes
ZYRE_PRIVATE void
    zyre_private_selftest (bool verbose, const char *subtest);

#endif // ZYRE_BUILD_DRAFT_API

//  Private constants
#define REAP_INTERVAL	1000 //                   Once per second
#endif
