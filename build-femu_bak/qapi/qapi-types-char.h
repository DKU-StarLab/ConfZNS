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

#ifndef QAPI_TYPES_CHAR_H
#define QAPI_TYPES_CHAR_H

#include "qapi/qapi-builtin-types.h"
#include "qapi-types-sockets.h"

typedef struct ChardevInfo ChardevInfo;

typedef struct ChardevInfoList ChardevInfoList;

typedef struct ChardevBackendInfo ChardevBackendInfo;

typedef struct ChardevBackendInfoList ChardevBackendInfoList;

typedef enum DataFormat {
    DATA_FORMAT_UTF8,
    DATA_FORMAT_BASE64,
    DATA_FORMAT__MAX,
} DataFormat;

#define DataFormat_str(val) \
    qapi_enum_lookup(&DataFormat_lookup, (val))

extern const QEnumLookup DataFormat_lookup;

typedef struct q_obj_ringbuf_write_arg q_obj_ringbuf_write_arg;

typedef struct q_obj_ringbuf_read_arg q_obj_ringbuf_read_arg;

typedef struct ChardevCommon ChardevCommon;

typedef struct ChardevFile ChardevFile;

typedef struct ChardevHostdev ChardevHostdev;

typedef struct ChardevSocket ChardevSocket;

typedef struct ChardevUdp ChardevUdp;

typedef struct ChardevMux ChardevMux;

typedef struct ChardevStdio ChardevStdio;

#if defined(CONFIG_SPICE)
typedef struct ChardevSpiceChannel ChardevSpiceChannel;
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
typedef struct ChardevSpicePort ChardevSpicePort;
#endif /* defined(CONFIG_SPICE) */

typedef struct ChardevVC ChardevVC;

typedef struct ChardevRingbuf ChardevRingbuf;

typedef struct q_obj_ChardevFile_wrapper q_obj_ChardevFile_wrapper;

typedef struct q_obj_ChardevHostdev_wrapper q_obj_ChardevHostdev_wrapper;

typedef struct q_obj_ChardevSocket_wrapper q_obj_ChardevSocket_wrapper;

typedef struct q_obj_ChardevUdp_wrapper q_obj_ChardevUdp_wrapper;

typedef struct q_obj_ChardevCommon_wrapper q_obj_ChardevCommon_wrapper;

typedef struct q_obj_ChardevMux_wrapper q_obj_ChardevMux_wrapper;

typedef struct q_obj_ChardevStdio_wrapper q_obj_ChardevStdio_wrapper;

#if defined(CONFIG_SPICE)
typedef struct q_obj_ChardevSpiceChannel_wrapper q_obj_ChardevSpiceChannel_wrapper;
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
typedef struct q_obj_ChardevSpicePort_wrapper q_obj_ChardevSpicePort_wrapper;
#endif /* defined(CONFIG_SPICE) */

typedef struct q_obj_ChardevVC_wrapper q_obj_ChardevVC_wrapper;

typedef struct q_obj_ChardevRingbuf_wrapper q_obj_ChardevRingbuf_wrapper;

typedef enum ChardevBackendKind {
    CHARDEV_BACKEND_KIND_FILE,
    CHARDEV_BACKEND_KIND_SERIAL,
    CHARDEV_BACKEND_KIND_PARALLEL,
    CHARDEV_BACKEND_KIND_PIPE,
    CHARDEV_BACKEND_KIND_SOCKET,
    CHARDEV_BACKEND_KIND_UDP,
    CHARDEV_BACKEND_KIND_PTY,
    CHARDEV_BACKEND_KIND_NULL,
    CHARDEV_BACKEND_KIND_MUX,
    CHARDEV_BACKEND_KIND_MSMOUSE,
    CHARDEV_BACKEND_KIND_WCTABLET,
    CHARDEV_BACKEND_KIND_BRAILLE,
    CHARDEV_BACKEND_KIND_TESTDEV,
    CHARDEV_BACKEND_KIND_STDIO,
    CHARDEV_BACKEND_KIND_CONSOLE,
#if defined(CONFIG_SPICE)
    CHARDEV_BACKEND_KIND_SPICEVMC,
#endif /* defined(CONFIG_SPICE) */
#if defined(CONFIG_SPICE)
    CHARDEV_BACKEND_KIND_SPICEPORT,
#endif /* defined(CONFIG_SPICE) */
    CHARDEV_BACKEND_KIND_VC,
    CHARDEV_BACKEND_KIND_RINGBUF,
    CHARDEV_BACKEND_KIND_MEMORY,
    CHARDEV_BACKEND_KIND__MAX,
} ChardevBackendKind;

