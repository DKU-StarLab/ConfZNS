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
#include "qapi-visit-authz.h"

bool visit_type_QAuthZListPolicy(Visitor *v, const char *name,
                 QAuthZListPolicy *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &QAuthZListPolicy_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_QAuthZListFormat(Visitor *v, const char *name,
                 QAuthZListFormat *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &QAuthZListFormat_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_QAuthZListRule_members(Visitor *v, QAuthZListRule *obj, Error **errp)
{
    if (!visit_type_str(v, "match", &obj->match, errp)) {
        return false;
    }
    if (!visit_type_QAuthZListPolicy(v, "policy", &obj->policy, errp)) {
        return false;
    }
    if (visit_optional(v, "format", &obj->has_format)) {
        if (!visit_type_QAuthZListFormat(v, "format", &obj->format, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_QAuthZListRule(Visitor *v, const char *name,
                 QAuthZListRule **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(QAuthZListRule), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_QAuthZListRule_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_QAuthZListRule(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_QAuthZListRuleList(Visitor *v, const char *name,
                 QAuthZListRuleList **obj, Error **errp)
{
    bool ok = false;
    QAuthZListRuleList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (QAuthZListRuleList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_QAuthZListRule(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_QAuthZListRuleList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_QAuthZListRuleListHack_members(Visitor *v, QAuthZListRuleListHack *obj, Error **errp)
{
    if (!visit_type_QAuthZListRuleList(v, "unused", &obj->unused, errp)) {
        return false;
    }
    return true;
}

bool visit_type_QAuthZListRuleListHack(Visitor *v, const char *name,
                 QAuthZListRuleListHack **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(QAuthZListRuleListHack), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_QAuthZListRuleListHack_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_QAuthZListRuleListHack(*obj);
        *obj = NULL;
    }
    return ok;
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_visit_authz_c;
