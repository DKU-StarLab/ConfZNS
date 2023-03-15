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
#include "qapi-visit-misc-target.h"

#if defined(TARGET_ALPHA) || defined(TARGET_ARM) || defined(TARGET_HPPA) || defined(TARGET_I386) || defined(TARGET_MIPS) || defined(TARGET_MIPS64) || defined(TARGET_MOXIE) || defined(TARGET_PPC) || defined(TARGET_PPC64) || defined(TARGET_S390X) || defined(TARGET_SH4) || defined(TARGET_SPARC)
bool visit_type_q_obj_RTC_CHANGE_arg_members(Visitor *v, q_obj_RTC_CHANGE_arg *obj, Error **errp)
{
    if (!visit_type_int(v, "offset", &obj->offset, errp)) {
        return false;
    }
    return true;
}
#endif /* defined(TARGET_ALPHA) || defined(TARGET_ARM) || defined(TARGET_HPPA) || defined(TARGET_I386) || defined(TARGET_MIPS) || defined(TARGET_MIPS64) || defined(TARGET_MOXIE) || defined(TARGET_PPC) || defined(TARGET_PPC64) || defined(TARGET_S390X) || defined(TARGET_SH4) || defined(TARGET_SPARC) */

#if defined(TARGET_I386)
bool visit_type_SevState(Visitor *v, const char *name,
                 SevState *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &SevState_lookup, errp);
    *obj = value;
    return ok;
}
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
bool visit_type_SevInfo_members(Visitor *v, SevInfo *obj, Error **errp)
{
    if (!visit_type_bool(v, "enabled", &obj->enabled, errp)) {
        return false;
    }
    if (!visit_type_uint8(v, "api-major", &obj->api_major, errp)) {
        return false;
    }
    if (!visit_type_uint8(v, "api-minor", &obj->api_minor, errp)) {
        return false;
    }
    if (!visit_type_uint8(v, "build-id", &obj->build_id, errp)) {
        return false;
    }
    if (!visit_type_uint32(v, "policy", &obj->policy, errp)) {
        return false;
    }
    if (!visit_type_SevState(v, "state", &obj->state, errp)) {
        return false;
    }
    if (!visit_type_uint32(v, "handle", &obj->handle, errp)) {
        return false;
    }
    return true;
}

bool visit_type_SevInfo(Visitor *v, const char *name,
                 SevInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(SevInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_SevInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_SevInfo(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
bool visit_type_SevLaunchMeasureInfo_members(Visitor *v, SevLaunchMeasureInfo *obj, Error **errp)
{
    if (!visit_type_str(v, "data", &obj->data, errp)) {
        return false;
    }
    return true;
}

bool visit_type_SevLaunchMeasureInfo(Visitor *v, const char *name,
                 SevLaunchMeasureInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(SevLaunchMeasureInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_SevLaunchMeasureInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_SevLaunchMeasureInfo(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
bool visit_type_SevCapability_members(Visitor *v, SevCapability *obj, Error **errp)
{
    if (!visit_type_str(v, "pdh", &obj->pdh, errp)) {
        return false;
    }
    if (!visit_type_str(v, "cert-chain", &obj->cert_chain, errp)) {
        return false;
    }
    if (!visit_type_int(v, "cbitpos", &obj->cbitpos, errp)) {
        return false;
    }
    if (!visit_type_int(v, "reduced-phys-bits", &obj->reduced_phys_bits, errp)) {
        return false;
    }
    return true;
}

bool visit_type_SevCapability(Visitor *v, const char *name,
                 SevCapability **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(SevCapability), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_SevCapability_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_SevCapability(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(TARGET_I386) */

#if defined(TARGET_S390X)
bool visit_type_q_obj_dump_skeys_arg_members(Visitor *v, q_obj_dump_skeys_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "filename", &obj->filename, errp)) {
        return false;
    }
    return true;
}
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_ARM)
bool visit_type_GICCapability_members(Visitor *v, GICCapability *obj, Error **errp)
{
    if (!visit_type_int(v, "version", &obj->version, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "emulated", &obj->emulated, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "kernel", &obj->kernel, errp)) {
        return false;
    }
    return true;
}

bool visit_type_GICCapability(Visitor *v, const char *name,
                 GICCapability **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(GICCapability), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_GICCapability_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_GICCapability(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(TARGET_ARM) */

#if defined(TARGET_ARM)
bool visit_type_GICCapabilityList(Visitor *v, const char *name,
                 GICCapabilityList **obj, Error **errp)
{
    bool ok = false;
    GICCapabilityList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (GICCapabilityList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_GICCapability(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_GICCapabilityList(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(TARGET_ARM) */

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_visit_misc_target_c;