#define ChardevBackendKind_str(val) \
    qapi_enum_lookup(&ChardevBackendKind_lookup, (val))

extern const QEnumLookup ChardevBackendKind_lookup;

typedef struct ChardevBackend ChardevBackend;

typedef struct ChardevReturn ChardevReturn;

typedef struct q_obj_chardev_add_arg q_obj_chardev_add_arg;

typedef struct q_obj_chardev_change_arg q_obj_chardev_change_arg;

typedef struct q_obj_chardev_remove_arg q_obj_chardev_remove_arg;

typedef struct q_obj_chardev_send_break_arg q_obj_chardev_send_break_arg;

typedef struct q_obj_VSERPORT_CHANGE_arg q_obj_VSERPORT_CHANGE_arg;

struct ChardevInfo {
    char *label;
    char *filename;
    bool frontend_open;
};

void qapi_free_ChardevInfo(ChardevInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ChardevInfo, qapi_free_ChardevInfo)

struct ChardevInfoList {
    ChardevInfoList *next;
    ChardevInfo *value;
};

void qapi_free_ChardevInfoList(ChardevInfoList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ChardevInfoList, qapi_free_ChardevInfoList)

struct ChardevBackendInfo {
    char *name;
};

void qapi_free_ChardevBackendInfo(ChardevBackendInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ChardevBackendInfo, qapi_free_ChardevBackendInfo)

struct ChardevBackendInfoList {
    ChardevBackendInfoList *next;
    ChardevBackendInfo *value;
};

void qapi_free_ChardevBackendInfoList(ChardevBackendInfoList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ChardevBackendInfoList, qapi_free_ChardevBackendInfoList)

struct q_obj_ringbuf_write_arg {
    char *device;
    char *data;
    bool has_format;
    DataFormat format;
};

struct q_obj_ringbuf_read_arg {
    char *device;
    int64_t size;
    bool has_format;
    DataFormat format;
};

struct ChardevCommon {
    bool has_logfile;
    char *logfile;
    bool has_logappend;
    bool logappend;
};

void qapi_free_ChardevCommon(ChardevCommon *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ChardevCommon, qapi_free_ChardevCommon)

struct ChardevFile {
    /* Members inherited from ChardevCommon: */
    bool has_logfile;
    char *logfile;
    bool has_logappend;
    bool logappend;
    /* Own members: */
    bool has_in;
    char *in;
    char *out;
    bool has_append;
    bool append;
};

static inline ChardevCommon *qapi_ChardevFile_base(const ChardevFile *obj)
{
    return (ChardevCommon *)obj;
}

void qapi_free_ChardevFile(ChardevFile *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ChardevFile, qapi_free_ChardevFile)

struct ChardevHostdev {
    /* Members inherited from ChardevCommon: */
    bool has_logfile;
    char *logfile;
    bool has_logappend;
    bool logappend;
    /* Own members: */
    char *device;
};

static inline ChardevCommon *qapi_ChardevHostdev_base(const ChardevHostdev *obj)
{
    return (ChardevCommon *)obj;
}

void qapi_free_ChardevHostdev(ChardevHostdev *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ChardevHostdev, qapi_free_ChardevHostdev)

