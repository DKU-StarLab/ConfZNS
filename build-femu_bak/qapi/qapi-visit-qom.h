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

#ifndef QAPI_VISIT_QOM_H
#define QAPI_VISIT_QOM_H

#include "qapi/qapi-builtin-visit.h"
#include "qapi-types-qom.h"


bool visit_type_ObjectPropertyInfo_members(Visitor *v, ObjectPropertyInfo *obj, Error **errp);

bool visit_type_ObjectPropertyInfo(Visitor *v, const char *name,
                 ObjectPropertyInfo **obj, Error **errp);

bool visit_type_q_obj_qom_list_arg_members(Visitor *v, q_obj_qom_list_arg *obj, Error **errp);

bool visit_type_ObjectPropertyInfoList(Visitor *v, const char *name,
                 ObjectPropertyInfoList **obj, Error **errp);

bool visit_type_q_obj_qom_get_arg_members(Visitor *v, q_obj_qom_get_arg *obj, Error **errp);

bool visit_type_q_obj_qom_set_arg_members(Visitor *v, q_obj_qom_set_arg *obj, Error **errp);

bool visit_type_ObjectTypeInfo_members(Visitor *v, ObjectTypeInfo *obj, Error **errp);

bool visit_type_ObjectTypeInfo(Visitor *v, const char *name,
                 ObjectTypeInfo **obj, Error **errp);

bool visit_type_q_obj_qom_list_types_arg_members(Visitor *v, q_obj_qom_list_types_arg *obj, Error **errp);

bool visit_type_ObjectTypeInfoList(Visitor *v, const char *name,
                 ObjectTypeInfoList **obj, Error **errp);

bool visit_type_q_obj_qom_list_properties_arg_members(Visitor *v, q_obj_qom_list_properties_arg *obj, Error **errp);

bool visit_type_q_obj_object_add_arg_members(Visitor *v, q_obj_object_add_arg *obj, Error **errp);

bool visit_type_q_obj_object_del_arg_members(Visitor *v, q_obj_object_del_arg *obj, Error **errp);

#endif /* QAPI_VISIT_QOM_H */
