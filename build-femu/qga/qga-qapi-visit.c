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
#include "qga-qapi-visit.h"

bool visit_type_q_obj_guest_sync_delimited_arg_members(Visitor *v, q_obj_guest_sync_delimited_arg *obj, Error **errp)
{
    if (!visit_type_int(v, "id", &obj->id, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_guest_sync_arg_members(Visitor *v, q_obj_guest_sync_arg *obj, Error **errp)
{
    if (!visit_type_int(v, "id", &obj->id, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_guest_set_time_arg_members(Visitor *v, q_obj_guest_set_time_arg *obj, Error **errp)
{
    if (visit_optional(v, "time", &obj->has_time)) {
        if (!visit_type_int(v, "time", &obj->time, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_GuestAgentCommandInfo_members(Visitor *v, GuestAgentCommandInfo *obj, Error **errp)
{
    if (!visit_type_str(v, "name", &obj->name, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "enabled", &obj->enabled, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "success-response", &obj->success_response, errp)) {
        return false;
    }
    return true;
}

bool visit_type_GuestAgentCommandInfo(Visitor *v, const char *name,
                 GuestAgentCommandInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(GuestAgentCommandInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_GuestAgentCommandInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_GuestAgentCommandInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_GuestAgentCommandInfoList(Visitor *v, const char *name,
                 GuestAgentCommandInfoList **obj, Error **errp)
{
    bool ok = false;
    GuestAgentCommandInfoList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (GuestAgentCommandInfoList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_GuestAgentCommandInfo(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_GuestAgentCommandInfoList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_GuestAgentInfo_members(Visitor *v, GuestAgentInfo *obj, Error **errp)
{
    if (!visit_type_str(v, "version", &obj->version, errp)) {
        return false;
    }
    if (!visit_type_GuestAgentCommandInfoList(v, "supported_commands", &obj->supported_commands, errp)) {
        return false;
    }
    return true;
}

bool visit_type_GuestAgentInfo(Visitor *v, const char *name,
                 GuestAgentInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(GuestAgentInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_GuestAgentInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_GuestAgentInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_guest_shutdown_arg_members(Visitor *v, q_obj_guest_shutdown_arg *obj, Error **errp)
{
    if (visit_optional(v, "mode", &obj->has_mode)) {
        if (!visit_type_str(v, "mode", &obj->mode, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_q_obj_guest_file_open_arg_members(Visitor *v, q_obj_guest_file_open_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "path", &obj->path, errp)) {
        return false;
    }
    if (visit_optional(v, "mode", &obj->has_mode)) {
        if (!visit_type_str(v, "mode", &obj->mode, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_q_obj_guest_file_close_arg_members(Visitor *v, q_obj_guest_file_close_arg *obj, Error **errp)
{
    if (!visit_type_int(v, "handle", &obj->handle, errp)) {
        return false;
    }
    return true;
}

bool visit_type_GuestFileRead_members(Visitor *v, GuestFileRead *obj, Error **errp)
{
    if (!visit_type_int(v, "count", &obj->count, errp)) {
        return false;
    }
    if (!visit_type_str(v, "buf-b64", &obj->buf_b64, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "eof", &obj->eof, errp)) {
        return false;
    }
    return true;
}

bool visit_type_GuestFileRead(Visitor *v, const char *name,
                 GuestFileRead **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(GuestFileRead), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_GuestFileRead_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_GuestFileRead(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_guest_file_read_arg_members(Visitor *v, q_obj_guest_file_read_arg *obj, Error **errp)
{
    if (!visit_type_int(v, "handle", &obj->handle, errp)) {
        return false;
    }
    if (visit_optional(v, "count", &obj->has_count)) {
        if (!visit_type_int(v, "count", &obj->count, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_GuestFileWrite_members(Visitor *v, GuestFileWrite *obj, Error **errp)
{
    if (!visit_type_int(v, "count", &obj->count, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "eof", &obj->eof, errp)) {
        return false;
    }
    return true;
}

bool visit_type_GuestFileWrite(Visitor *v, const char *name,
                 GuestFileWrite **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(GuestFileWrite), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_GuestFileWrite_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_GuestFileWrite(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_guest_file_write_arg_members(Visitor *v, q_obj_guest_file_write_arg *obj, Error **errp)
{
    if (!visit_type_int(v, "handle", &obj->handle, errp)) {
        return false;
    }
    if (!visit_type_str(v, "buf-b64", &obj->buf_b64, errp)) {
        return false;
    }
    if (visit_optional(v, "count", &obj->has_count)) {
        if (!visit_type_int(v, "count", &obj->count, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_GuestFileSeek_members(Visitor *v, GuestFileSeek *obj, Error **errp)
{
    if (!visit_type_int(v, "position", &obj->position, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "eof", &obj->eof, errp)) {
        return false;
    }
    return true;
}

bool visit_type_GuestFileSeek(Visitor *v, const char *name,
                 GuestFileSeek **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(GuestFileSeek), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_GuestFileSeek_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_GuestFileSeek(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_QGASeek(Visitor *v, const char *name,
                 QGASeek *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &QGASeek_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_GuestFileWhence(Visitor *v, const char *name,
                 GuestFileWhence **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_alternate(v, name, (GenericAlternate **)obj,
                               sizeof(**obj), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    switch ((*obj)->type) {
    case QTYPE_QNUM:
        ok = visit_type_int(v, name, &(*obj)->u.value, errp);
        break;
    case QTYPE_QSTRING:
        ok = visit_type_QGASeek(v, name, &(*obj)->u.name, errp);
        break;
    case QTYPE_NONE:
        abort();
    default:
        assert(visit_is_input(v));
        error_setg(errp, QERR_INVALID_PARAMETER_TYPE, name ? name : "null",
                   "GuestFileWhence");
        /* Avoid passing invalid *obj to qapi_free_GuestFileWhence() */
        g_free(*obj);
        *obj = NULL;
    }
out_obj:
    visit_end_alternate(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_GuestFileWhence(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_guest_file_seek_arg_members(Visitor *v, q_obj_guest_file_seek_arg *obj, Error **errp)
{
    if (!visit_type_int(v, "handle", &obj->handle, errp)) {
        return false;
    }
    if (!visit_type_int(v, "offset", &obj->offset, errp)) {
        return false;
    }
    if (!visit_type_GuestFileWhence(v, "whence", &obj->whence, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_guest_file_flush_arg_members(Visitor *v, q_obj_guest_file_flush_arg *obj, Error **errp)
{
    if (!visit_type_int(v, "handle", &obj->handle, errp)) {
        return false;
    }
    return true;
}

bool visit_type_GuestFsfreezeStatus(Visitor *v, const char *name,
                 GuestFsfreezeStatus *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &GuestFsfreezeStatus_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_q_obj_guest_fsfreeze_freeze_list_arg_members(Visitor *v, q_obj_guest_fsfreeze_freeze_list_arg *obj, Error **errp)
{
    if (visit_optional(v, "mountpoints", &obj->has_mountpoints)) {
        if (!visit_type_strList(v, "mountpoints", &obj->mountpoints, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_GuestFilesystemTrimResult_members(Visitor *v, GuestFilesystemTrimResult *obj, Error **errp)
{
    if (!visit_type_str(v, "path", &obj->path, errp)) {
        return false;
    }
    if (visit_optional(v, "trimmed", &obj->has_trimmed)) {
        if (!visit_type_int(v, "trimmed", &obj->trimmed, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "minimum", &obj->has_minimum)) {
        if (!visit_type_int(v, "minimum", &obj->minimum, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "error", &obj->has_error)) {
        if (!visit_type_str(v, "error", &obj->error, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_GuestFilesystemTrimResult(Visitor *v, const char *name,
                 GuestFilesystemTrimResult **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(GuestFilesystemTrimResult), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_GuestFilesystemTrimResult_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_GuestFilesystemTrimResult(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_GuestFilesystemTrimResultList(Visitor *v, const char *name,
                 GuestFilesystemTrimResultList **obj, Error **errp)
{
    bool ok = false;
    GuestFilesystemTrimResultList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (GuestFilesystemTrimResultList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_GuestFilesystemTrimResult(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_GuestFilesystemTrimResultList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_GuestFilesystemTrimResponse_members(Visitor *v, GuestFilesystemTrimResponse *obj, Error **errp)
{
    if (!visit_type_GuestFilesystemTrimResultList(v, "paths", &obj->paths, errp)) {
        return false;
    }
    return true;
}

bool visit_type_GuestFilesystemTrimResponse(Visitor *v, const char *name,
                 GuestFilesystemTrimResponse **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(GuestFilesystemTrimResponse), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_GuestFilesystemTrimResponse_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_GuestFilesystemTrimResponse(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_guest_fstrim_arg_members(Visitor *v, q_obj_guest_fstrim_arg *obj, Error **errp)
{
    if (visit_optional(v, "minimum", &obj->has_minimum)) {
        if (!visit_type_int(v, "minimum", &obj->minimum, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_GuestIpAddressType(Visitor *v, const char *name,
                 GuestIpAddressType *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &GuestIpAddressType_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_GuestIpAddress_members(Visitor *v, GuestIpAddress *obj, Error **errp)
{
    if (!visit_type_str(v, "ip-address", &obj->ip_address, errp)) {
        return false;
    }
    if (!visit_type_GuestIpAddressType(v, "ip-address-type", &obj->ip_address_type, errp)) {
        return false;
    }
    if (!visit_type_int(v, "prefix", &obj->prefix, errp)) {
        return false;
    }
    return true;
}

bool visit_type_GuestIpAddress(Visitor *v, const char *name,
                 GuestIpAddress **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(GuestIpAddress), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_GuestIpAddress_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_GuestIpAddress(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_GuestNetworkInterfaceStat_members(Visitor *v, GuestNetworkInterfaceStat *obj, Error **errp)
{
    if (!visit_type_uint64(v, "rx-bytes", &obj->rx_bytes, errp)) {
        return false;
    }
    if (!visit_type_uint64(v, "rx-packets", &obj->rx_packets, errp)) {
        return false;
    }
    if (!visit_type_uint64(v, "rx-errs", &obj->rx_errs, errp)) {
        return false;
    }
    if (!visit_type_uint64(v, "rx-dropped", &obj->rx_dropped, errp)) {
        return false;
    }
    if (!visit_type_uint64(v, "tx-bytes", &obj->tx_bytes, errp)) {
        return false;
    }
    if (!visit_type_uint64(v, "tx-packets", &obj->tx_packets, errp)) {
        return false;
    }
    if (!visit_type_uint64(v, "tx-errs", &obj->tx_errs, errp)) {
        return false;
    }
    if (!visit_type_uint64(v, "tx-dropped", &obj->tx_dropped, errp)) {
        return false;
    }
    return true;
}

bool visit_type_GuestNetworkInterfaceStat(Visitor *v, const char *name,
                 GuestNetworkInterfaceStat **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(GuestNetworkInterfaceStat), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_GuestNetworkInterfaceStat_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_GuestNetworkInterfaceStat(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_GuestIpAddressList(Visitor *v, const char *name,
                 GuestIpAddressList **obj, Error **errp)
{
    bool ok = false;
    GuestIpAddressList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (GuestIpAddressList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_GuestIpAddress(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_GuestIpAddressList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_GuestNetworkInterface_members(Visitor *v, GuestNetworkInterface *obj, Error **errp)
{
    if (!visit_type_str(v, "name", &obj->name, errp)) {
        return false;
    }
    if (visit_optional(v, "hardware-address", &obj->has_hardware_address)) {
        if (!visit_type_str(v, "hardware-address", &obj->hardware_address, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "ip-addresses", &obj->has_ip_addresses)) {
        if (!visit_type_GuestIpAddressList(v, "ip-addresses", &obj->ip_addresses, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "statistics", &obj->has_statistics)) {
        if (!visit_type_GuestNetworkInterfaceStat(v, "statistics", &obj->statistics, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_GuestNetworkInterface(Visitor *v, const char *name,
                 GuestNetworkInterface **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(GuestNetworkInterface), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_GuestNetworkInterface_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_GuestNetworkInterface(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_GuestNetworkInterfaceList(Visitor *v, const char *name,
                 GuestNetworkInterfaceList **obj, Error **errp)
{
    bool ok = false;
    GuestNetworkInterfaceList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (GuestNetworkInterfaceList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_GuestNetworkInterface(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_GuestNetworkInterfaceList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_GuestLogicalProcessor_members(Visitor *v, GuestLogicalProcessor *obj, Error **errp)
{
    if (!visit_type_int(v, "logical-id", &obj->logical_id, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "online", &obj->online, errp)) {
        return false;
    }
    if (visit_optional(v, "can-offline", &obj->has_can_offline)) {
        if (!visit_type_bool(v, "can-offline", &obj->can_offline, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_GuestLogicalProcessor(Visitor *v, const char *name,
                 GuestLogicalProcessor **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(GuestLogicalProcessor), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_GuestLogicalProcessor_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_GuestLogicalProcessor(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_GuestLogicalProcessorList(Visitor *v, const char *name,
                 GuestLogicalProcessorList **obj, Error **errp)
{
    bool ok = false;
    GuestLogicalProcessorList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (GuestLogicalProcessorList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_GuestLogicalProcessor(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_GuestLogicalProcessorList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_guest_set_vcpus_arg_members(Visitor *v, q_obj_guest_set_vcpus_arg *obj, Error **errp)
{
    if (!visit_type_GuestLogicalProcessorList(v, "vcpus", &obj->vcpus, errp)) {
        return false;
    }
    return true;
}

bool visit_type_GuestDiskBusType(Visitor *v, const char *name,
                 GuestDiskBusType *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &GuestDiskBusType_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_GuestPCIAddress_members(Visitor *v, GuestPCIAddress *obj, Error **errp)
{
    if (!visit_type_int(v, "domain", &obj->domain, errp)) {
        return false;
    }
    if (!visit_type_int(v, "bus", &obj->bus, errp)) {
        return false;
    }
    if (!visit_type_int(v, "slot", &obj->slot, errp)) {
        return false;
    }
    if (!visit_type_int(v, "function", &obj->function, errp)) {
        return false;
    }
    return true;
}

bool visit_type_GuestPCIAddress(Visitor *v, const char *name,
                 GuestPCIAddress **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(GuestPCIAddress), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_GuestPCIAddress_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_GuestPCIAddress(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_GuestCCWAddress_members(Visitor *v, GuestCCWAddress *obj, Error **errp)
{
    if (!visit_type_int(v, "cssid", &obj->cssid, errp)) {
        return false;
    }
    if (!visit_type_int(v, "ssid", &obj->ssid, errp)) {
        return false;
    }
    if (!visit_type_int(v, "subchno", &obj->subchno, errp)) {
        return false;
    }
    if (!visit_type_int(v, "devno", &obj->devno, errp)) {
        return false;
    }
    return true;
}

bool visit_type_GuestCCWAddress(Visitor *v, const char *name,
                 GuestCCWAddress **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(GuestCCWAddress), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_GuestCCWAddress_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_GuestCCWAddress(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_GuestDiskAddress_members(Visitor *v, GuestDiskAddress *obj, Error **errp)
{
    if (!visit_type_GuestPCIAddress(v, "pci-controller", &obj->pci_controller, errp)) {
        return false;
    }
    if (!visit_type_GuestDiskBusType(v, "bus-type", &obj->bus_type, errp)) {
        return false;
    }
    if (!visit_type_int(v, "bus", &obj->bus, errp)) {
        return false;
    }
    if (!visit_type_int(v, "target", &obj->target, errp)) {
        return false;
    }
    if (!visit_type_int(v, "unit", &obj->unit, errp)) {
        return false;
    }
    if (visit_optional(v, "serial", &obj->has_serial)) {
        if (!visit_type_str(v, "serial", &obj->serial, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "dev", &obj->has_dev)) {
        if (!visit_type_str(v, "dev", &obj->dev, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "ccw-address", &obj->has_ccw_address)) {
        if (!visit_type_GuestCCWAddress(v, "ccw-address", &obj->ccw_address, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_GuestDiskAddress(Visitor *v, const char *name,
                 GuestDiskAddress **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(GuestDiskAddress), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_GuestDiskAddress_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_GuestDiskAddress(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_GuestDiskInfo_members(Visitor *v, GuestDiskInfo *obj, Error **errp)
{
    if (!visit_type_str(v, "name", &obj->name, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "partition", &obj->partition, errp)) {
        return false;
    }
    if (visit_optional(v, "dependencies", &obj->has_dependencies)) {
        if (!visit_type_strList(v, "dependencies", &obj->dependencies, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "address", &obj->has_address)) {
        if (!visit_type_GuestDiskAddress(v, "address", &obj->address, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "alias", &obj->has_alias)) {
        if (!visit_type_str(v, "alias", &obj->alias, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_GuestDiskInfo(Visitor *v, const char *name,
                 GuestDiskInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(GuestDiskInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_GuestDiskInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_GuestDiskInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_GuestDiskInfoList(Visitor *v, const char *name,
                 GuestDiskInfoList **obj, Error **errp)
{
    bool ok = false;
    GuestDiskInfoList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (GuestDiskInfoList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_GuestDiskInfo(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_GuestDiskInfoList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_GuestDiskAddressList(Visitor *v, const char *name,
                 GuestDiskAddressList **obj, Error **errp)
{
    bool ok = false;
    GuestDiskAddressList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (GuestDiskAddressList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_GuestDiskAddress(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_GuestDiskAddressList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_GuestFilesystemInfo_members(Visitor *v, GuestFilesystemInfo *obj, Error **errp)
{
    if (!visit_type_str(v, "name", &obj->name, errp)) {
        return false;
    }
    if (!visit_type_str(v, "mountpoint", &obj->mountpoint, errp)) {
        return false;
    }
    if (!visit_type_str(v, "type", &obj->type, errp)) {
        return false;
    }
    if (visit_optional(v, "used-bytes", &obj->has_used_bytes)) {
        if (!visit_type_uint64(v, "used-bytes", &obj->used_bytes, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "total-bytes", &obj->has_total_bytes)) {
        if (!visit_type_uint64(v, "total-bytes", &obj->total_bytes, errp)) {
            return false;
        }
    }
    if (!visit_type_GuestDiskAddressList(v, "disk", &obj->disk, errp)) {
        return false;
    }
    return true;
}

bool visit_type_GuestFilesystemInfo(Visitor *v, const char *name,
                 GuestFilesystemInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(GuestFilesystemInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_GuestFilesystemInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_GuestFilesystemInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_GuestFilesystemInfoList(Visitor *v, const char *name,
                 GuestFilesystemInfoList **obj, Error **errp)
{
    bool ok = false;
    GuestFilesystemInfoList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (GuestFilesystemInfoList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_GuestFilesystemInfo(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_GuestFilesystemInfoList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_guest_set_user_password_arg_members(Visitor *v, q_obj_guest_set_user_password_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "username", &obj->username, errp)) {
        return false;
    }
    if (!visit_type_str(v, "password", &obj->password, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "crypted", &obj->crypted, errp)) {
        return false;
    }
    return true;
}

bool visit_type_GuestMemoryBlock_members(Visitor *v, GuestMemoryBlock *obj, Error **errp)
{
    if (!visit_type_uint64(v, "phys-index", &obj->phys_index, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "online", &obj->online, errp)) {
        return false;
    }
    if (visit_optional(v, "can-offline", &obj->has_can_offline)) {
        if (!visit_type_bool(v, "can-offline", &obj->can_offline, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_GuestMemoryBlock(Visitor *v, const char *name,
                 GuestMemoryBlock **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(GuestMemoryBlock), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_GuestMemoryBlock_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_GuestMemoryBlock(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_GuestMemoryBlockList(Visitor *v, const char *name,
                 GuestMemoryBlockList **obj, Error **errp)
{
    bool ok = false;
    GuestMemoryBlockList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (GuestMemoryBlockList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_GuestMemoryBlock(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_GuestMemoryBlockList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_GuestMemoryBlockResponseType(Visitor *v, const char *name,
                 GuestMemoryBlockResponseType *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &GuestMemoryBlockResponseType_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_GuestMemoryBlockResponse_members(Visitor *v, GuestMemoryBlockResponse *obj, Error **errp)
{
    if (!visit_type_uint64(v, "phys-index", &obj->phys_index, errp)) {
        return false;
    }
    if (!visit_type_GuestMemoryBlockResponseType(v, "response", &obj->response, errp)) {
        return false;
    }
    if (visit_optional(v, "error-code", &obj->has_error_code)) {
        if (!visit_type_int(v, "error-code", &obj->error_code, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_GuestMemoryBlockResponse(Visitor *v, const char *name,
                 GuestMemoryBlockResponse **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(GuestMemoryBlockResponse), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_GuestMemoryBlockResponse_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_GuestMemoryBlockResponse(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_guest_set_memory_blocks_arg_members(Visitor *v, q_obj_guest_set_memory_blocks_arg *obj, Error **errp)
{
    if (!visit_type_GuestMemoryBlockList(v, "mem-blks", &obj->mem_blks, errp)) {
        return false;
    }
    return true;
}

bool visit_type_GuestMemoryBlockResponseList(Visitor *v, const char *name,
                 GuestMemoryBlockResponseList **obj, Error **errp)
{
    bool ok = false;
    GuestMemoryBlockResponseList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (GuestMemoryBlockResponseList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_GuestMemoryBlockResponse(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_GuestMemoryBlockResponseList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_GuestMemoryBlockInfo_members(Visitor *v, GuestMemoryBlockInfo *obj, Error **errp)
{
    if (!visit_type_uint64(v, "size", &obj->size, errp)) {
        return false;
    }
    return true;
}

bool visit_type_GuestMemoryBlockInfo(Visitor *v, const char *name,
                 GuestMemoryBlockInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(GuestMemoryBlockInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_GuestMemoryBlockInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_GuestMemoryBlockInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_GuestExecStatus_members(Visitor *v, GuestExecStatus *obj, Error **errp)
{
    if (!visit_type_bool(v, "exited", &obj->exited, errp)) {
        return false;
    }
    if (visit_optional(v, "exitcode", &obj->has_exitcode)) {
        if (!visit_type_int(v, "exitcode", &obj->exitcode, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "signal", &obj->has_signal)) {
        if (!visit_type_int(v, "signal", &obj->signal, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "out-data", &obj->has_out_data)) {
        if (!visit_type_str(v, "out-data", &obj->out_data, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "err-data", &obj->has_err_data)) {
        if (!visit_type_str(v, "err-data", &obj->err_data, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "out-truncated", &obj->has_out_truncated)) {
        if (!visit_type_bool(v, "out-truncated", &obj->out_truncated, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "err-truncated", &obj->has_err_truncated)) {
        if (!visit_type_bool(v, "err-truncated", &obj->err_truncated, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_GuestExecStatus(Visitor *v, const char *name,
                 GuestExecStatus **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(GuestExecStatus), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_GuestExecStatus_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_GuestExecStatus(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_guest_exec_status_arg_members(Visitor *v, q_obj_guest_exec_status_arg *obj, Error **errp)
{
    if (!visit_type_int(v, "pid", &obj->pid, errp)) {
        return false;
    }
    return true;
}

bool visit_type_GuestExec_members(Visitor *v, GuestExec *obj, Error **errp)
{
    if (!visit_type_int(v, "pid", &obj->pid, errp)) {
        return false;
    }
    return true;
}

bool visit_type_GuestExec(Visitor *v, const char *name,
                 GuestExec **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(GuestExec), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_GuestExec_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_GuestExec(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_guest_exec_arg_members(Visitor *v, q_obj_guest_exec_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "path", &obj->path, errp)) {
        return false;
    }
    if (visit_optional(v, "arg", &obj->has_arg)) {
        if (!visit_type_strList(v, "arg", &obj->arg, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "env", &obj->has_env)) {
        if (!visit_type_strList(v, "env", &obj->env, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "input-data", &obj->has_input_data)) {
        if (!visit_type_str(v, "input-data", &obj->input_data, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "capture-output", &obj->has_capture_output)) {
        if (!visit_type_bool(v, "capture-output", &obj->capture_output, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_GuestHostName_members(Visitor *v, GuestHostName *obj, Error **errp)
{
    if (!visit_type_str(v, "host-name", &obj->host_name, errp)) {
        return false;
    }
    return true;
}

bool visit_type_GuestHostName(Visitor *v, const char *name,
                 GuestHostName **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(GuestHostName), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_GuestHostName_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_GuestHostName(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_GuestUser_members(Visitor *v, GuestUser *obj, Error **errp)
{
    if (!visit_type_str(v, "user", &obj->user, errp)) {
        return false;
    }
    if (!visit_type_number(v, "login-time", &obj->login_time, errp)) {
        return false;
    }
    if (visit_optional(v, "domain", &obj->has_domain)) {
        if (!visit_type_str(v, "domain", &obj->domain, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_GuestUser(Visitor *v, const char *name,
                 GuestUser **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(GuestUser), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_GuestUser_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_GuestUser(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_GuestUserList(Visitor *v, const char *name,
                 GuestUserList **obj, Error **errp)
{
    bool ok = false;
    GuestUserList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (GuestUserList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_GuestUser(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_GuestUserList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_GuestTimezone_members(Visitor *v, GuestTimezone *obj, Error **errp)
{
    if (visit_optional(v, "zone", &obj->has_zone)) {
        if (!visit_type_str(v, "zone", &obj->zone, errp)) {
            return false;
        }
    }
    if (!visit_type_int(v, "offset", &obj->offset, errp)) {
        return false;
    }
    return true;
}

bool visit_type_GuestTimezone(Visitor *v, const char *name,
                 GuestTimezone **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(GuestTimezone), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_GuestTimezone_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_GuestTimezone(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_GuestOSInfo_members(Visitor *v, GuestOSInfo *obj, Error **errp)
{
    if (visit_optional(v, "kernel-release", &obj->has_kernel_release)) {
        if (!visit_type_str(v, "kernel-release", &obj->kernel_release, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "kernel-version", &obj->has_kernel_version)) {
        if (!visit_type_str(v, "kernel-version", &obj->kernel_version, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "machine", &obj->has_machine)) {
        if (!visit_type_str(v, "machine", &obj->machine, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "id", &obj->has_id)) {
        if (!visit_type_str(v, "id", &obj->id, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "name", &obj->has_name)) {
        if (!visit_type_str(v, "name", &obj->name, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "pretty-name", &obj->has_pretty_name)) {
        if (!visit_type_str(v, "pretty-name", &obj->pretty_name, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "version", &obj->has_version)) {
        if (!visit_type_str(v, "version", &obj->version, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "version-id", &obj->has_version_id)) {
        if (!visit_type_str(v, "version-id", &obj->version_id, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "variant", &obj->has_variant)) {
        if (!visit_type_str(v, "variant", &obj->variant, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "variant-id", &obj->has_variant_id)) {
        if (!visit_type_str(v, "variant-id", &obj->variant_id, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_GuestOSInfo(Visitor *v, const char *name,
                 GuestOSInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(GuestOSInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_GuestOSInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_GuestOSInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_GuestDeviceType(Visitor *v, const char *name,
                 GuestDeviceType *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &GuestDeviceType_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_GuestDeviceIdPCI_members(Visitor *v, GuestDeviceIdPCI *obj, Error **errp)
{
    if (!visit_type_uint16(v, "vendor-id", &obj->vendor_id, errp)) {
        return false;
    }
    if (!visit_type_uint16(v, "device-id", &obj->device_id, errp)) {
        return false;
    }
    return true;
}

bool visit_type_GuestDeviceIdPCI(Visitor *v, const char *name,
                 GuestDeviceIdPCI **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(GuestDeviceIdPCI), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_GuestDeviceIdPCI_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_GuestDeviceIdPCI(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_GuestDeviceId_base_members(Visitor *v, q_obj_GuestDeviceId_base *obj, Error **errp)
{
    if (!visit_type_GuestDeviceType(v, "type", &obj->type, errp)) {
        return false;
    }
    return true;
}

bool visit_type_GuestDeviceId_members(Visitor *v, GuestDeviceId *obj, Error **errp)
{
    if (!visit_type_q_obj_GuestDeviceId_base_members(v, (q_obj_GuestDeviceId_base *)obj, errp)) {
        return false;
    }
    switch (obj->type) {
    case GUEST_DEVICE_TYPE_PCI:
        return visit_type_GuestDeviceIdPCI_members(v, &obj->u.pci, errp);
    default:
        abort();
    }
    return true;
}

bool visit_type_GuestDeviceId(Visitor *v, const char *name,
                 GuestDeviceId **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(GuestDeviceId), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_GuestDeviceId_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_GuestDeviceId(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_GuestDeviceInfo_members(Visitor *v, GuestDeviceInfo *obj, Error **errp)
{
    if (!visit_type_str(v, "driver-name", &obj->driver_name, errp)) {
        return false;
    }
    if (visit_optional(v, "driver-date", &obj->has_driver_date)) {
        if (!visit_type_int(v, "driver-date", &obj->driver_date, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "driver-version", &obj->has_driver_version)) {
        if (!visit_type_str(v, "driver-version", &obj->driver_version, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "id", &obj->has_id)) {
        if (!visit_type_GuestDeviceId(v, "id", &obj->id, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_GuestDeviceInfo(Visitor *v, const char *name,
                 GuestDeviceInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(GuestDeviceInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_GuestDeviceInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_GuestDeviceInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_GuestDeviceInfoList(Visitor *v, const char *name,
                 GuestDeviceInfoList **obj, Error **errp)
{
    bool ok = false;
    GuestDeviceInfoList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (GuestDeviceInfoList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_GuestDeviceInfo(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_GuestDeviceInfoList(*obj);
        *obj = NULL;
    }
    return ok;
}

#if defined(CONFIG_POSIX)
bool visit_type_GuestAuthorizedKeys_members(Visitor *v, GuestAuthorizedKeys *obj, Error **errp)
{
    if (!visit_type_strList(v, "keys", &obj->keys, errp)) {
        return false;
    }
    return true;
}

bool visit_type_GuestAuthorizedKeys(Visitor *v, const char *name,
                 GuestAuthorizedKeys **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(GuestAuthorizedKeys), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_GuestAuthorizedKeys_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_GuestAuthorizedKeys(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(CONFIG_POSIX) */

#if defined(CONFIG_POSIX)
bool visit_type_q_obj_guest_ssh_get_authorized_keys_arg_members(Visitor *v, q_obj_guest_ssh_get_authorized_keys_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "username", &obj->username, errp)) {
        return false;
    }
    return true;
}
#endif /* defined(CONFIG_POSIX) */

#if defined(CONFIG_POSIX)
bool visit_type_q_obj_guest_ssh_add_authorized_keys_arg_members(Visitor *v, q_obj_guest_ssh_add_authorized_keys_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "username", &obj->username, errp)) {
        return false;
    }
    if (!visit_type_strList(v, "keys", &obj->keys, errp)) {
        return false;
    }
    if (visit_optional(v, "reset", &obj->has_reset)) {
        if (!visit_type_bool(v, "reset", &obj->reset, errp)) {
            return false;
        }
    }
    return true;
}
#endif /* defined(CONFIG_POSIX) */

#if defined(CONFIG_POSIX)
bool visit_type_q_obj_guest_ssh_remove_authorized_keys_arg_members(Visitor *v, q_obj_guest_ssh_remove_authorized_keys_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "username", &obj->username, errp)) {
        return false;
    }
    if (!visit_type_strList(v, "keys", &obj->keys, errp)) {
        return false;
    }
    return true;
}
#endif /* defined(CONFIG_POSIX) */

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qga_qapi_visit_c;