struct ChardevSocket {
    /* Members inherited from ChardevCommon: */
    bool has_logfile;
    char *logfile;
    bool has_logappend;
    bool logappend;
    /* Own members: */
    SocketAddressLegacy *addr;
    bool has_tls_creds;
    char *tls_creds;
    bool has_tls_authz;
    char *tls_authz;
    bool has_server;
    bool server;
    bool has_wait;
    bool wait;
    bool has_nodelay;
    bool nodelay;
    bool has_telnet;
    bool telnet;
    bool has_tn3270;
    bool tn3270;
    bool has_websocket;
    bool websocket;
    bool has_reconnect;
    int64_t reconnect;
};

static inline ChardevCommon *qapi_ChardevSocket_base(const ChardevSocket *obj)
{
    return (ChardevCommon *)obj;
}

void qapi_free_ChardevSocket(ChardevSocket *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ChardevSocket, qapi_free_ChardevSocket)

struct ChardevUdp {
    /* Members inherited from ChardevCommon: */
    bool has_logfile;
    char *logfile;
    bool has_logappend;
    bool logappend;
    /* Own members: */
    SocketAddressLegacy *remote;
    bool has_local;
    SocketAddressLegacy *local;
};

static inline ChardevCommon *qapi_ChardevUdp_base(const ChardevUdp *obj)
{
    return (ChardevCommon *)obj;
}

void qapi_free_ChardevUdp(ChardevUdp *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ChardevUdp, qapi_free_ChardevUdp)

struct ChardevMux {
    /* Members inherited from ChardevCommon: */
    bool has_logfile;
    char *logfile;
    bool has_logappend;
    bool logappend;
    /* Own members: */
    char *chardev;
};

static inline ChardevCommon *qapi_ChardevMux_base(const ChardevMux *obj)
{
    return (ChardevCommon *)obj;
}

void qapi_free_ChardevMux(ChardevMux *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ChardevMux, qapi_free_ChardevMux)

struct ChardevStdio {
    /* Members inherited from ChardevCommon: */
    bool has_logfile;
    char *logfile;
    bool has_logappend;
    bool logappend;
    /* Own members: */
    bool has_signal;
    bool signal;
};

static inline ChardevCommon *qapi_ChardevStdio_base(const ChardevStdio *obj)
{
    return (ChardevCommon *)obj;
}

void qapi_free_ChardevStdio(ChardevStdio *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ChardevStdio, qapi_free_ChardevStdio)

#if defined(CONFIG_SPICE)
struct ChardevSpiceChannel {
    /* Members inherited from ChardevCommon: */
    bool has_logfile;
    char *logfile;
    bool has_logappend;
    bool logappend;
    /* Own members: */
    char *type;
};
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
static inline ChardevCommon *qapi_ChardevSpiceChannel_base(const ChardevSpiceChannel *obj)
{
    return (ChardevCommon *)obj;
}

void qapi_free_ChardevSpiceChannel(ChardevSpiceChannel *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ChardevSpiceChannel, qapi_free_ChardevSpiceChannel)
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
struct ChardevSpicePort {
    /* Members inherited from ChardevCommon: */
    bool has_logfile;
    char *logfile;
    bool has_logappend;
    bool logappend;
    /* Own members: */
    char *fqdn;
};
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
static inline ChardevCommon *qapi_ChardevSpicePort_base(const ChardevSpicePort *obj)
{
    return (ChardevCommon *)obj;
}

void qapi_free_ChardevSpicePort(ChardevSpicePort *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ChardevSpicePort, qapi_free_ChardevSpicePort)
#endif /* defined(CONFIG_SPICE) */

struct ChardevVC {
    /* Members inherited from ChardevCommon: */
    bool has_logfile;
    char *logfile;
    bool has_logappend;
    bool logappend;
    /* Own members: */
    bool has_width;
    int64_t width;
    bool has_height;
    int64_t height;
    bool has_cols;
    int64_t cols;
    bool has_rows;
    int64_t rows;
};

static inline ChardevCommon *qapi_ChardevVC_base(const ChardevVC *obj)
{
    return (ChardevCommon *)obj;
}

