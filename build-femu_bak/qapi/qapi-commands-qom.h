/* AUTOMATICALLY GENERATED, DO NOT MODIFY */

/*
 * Schema-defined QAPI/QMP commands
 *
 * Copyright IBM, Corp. 2011
 * Copyright (C) 2014-2018 Red Hat, Inc.
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1 or later.
 * See the COPYING.LIB file in the top-level directory.
 */

#ifndef QAPI_COMMANDS_QOM_H
#define QAPI_COMMANDS_QOM_H

#include "qapi-types-qom.h"

ObjectPropertyInfoList *qmp_qom_list(const char *path, Error **errp);
void qmp_marshal_qom_list(QDict *args, QObject **ret, Error **errp);
QObject *qmp_qom_get(const char *path, const char *property, Error **errp);
void qmp_marshal_qom_get(QDict *args, QObject **ret, Error **errp);
void qmp_qom_set(const char *path, const char *property, QObject *value, Error **errp);
void qmp_marshal_qom_set(QDict *args, QObject **ret, Error **errp);
ObjectTypeInfoList *qmp_qom_list_types(bool has_implements, const char *implements, bool has_abstract, bool abstract, Error **errp);
void qmp_marshal_qom_list_types(QDict *args, QObject **ret, Error **errp);
ObjectPropertyInfoList *qmp_qom_list_properties(const char *q_typename, Error **errp);
void qmp_marshal_qom_list_properties(QDict *args, QObject **ret, Error **errp);
void qmp_object_del(const char *id, Error **errp);
void qmp_marshal_object_del(QDict *args, QObject **ret, Error **errp);

#endif /* QAPI_COMMANDS_QOM_H */
