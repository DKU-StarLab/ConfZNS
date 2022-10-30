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

#ifndef QAPI_TYPES_QOM_H
#define QAPI_TYPES_QOM_H

#include "qapi/qapi-builtin-types.h"

typedef struct ObjectPropertyInfo ObjectPropertyInfo;

typedef struct q_obj_qom_list_arg q_obj_qom_list_arg;

typedef struct ObjectPropertyInfoList ObjectPropertyInfoList;

typedef struct q_obj_qom_get_arg q_obj_qom_get_arg;

typedef struct q_obj_qom_set_arg q_obj_qom_set_arg;

typedef struct ObjectTypeInfo ObjectTypeInfo;

typedef struct q_obj_qom_list_types_arg q_obj_qom_list_types_arg;

typedef struct ObjectTypeInfoList ObjectTypeInfoList;

typedef struct q_obj_qom_list_properties_arg q_obj_qom_list_properties_arg;

typedef struct q_obj_object_add_arg q_obj_object_add_arg;

typedef struct q_obj_object_del_arg q_obj_object_del_arg;

struct ObjectPropertyInfo {
    char *name;
    char *type;
    bool has_description;
    char *description;
    bool has_default_value;
    QObject *default_value;
};

void qapi_free_ObjectPropertyInfo(ObjectPropertyInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ObjectPropertyInfo, qapi_free_ObjectPropertyInfo)

struct q_obj_qom_list_arg {
    char *path;
};

struct ObjectPropertyInfoList {
    ObjectPropertyInfoList *next;
    ObjectPropertyInfo *value;
};

void qapi_free_ObjectPropertyInfoList(ObjectPropertyInfoList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ObjectPropertyInfoList, qapi_free_ObjectPropertyInfoList)

struct q_obj_qom_get_arg {
    char *path;
    char *property;
};

struct q_obj_qom_set_arg {
    char *path;
    char *property;
    QObject *value;
};

struct ObjectTypeInfo {
    char *name;
    bool has_abstract;
    bool abstract;
    bool has_parent;
    char *parent;
};

void qapi_free_ObjectTypeInfo(ObjectTypeInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ObjectTypeInfo, qapi_free_ObjectTypeInfo)

struct q_obj_qom_list_types_arg {
    bool has_implements;
    char *implements;
    bool has_abstract;
    bool abstract;
};

struct ObjectTypeInfoList {
    ObjectTypeInfoList *next;
    ObjectTypeInfo *value;
};

void qapi_free_ObjectTypeInfoList(ObjectTypeInfoList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ObjectTypeInfoList, qapi_free_ObjectTypeInfoList)

struct q_obj_qom_list_properties_arg {
    char *q_typename;
};

struct q_obj_object_add_arg {
    char *qom_type;
    char *id;
    bool has_props;
    QObject *props;
};

struct q_obj_object_del_arg {
    char *id;
};

#endif /* QAPI_TYPES_QOM_H */
