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
#include "qapi-visit-qom.h"

bool visit_type_ObjectPropertyInfo_members(Visitor *v, ObjectPropertyInfo *obj, Error **errp)
{
    if (!visit_type_str(v, "name", &obj->name, errp)) {
        return false;
    }
    if (!visit_type_str(v, "type", &obj->type, errp)) {
        return false;
    }
    if (visit_optional(v, "description", &obj->has_description)) {
        if (!visit_type_str(v, "description", &obj->description, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "default-value", &obj->has_default_value)) {
        if (!visit_type_any(v, "default-value", &obj->default_value, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_ObjectPropertyInfo(Visitor *v, const char *name,
                 ObjectPropertyInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(ObjectPropertyInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_ObjectPropertyInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_ObjectPropertyInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_qom_list_arg_members(Visitor *v, q_obj_qom_list_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "path", &obj->path, errp)) {
        return false;
    }
    return true;
}

bool visit_type_ObjectPropertyInfoList(Visitor *v, const char *name,
                 ObjectPropertyInfoList **obj, Error **errp)
{
    bool ok = false;
    ObjectPropertyInfoList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (ObjectPropertyInfoList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_ObjectPropertyInfo(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_ObjectPropertyInfoList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_qom_get_arg_members(Visitor *v, q_obj_qom_get_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "path", &obj->path, errp)) {
        return false;
    }
    if (!visit_type_str(v, "property", &obj->property, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_qom_set_arg_members(Visitor *v, q_obj_qom_set_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "path", &obj->path, errp)) {
        return false;
    }
    if (!visit_type_str(v, "property", &obj->property, errp)) {
        return false;
    }
    if (!visit_type_any(v, "value", &obj->value, errp)) {
        return false;
    }
    return true;
}

bool visit_type_ObjectTypeInfo_members(Visitor *v, ObjectTypeInfo *obj, Error **errp)
{
    if (!visit_type_str(v, "name", &obj->name, errp)) {
        return false;
    }
    if (visit_optional(v, "abstract", &obj->has_abstract)) {
        if (!visit_type_bool(v, "abstract", &obj->abstract, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "parent", &obj->has_parent)) {
        if (!visit_type_str(v, "parent", &obj->parent, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_ObjectTypeInfo(Visitor *v, const char *name,
                 ObjectTypeInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(ObjectTypeInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_ObjectTypeInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_ObjectTypeInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_qom_list_types_arg_members(Visitor *v, q_obj_qom_list_types_arg *obj, Error **errp)
{
    if (visit_optional(v, "implements", &obj->has_implements)) {
        if (!visit_type_str(v, "implements", &obj->implements, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "abstract", &obj->has_abstract)) {
        if (!visit_type_bool(v, "abstract", &obj->abstract, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_ObjectTypeInfoList(Visitor *v, const char *name,
                 ObjectTypeInfoList **obj, Error **errp)
{
    bool ok = false;
    ObjectTypeInfoList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (ObjectTypeInfoList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_ObjectTypeInfo(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_ObjectTypeInfoList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_qom_list_properties_arg_members(Visitor *v, q_obj_qom_list_properties_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "typename", &obj->q_typename, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_object_add_arg_members(Visitor *v, q_obj_object_add_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "qom-type", &obj->qom_type, errp)) {
        return false;
    }
    if (!visit_type_str(v, "id", &obj->id, errp)) {
        return false;
    }
    if (visit_optional(v, "props", &obj->has_props)) {
        if (!visit_type_any(v, "props", &obj->props, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_q_obj_object_del_arg_members(Visitor *v, q_obj_object_del_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "id", &obj->id, errp)) {
        return false;
    }
    return true;
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_visit_qom_c;
