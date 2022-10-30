/* AUTOMATICALLY GENERATED, DO NOT MODIFY */

/*
 * Schema-defined QAPI visitors
 *
 * Copyright IBM, Corp. 2011
 * Copyright (C) 2014-2018 Red Hat, Inc.
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1 or later.
 * See the COPYING.LIB file in the top-level directory.
 */

#include "qemu/osdep.h"
#include "qapi/error.h"
#include "qapi/qmp/qerror.h"
#include "qapi-visit-char.h"

bool visit_type_ChardevInfo_members(Visitor *v, ChardevInfo *obj, Error **errp)
{
    if (!visit_type_str(v, "label", &obj->label, errp)) {
        return false;
    }
    if (!visit_type_str(v, "filename", &obj->filename, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "frontend-open", &obj->frontend_open, errp)) {
        return false;
    }
    return true;
}

bool visit_type_ChardevInfo(Visitor *v, const char *name,
                 ChardevInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(ChardevInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_ChardevInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_ChardevInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_ChardevInfoList(Visitor *v, const char *name,
                 ChardevInfoList **obj, Error **errp)
{
    bool ok = false;
    ChardevInfoList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (ChardevInfoList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_ChardevInfo(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_ChardevInfoList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_ChardevBackendInfo_members(Visitor *v, ChardevBackendInfo *obj, Error **errp)
{
    if (!visit_type_str(v, "name", &obj->name, errp)) {
        return false;
    }
    return true;
}

bool visit_type_ChardevBackendInfo(Visitor *v, const char *name,
                 ChardevBackendInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(ChardevBackendInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_ChardevBackendInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_ChardevBackendInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_ChardevBackendInfoList(Visitor *v, const char *name,
                 ChardevBackendInfoList **obj, Error **errp)
{
    bool ok = false;
    ChardevBackendInfoList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (ChardevBackendInfoList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_ChardevBackendInfo(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_ChardevBackendInfoList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_DataFormat(Visitor *v, const char *name,
                 DataFormat *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &DataFormat_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_q_obj_ringbuf_write_arg_members(Visitor *v, q_obj_ringbuf_write_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "device", &obj->device, errp)) {
        return false;
    }
    if (!visit_type_str(v, "data", &obj->data, errp)) {
        return false;
    }
    if (visit_optional(v, "format", &obj->has_format)) {
        if (!visit_type_DataFormat(v, "format", &obj->format, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_q_obj_ringbuf_read_arg_members(Visitor *v, q_obj_ringbuf_read_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "device", &obj->device, errp)) {
        return false;
    }
    if (!visit_type_int(v, "size", &obj->size, errp)) {
        return false;
    }
    if (visit_optional(v, "format", &obj->has_format)) {
        if (!visit_type_DataFormat(v, "format", &obj->format, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_ChardevCommon_members(Visitor *v, ChardevCommon *obj, Error **errp)
{
    if (visit_optional(v, "logfile", &obj->has_logfile)) {
        if (!visit_type_str(v, "logfile", &obj->logfile, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "logappend", &obj->has_logappend)) {
        if (!visit_type_bool(v, "logappend", &obj->logappend, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_ChardevCommon(Visitor *v, const char *name,
                 ChardevCommon **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(ChardevCommon), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_ChardevCommon_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_ChardevCommon(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_ChardevFile_members(Visitor *v, ChardevFile *obj, Error **errp)
{
    if (!visit_type_ChardevCommon_members(v, (ChardevCommon *)obj, errp)) {
        return false;
    }
    if (visit_optional(v, "in", &obj->has_in)) {
        if (!visit_type_str(v, "in", &obj->in, errp)) {
            return false;
        }
    }
    if (!visit_type_str(v, "out", &obj->out, errp)) {
        return false;
    }
    if (visit_optional(v, "append", &obj->has_append)) {
        if (!visit_type_bool(v, "append", &obj->append, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_ChardevFile(Visitor *v, const char *name,
                 ChardevFile **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(ChardevFile), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_ChardevFile_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_ChardevFile(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_ChardevHostdev_members(Visitor *v, ChardevHostdev *obj, Error **errp)
{
    if (!visit_type_ChardevCommon_members(v, (ChardevCommon *)obj, errp)) {
        return false;
    }
    if (!visit_type_str(v, "device", &obj->device, errp)) {
        return false;
    }
    return true;
}

bool visit_type_ChardevHostdev(Visitor *v, const char *name,
                 ChardevHostdev **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(ChardevHostdev), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_ChardevHostdev_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_ChardevHostdev(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_ChardevSocket_members(Visitor *v, ChardevSocket *obj, Error **errp)
{
    if (!visit_type_ChardevCommon_members(v, (ChardevCommon *)obj, errp)) {
        return false;
    }
    if (!visit_type_SocketAddressLegacy(v, "addr", &obj->addr, errp)) {
        return false;
    }
    if (visit_optional(v, "tls-creds", &obj->has_tls_creds)) {
        if (!visit_type_str(v, "tls-creds", &obj->tls_creds, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "tls-authz", &obj->has_tls_authz)) {
        if (!visit_type_str(v, "tls-authz", &obj->tls_authz, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "server", &obj->has_server)) {
        if (!visit_type_bool(v, "server", &obj->server, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "wait", &obj->has_wait)) {
        if (!visit_type_bool(v, "wait", &obj->wait, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "nodelay", &obj->has_nodelay)) {
        if (!visit_type_bool(v, "nodelay", &obj->nodelay, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "telnet", &obj->has_telnet)) {
        if (!visit_type_bool(v, "telnet", &obj->telnet, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "tn3270", &obj->has_tn3270)) {
        if (!visit_type_bool(v, "tn3270", &obj->tn3270, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "websocket", &obj->has_websocket)) {
        if (!visit_type_bool(v, "websocket", &obj->websocket, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "reconnect", &obj->has_reconnect)) {
        if (!visit_type_int(v, "reconnect", &obj->reconnect, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_ChardevSocket(Visitor *v, const char *name,
                 ChardevSocket **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(ChardevSocket), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_ChardevSocket_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_ChardevSocket(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_ChardevUdp_members(Visitor *v, ChardevUdp *obj, Error **errp)
{
    if (!visit_type_ChardevCommon_members(v, (ChardevCommon *)obj, errp)) {
        return false;
    }
    if (!visit_type_SocketAddressLegacy(v, "remote", &obj->remote, errp)) {
        return false;
    }
    if (visit_optional(v, "local", &obj->has_local)) {
        if (!visit_type_SocketAddressLegacy(v, "local", &obj->local, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_ChardevUdp(Visitor *v, const char *name,
                 ChardevUdp **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(ChardevUdp), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_ChardevUdp_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_ChardevUdp(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_ChardevMux_members(Visitor *v, ChardevMux *obj, Error **errp)
{
    if (!visit_type_ChardevCommon_members(v, (ChardevCommon *)obj, errp)) {
        return false;
    }
    if (!visit_type_str(v, "chardev", &obj->chardev, errp)) {
        return false;
    }
    return true;
}

bool visit_type_ChardevMux(Visitor *v, const char *name,
                 ChardevMux **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(ChardevMux), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_ChardevMux_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_ChardevMux(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_ChardevStdio_members(Visitor *v, ChardevStdio *obj, Error **errp)
{
    if (!visit_type_ChardevCommon_members(v, (ChardevCommon *)obj, errp)) {
        return false;
    }
    if (visit_optional(v, "signal", &obj->has_signal)) {
        if (!visit_type_bool(v, "signal", &obj->signal, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_ChardevStdio(Visitor *v, const char *name,
                 ChardevStdio **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(ChardevStdio), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_ChardevStdio_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_ChardevStdio(*obj);
        *obj = NULL;
    }
    return ok;
}

#if defined(CONFIG_SPICE)
bool visit_type_ChardevSpiceChannel_members(Visitor *v, ChardevSpiceChannel *obj, Error **errp)
{
    if (!visit_type_ChardevCommon_members(v, (ChardevCommon *)obj, errp)) {
        return false;
    }
    if (!visit_type_str(v, "type", &obj->type, errp)) {
        return false;
    }
    return true;
}

bool visit_type_ChardevSpiceChannel(Visitor *v, const char *name,
                 ChardevSpiceChannel **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(ChardevSpiceChannel), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_ChardevSpiceChannel_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_ChardevSpiceChannel(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
bool visit_type_ChardevSpicePort_members(Visitor *v, ChardevSpicePort *obj, Error **errp)
{
    if (!visit_type_ChardevCommon_members(v, (ChardevCommon *)obj, errp)) {
        return false;
    }
    if (!visit_type_str(v, "fqdn", &obj->fqdn, errp)) {
        return false;
    }
    return true;
}

bool visit_type_ChardevSpicePort(Visitor *v, const char *name,
                 ChardevSpicePort **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(ChardevSpicePort), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_ChardevSpicePort_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_ChardevSpicePort(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(CONFIG_SPICE) */

bool visit_type_ChardevVC_members(Visitor *v, ChardevVC *obj, Error **errp)
{
    if (!visit_type_ChardevCommon_members(v, (ChardevCommon *)obj, errp)) {
        return false;
    }
    if (visit_optional(v, "width", &obj->has_width)) {
        if (!visit_type_int(v, "width", &obj->width, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "height", &obj->has_height)) {
        if (!visit_type_int(v, "height", &obj->height, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "cols", &obj->has_cols)) {
        if (!visit_type_int(v, "cols", &obj->cols, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "rows", &obj->has_rows)) {
        if (!visit_type_int(v, "rows", &obj->rows, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_ChardevVC(Visitor *v, const char *name,
                 ChardevVC **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(ChardevVC), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_ChardevVC_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_ChardevVC(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_ChardevRingbuf_members(Visitor *v, ChardevRingbuf *obj, Error **errp)
{
    if (!visit_type_ChardevCommon_members(v, (ChardevCommon *)obj, errp)) {
        return false;
    }
    if (visit_optional(v, "size", &obj->has_size)) {
        if (!visit_type_int(v, "size", &obj->size, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_ChardevRingbuf(Visitor *v, const char *name,
                 ChardevRingbuf **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(ChardevRingbuf), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_ChardevRingbuf_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_ChardevRingbuf(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_ChardevFile_wrapper_members(Visitor *v, q_obj_ChardevFile_wrapper *obj, Error **errp)
{
    if (!visit_type_ChardevFile(v, "data", &obj->data, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_ChardevHostdev_wrapper_members(Visitor *v, q_obj_ChardevHostdev_wrapper *obj, Error **errp)
{
    if (!visit_type_ChardevHostdev(v, "data", &obj->data, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_ChardevSocket_wrapper_members(Visitor *v, q_obj_ChardevSocket_wrapper *obj, Error **errp)
{
    if (!visit_type_ChardevSocket(v, "data", &obj->data, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_ChardevUdp_wrapper_members(Visitor *v, q_obj_ChardevUdp_wrapper *obj, Error **errp)
{
    if (!visit_type_ChardevUdp(v, "data", &obj->data, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_ChardevCommon_wrapper_members(Visitor *v, q_obj_ChardevCommon_wrapper *obj, Error **errp)
{
    if (!visit_type_ChardevCommon(v, "data", &obj->data, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_ChardevMux_wrapper_members(Visitor *v, q_obj_ChardevMux_wrapper *obj, Error **errp)
{
    if (!visit_type_ChardevMux(v, "data", &obj->data, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_ChardevStdio_wrapper_members(Visitor *v, q_obj_ChardevStdio_wrapper *obj, Error **errp)
{
    if (!visit_type_ChardevStdio(v, "data", &obj->data, errp)) {
        return false;
    }
    return true;
}

#if defined(CONFIG_SPICE)
bool visit_type_q_obj_ChardevSpiceChannel_wrapper_members(Visitor *v, q_obj_ChardevSpiceChannel_wrapper *obj, Error **errp)
{
    if (!visit_type_ChardevSpiceChannel(v, "data", &obj->data, errp)) {
        return false;
    }
    return true;
}
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
bool visit_type_q_obj_ChardevSpicePort_wrapper_members(Visitor *v, q_obj_ChardevSpicePort_wrapper *obj, Error **errp)
{
    if (!visit_type_ChardevSpicePort(v, "data", &obj->data, errp)) {
        return false;
    }
    return true;
}
#endif /* defined(CONFIG_SPICE) */

bool visit_type_q_obj_ChardevVC_wrapper_members(Visitor *v, q_obj_ChardevVC_wrapper *obj, Error **errp)
{
    if (!visit_type_ChardevVC(v, "data", &obj->data, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_ChardevRingbuf_wrapper_members(Visitor *v, q_obj_ChardevRingbuf_wrapper *obj, Error **errp)
{
    if (!visit_type_ChardevRingbuf(v, "data", &obj->data, errp)) {
        return false;
    }
    return true;
}

bool visit_type_ChardevBackendKind(Visitor *v, const char *name,
                 ChardevBackendKind *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &ChardevBackendKind_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_ChardevBackend_members(Visitor *v, ChardevBackend *obj, Error **errp)
{
    if (!visit_type_ChardevBackendKind(v, "type", &obj->type, errp)) {
        return false;
    }
    switch (obj->type) {
    case CHARDEV_BACKEND_KIND_FILE:
        return visit_type_q_obj_ChardevFile_wrapper_members(v, &obj->u.file, errp);
    case CHARDEV_BACKEND_KIND_SERIAL:
        return visit_type_q_obj_ChardevHostdev_wrapper_members(v, &obj->u.serial, errp);
    case CHARDEV_BACKEND_KIND_PARALLEL:
        return visit_type_q_obj_ChardevHostdev_wrapper_members(v, &obj->u.parallel, errp);
    case CHARDEV_BACKEND_KIND_PIPE:
        return visit_type_q_obj_ChardevHostdev_wrapper_members(v, &obj->u.pipe, errp);
    case CHARDEV_BACKEND_KIND_SOCKET:
        return visit_type_q_obj_ChardevSocket_wrapper_members(v, &obj->u.socket, errp);
    case CHARDEV_BACKEND_KIND_UDP:
        return visit_type_q_obj_ChardevUdp_wrapper_members(v, &obj->u.udp, errp);
    case CHARDEV_BACKEND_KIND_PTY:
        return visit_type_q_obj_ChardevCommon_wrapper_members(v, &obj->u.pty, errp);
    case CHARDEV_BACKEND_KIND_NULL:
        return visit_type_q_obj_ChardevCommon_wrapper_members(v, &obj->u.null, errp);
    case CHARDEV_BACKEND_KIND_MUX:
        return visit_type_q_obj_ChardevMux_wrapper_members(v, &obj->u.mux, errp);
    case CHARDEV_BACKEND_KIND_MSMOUSE:
        return visit_type_q_obj_ChardevCommon_wrapper_members(v, &obj->u.msmouse, errp);
    case CHARDEV_BACKEND_KIND_WCTABLET:
        return visit_type_q_obj_ChardevCommon_wrapper_members(v, &obj->u.wctablet, errp);
    case CHARDEV_BACKEND_KIND_BRAILLE:
        return visit_type_q_obj_ChardevCommon_wrapper_members(v, &obj->u.braille, errp);
    case CHARDEV_BACKEND_KIND_TESTDEV:
        return visit_type_q_obj_ChardevCommon_wrapper_members(v, &obj->u.testdev, errp);
    case CHARDEV_BACKEND_KIND_STDIO:
        return visit_type_q_obj_ChardevStdio_wrapper_members(v, &obj->u.stdio, errp);
    case CHARDEV_BACKEND_KIND_CONSOLE:
        return visit_type_q_obj_ChardevCommon_wrapper_members(v, &obj->u.console, errp);
#if defined(CONFIG_SPICE)
    case CHARDEV_BACKEND_KIND_SPICEVMC:
        return visit_type_q_obj_ChardevSpiceChannel_wrapper_members(v, &obj->u.spicevmc, errp);
#endif /* defined(CONFIG_SPICE) */
#if defined(CONFIG_SPICE)
    case CHARDEV_BACKEND_KIND_SPICEPORT:
        return visit_type_q_obj_ChardevSpicePort_wrapper_members(v, &obj->u.spiceport, errp);
#endif /* defined(CONFIG_SPICE) */
    case CHARDEV_BACKEND_KIND_VC:
        return visit_type_q_obj_ChardevVC_wrapper_members(v, &obj->u.vc, errp);
    case CHARDEV_BACKEND_KIND_RINGBUF:
        return visit_type_q_obj_ChardevRingbuf_wrapper_members(v, &obj->u.ringbuf, errp);
    case CHARDEV_BACKEND_KIND_MEMORY:
        return visit_type_q_obj_ChardevRingbuf_wrapper_members(v, &obj->u.memory, errp);
    default:
        abort();
    }
    return true;
}

bool visit_type_ChardevBackend(Visitor *v, const char *name,
                 ChardevBackend **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(ChardevBackend), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_ChardevBackend_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_ChardevBackend(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_ChardevReturn_members(Visitor *v, ChardevReturn *obj, Error **errp)
{
    if (visit_optional(v, "pty", &obj->has_pty)) {
        if (!visit_type_str(v, "pty", &obj->pty, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_ChardevReturn(Visitor *v, const char *name,
                 ChardevReturn **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(ChardevReturn), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_ChardevReturn_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_ChardevReturn(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_chardev_add_arg_members(Visitor *v, q_obj_chardev_add_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "id", &obj->id, errp)) {
        return false;
    }
    if (!visit_type_ChardevBackend(v, "backend", &obj->backend, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_chardev_change_arg_members(Visitor *v, q_obj_chardev_change_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "id", &obj->id, errp)) {
        return false;
    }
    if (!visit_type_ChardevBackend(v, "backend", &obj->backend, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_chardev_remove_arg_members(Visitor *v, q_obj_chardev_remove_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "id", &obj->id, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_chardev_send_break_arg_members(Visitor *v, q_obj_chardev_send_break_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "id", &obj->id, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_VSERPORT_CHANGE_arg_members(Visitor *v, q_obj_VSERPORT_CHANGE_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "id", &obj->id, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "open", &obj->open, errp)) {
        return false;
    }
    return true;
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_visit_char_c;
