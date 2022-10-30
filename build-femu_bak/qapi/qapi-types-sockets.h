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

#ifndef QAPI_TYPES_SOCKETS_H
#define QAPI_TYPES_SOCKETS_H

#include "qapi/qapi-builtin-types.h"
#include "qapi-types-common.h"

typedef enum NetworkAddressFamily {
    NETWORK_ADDRESS_FAMILY_IPV4,
    NETWORK_ADDRESS_FAMILY_IPV6,
    NETWORK_ADDRESS_FAMILY_UNIX,
    NETWORK_ADDRESS_FAMILY_VSOCK,
    NETWORK_ADDRESS_FAMILY_UNKNOWN,
    NETWORK_ADDRESS_FAMILY__MAX,
} NetworkAddressFamily;

#define NetworkAddressFamily_str(val) \
    qapi_enum_lookup(&NetworkAddressFamily_lookup, (val))

extern const QEnumLookup NetworkAddressFamily_lookup;

typedef struct InetSocketAddressBase InetSocketAddressBase;

typedef struct InetSocketAddress InetSocketAddress;

typedef struct UnixSocketAddress UnixSocketAddress;

typedef struct VsockSocketAddress VsockSocketAddress;

typedef struct q_obj_InetSocketAddress_wrapper q_obj_InetSocketAddress_wrapper;

typedef struct q_obj_UnixSocketAddress_wrapper q_obj_UnixSocketAddress_wrapper;

typedef struct q_obj_VsockSocketAddress_wrapper q_obj_VsockSocketAddress_wrapper;

typedef struct q_obj_String_wrapper q_obj_String_wrapper;

typedef enum SocketAddressLegacyKind {
    SOCKET_ADDRESS_LEGACY_KIND_INET,
    SOCKET_ADDRESS_LEGACY_KIND_UNIX,
    SOCKET_ADDRESS_LEGACY_KIND_VSOCK,
    SOCKET_ADDRESS_LEGACY_KIND_FD,
    SOCKET_ADDRESS_LEGACY_KIND__MAX,
} SocketAddressLegacyKind;

#define SocketAddressLegacyKind_str(val) \
    qapi_enum_lookup(&SocketAddressLegacyKind_lookup, (val))

extern const QEnumLookup SocketAddressLegacyKind_lookup;

typedef struct SocketAddressLegacy SocketAddressLegacy;

typedef enum SocketAddressType {
    SOCKET_ADDRESS_TYPE_INET,
    SOCKET_ADDRESS_TYPE_UNIX,
    SOCKET_ADDRESS_TYPE_VSOCK,
    SOCKET_ADDRESS_TYPE_FD,
    SOCKET_ADDRESS_TYPE__MAX,
} SocketAddressType;

#define SocketAddressType_str(val) \
    qapi_enum_lookup(&SocketAddressType_lookup, (val))

extern const QEnumLookup SocketAddressType_lookup;

typedef struct q_obj_SocketAddress_base q_obj_SocketAddress_base;

typedef struct SocketAddress SocketAddress;

typedef struct SocketAddressList SocketAddressList;

typedef struct InetSocketAddressBaseList InetSocketAddressBaseList;

struct InetSocketAddressBase {
    char *host;
    char *port;
};

void qapi_free_InetSocketAddressBase(InetSocketAddressBase *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(InetSocketAddressBase, qapi_free_InetSocketAddressBase)

struct InetSocketAddress {
    /* Members inherited from InetSocketAddressBase: */
    char *host;
    char *port;
    /* Own members: */
    bool has_numeric;
    bool numeric;
    bool has_to;
    uint16_t to;
    bool has_ipv4;
    bool ipv4;
    bool has_ipv6;
    bool ipv6;
    bool has_keep_alive;
    bool keep_alive;
};

static inline InetSocketAddressBase *qapi_InetSocketAddress_base(const InetSocketAddress *obj)
{
    return (InetSocketAddressBase *)obj;
}

void qapi_free_InetSocketAddress(InetSocketAddress *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(InetSocketAddress, qapi_free_InetSocketAddress)

struct UnixSocketAddress {
    char *path;
#if defined(CONFIG_LINUX)
    bool has_abstract;
    bool abstract;
#endif /* defined(CONFIG_LINUX) */
#if defined(CONFIG_LINUX)
    bool has_tight;
    bool tight;
#endif /* defined(CONFIG_LINUX) */
};

void qapi_free_UnixSocketAddress(UnixSocketAddress *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(UnixSocketAddress, qapi_free_UnixSocketAddress)

struct VsockSocketAddress {
    char *cid;
    char *port;
};

void qapi_free_VsockSocketAddress(VsockSocketAddress *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(VsockSocketAddress, qapi_free_VsockSocketAddress)

struct q_obj_InetSocketAddress_wrapper {
    InetSocketAddress *data;
};

struct q_obj_UnixSocketAddress_wrapper {
    UnixSocketAddress *data;
};

struct q_obj_VsockSocketAddress_wrapper {
    VsockSocketAddress *data;
};

struct q_obj_String_wrapper {
    String *data;
};

struct SocketAddressLegacy {
    SocketAddressLegacyKind type;
    union { /* union tag is @type */
        q_obj_InetSocketAddress_wrapper inet;
        q_obj_UnixSocketAddress_wrapper q_unix;
        q_obj_VsockSocketAddress_wrapper vsock;
        q_obj_String_wrapper fd;
    } u;
};

void qapi_free_SocketAddressLegacy(SocketAddressLegacy *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(SocketAddressLegacy, qapi_free_SocketAddressLegacy)

struct q_obj_SocketAddress_base {
    SocketAddressType type;
};

struct SocketAddress {
    SocketAddressType type;
    union { /* union tag is @type */
        InetSocketAddress inet;
        UnixSocketAddress q_unix;
        VsockSocketAddress vsock;
        String fd;
    } u;
};

void qapi_free_SocketAddress(SocketAddress *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(SocketAddress, qapi_free_SocketAddress)

struct SocketAddressList {
    SocketAddressList *next;
    SocketAddress *value;
};

void qapi_free_SocketAddressList(SocketAddressList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(SocketAddressList, qapi_free_SocketAddressList)

struct InetSocketAddressBaseList {
    InetSocketAddressBaseList *next;
    InetSocketAddressBase *value;
};

void qapi_free_InetSocketAddressBaseList(InetSocketAddressBaseList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(InetSocketAddressBaseList, qapi_free_InetSocketAddressBaseList)

#endif /* QAPI_TYPES_SOCKETS_H */
