/* AUTOMATICALLY GENERATED, DO NOT MODIFY */

/*
 * Schema-defined QAPI/QMP events
 *
 * Copyright (c) 2014 Wenchao Xia
 * Copyright (c) 2015-2018 Red Hat Inc.
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1 or later.
 * See the COPYING.LIB file in the top-level directory.
 */

#ifndef QAPI_EVENTS_UI_H
#define QAPI_EVENTS_UI_H

#include "qapi-events-common.h"
#include "qapi-events-sockets.h"
#include "qapi/util.h"
#include "qapi-types-ui.h"

#if defined(CONFIG_SPICE)
void qapi_event_send_spice_connected(SpiceBasicInfo *server, SpiceBasicInfo *client);
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
void qapi_event_send_spice_initialized(SpiceServerInfo *server, SpiceChannel *client);
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
void qapi_event_send_spice_disconnected(SpiceBasicInfo *server, SpiceBasicInfo *client);
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
void qapi_event_send_spice_migrate_completed(void);
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_VNC)
void qapi_event_send_vnc_connected(VncServerInfo *server, VncBasicInfo *client);
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
void qapi_event_send_vnc_initialized(VncServerInfo *server, VncClientInfo *client);
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
void qapi_event_send_vnc_disconnected(VncServerInfo *server, VncClientInfo *client);
#endif /* defined(CONFIG_VNC) */

#endif /* QAPI_EVENTS_UI_H */
