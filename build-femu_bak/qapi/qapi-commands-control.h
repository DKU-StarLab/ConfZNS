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

#ifndef QAPI_COMMANDS_CONTROL_H
#define QAPI_COMMANDS_CONTROL_H

#include "qapi-types-control.h"

void qmp_qmp_capabilities(bool has_enable, QMPCapabilityList *enable, Error **errp);
void qmp_marshal_qmp_capabilities(QDict *args, QObject **ret, Error **errp);
VersionInfo *qmp_query_version(Error **errp);
void qmp_marshal_query_version(QDict *args, QObject **ret, Error **errp);
CommandInfoList *qmp_query_commands(Error **errp);
void qmp_marshal_query_commands(QDict *args, QObject **ret, Error **errp);
EventInfoList *qmp_query_events(Error **errp);
void qmp_marshal_query_events(QDict *args, QObject **ret, Error **errp);
void qmp_quit(Error **errp);
void qmp_marshal_quit(QDict *args, QObject **ret, Error **errp);

#endif /* QAPI_COMMANDS_CONTROL_H */
