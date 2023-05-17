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

#ifndef QAPI_COMMANDS_QDEV_H
#define QAPI_COMMANDS_QDEV_H

#include "qapi-commands-qom.h"
#include "qapi-types-qdev.h"

ObjectPropertyInfoList *qmp_device_list_properties(const char *q_typename, Error **errp);
void qmp_marshal_device_list_properties(QDict *args, QObject **ret, Error **errp);
void qmp_device_del(const char *id, Error **errp);
void qmp_marshal_device_del(QDict *args, QObject **ret, Error **errp);

#endif /* QAPI_COMMANDS_QDEV_H */