void qapi_free_ChardevVC(ChardevVC *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ChardevVC, qapi_free_ChardevVC)

struct ChardevRingbuf {
    /* Members inherited from ChardevCommon: */
    bool has_logfile;
    char *logfile;
    bool has_logappend;
    bool logappend;
    /* Own members: */
    bool has_size;
    int64_t size;
};

static inline ChardevCommon *qapi_ChardevRingbuf_base(const ChardevRingbuf *obj)
{
    return (ChardevCommon *)obj;
}

void qapi_free_ChardevRingbuf(ChardevRingbuf *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ChardevRingbuf, qapi_free_ChardevRingbuf)

struct q_obj_ChardevFile_wrapper {
    ChardevFile *data;
};

struct q_obj_ChardevHostdev_wrapper {
    ChardevHostdev *data;
};

struct q_obj_ChardevSocket_wrapper {
    ChardevSocket *data;
};

struct q_obj_ChardevUdp_wrapper {
    ChardevUdp *data;
};

struct q_obj_ChardevCommon_wrapper {
    ChardevCommon *data;
};

struct q_obj_ChardevMux_wrapper {
    ChardevMux *data;
};

struct q_obj_ChardevStdio_wrapper {
    ChardevStdio *data;
};

#if defined(CONFIG_SPICE)
struct q_obj_ChardevSpiceChannel_wrapper {
    ChardevSpiceChannel *data;
};
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
struct q_obj_ChardevSpicePort_wrapper {
    ChardevSpicePort *data;
};
#endif /* defined(CONFIG_SPICE) */

struct q_obj_ChardevVC_wrapper {
    ChardevVC *data;
};

struct q_obj_ChardevRingbuf_wrapper {
    ChardevRingbuf *data;
};

struct ChardevBackend {
    ChardevBackendKind type;
    union { /* union tag is @type */
        q_obj_ChardevFile_wrapper file;
        q_obj_ChardevHostdev_wrapper serial;
        q_obj_ChardevHostdev_wrapper parallel;
        q_obj_ChardevHostdev_wrapper pipe;
        q_obj_ChardevSocket_wrapper socket;
        q_obj_ChardevUdp_wrapper udp;
        q_obj_ChardevCommon_wrapper pty;
        q_obj_ChardevCommon_wrapper null;
        q_obj_ChardevMux_wrapper mux;
        q_obj_ChardevCommon_wrapper msmouse;
        q_obj_ChardevCommon_wrapper wctablet;
        q_obj_ChardevCommon_wrapper braille;
        q_obj_ChardevCommon_wrapper testdev;
        q_obj_ChardevStdio_wrapper stdio;
        q_obj_ChardevCommon_wrapper console;
#if defined(CONFIG_SPICE)
        q_obj_ChardevSpiceChannel_wrapper spicevmc;
#endif /* defined(CONFIG_SPICE) */
#if defined(CONFIG_SPICE)
        q_obj_ChardevSpicePort_wrapper spiceport;
#endif /* defined(CONFIG_SPICE) */
        q_obj_ChardevVC_wrapper vc;
        q_obj_ChardevRingbuf_wrapper ringbuf;
        q_obj_ChardevRingbuf_wrapper memory;
    } u;
};

void qapi_free_ChardevBackend(ChardevBackend *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ChardevBackend, qapi_free_ChardevBackend)

struct ChardevReturn {
    bool has_pty;
    char *pty;
};

void qapi_free_ChardevReturn(ChardevReturn *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ChardevReturn, qapi_free_ChardevReturn)

struct q_obj_chardev_add_arg {
    char *id;
    ChardevBackend *backend;
};

struct q_obj_chardev_change_arg {
    char *id;
    ChardevBackend *backend;
};

struct q_obj_chardev_remove_arg {
    char *id;
};

struct q_obj_chardev_send_break_arg {
    char *id;
};

struct q_obj_VSERPORT_CHANGE_arg {
    char *id;
    bool open;
};

#endif /* QAPI_TYPES_CHAR_H */
