/* AUTOMATICALLY GENERATED, DO NOT MODIFY */

/*
 * Schema-defined QAPI types
 *
 * Copyright IBM, Corp. 2011
 * Copyright (c) 2013-2018 Red Hat Inc.
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1 or later.
 * See the COPYING.LIB file in the top-level directory.
 */

#include "qemu/osdep.h"
#include "qapi/dealloc-visitor.h"
#include "qapi-types-net.h"
#include "qapi-visit-net.h"

void qapi_free_NetLegacyNicOptions(NetLegacyNicOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_NetLegacyNicOptions(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_NetdevUserOptions(NetdevUserOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_NetdevUserOptions(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_NetdevTapOptions(NetdevTapOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_NetdevTapOptions(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_NetdevSocketOptions(NetdevSocketOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_NetdevSocketOptions(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_NetdevL2TPv3Options(NetdevL2TPv3Options *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_NetdevL2TPv3Options(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_NetdevVdeOptions(NetdevVdeOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_NetdevVdeOptions(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_NetdevBridgeOptions(NetdevBridgeOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_NetdevBridgeOptions(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_NetdevHubPortOptions(NetdevHubPortOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_NetdevHubPortOptions(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_NetdevNetmapOptions(NetdevNetmapOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_NetdevNetmapOptions(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_NetdevVhostUserOptions(NetdevVhostUserOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_NetdevVhostUserOptions(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_NetdevVhostVDPAOptions(NetdevVhostVDPAOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_NetdevVhostVDPAOptions(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup NetClientDriver_lookup = {
    .array = (const char *const[]) {
        [NET_CLIENT_DRIVER_NONE] = "none",
        [NET_CLIENT_DRIVER_NIC] = "nic",
        [NET_CLIENT_DRIVER_USER] = "user",
        [NET_CLIENT_DRIVER_TAP] = "tap",
        [NET_CLIENT_DRIVER_L2TPV3] = "l2tpv3",
        [NET_CLIENT_DRIVER_SOCKET] = "socket",
        [NET_CLIENT_DRIVER_VDE] = "vde",
        [NET_CLIENT_DRIVER_BRIDGE] = "bridge",
        [NET_CLIENT_DRIVER_HUBPORT] = "hubport",
        [NET_CLIENT_DRIVER_NETMAP] = "netmap",
        [NET_CLIENT_DRIVER_VHOST_USER] = "vhost-user",
        [NET_CLIENT_DRIVER_VHOST_VDPA] = "vhost-vdpa",
    },
    .size = NET_CLIENT_DRIVER__MAX
};

void qapi_free_Netdev(Netdev *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_Netdev(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup RxState_lookup = {
    .array = (const char *const[]) {
        [RX_STATE_NORMAL] = "normal",
        [RX_STATE_NONE] = "none",
        [RX_STATE_ALL] = "all",
    },
    .size = RX_STATE__MAX
};

void qapi_free_RxFilterInfo(RxFilterInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_RxFilterInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_RxFilterInfoList(RxFilterInfoList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_RxFilterInfoList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_AnnounceParameters(AnnounceParameters *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_AnnounceParameters(v, NULL, &obj, NULL);
    visit_free(v);
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_types_net_c;
