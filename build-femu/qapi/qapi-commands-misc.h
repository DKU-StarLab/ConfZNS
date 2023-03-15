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

#ifndef QAPI_COMMANDS_MISC_H
#define QAPI_COMMANDS_MISC_H

#include "qapi-commands-common.h"
#include "qapi-types-misc.h"

void qmp_add_client(const char *protocol, const char *fdname, bool has_skipauth, bool skipauth, bool has_tls, bool tls, Error **errp);
void qmp_marshal_add_client(QDict *args, QObject **ret, Error **errp);
NameInfo *qmp_query_name(Error **errp);
void qmp_marshal_query_name(QDict *args, QObject **ret, Error **errp);
IOThreadInfoList *qmp_query_iothreads(Error **errp);
void qmp_marshal_query_iothreads(QDict *args, QObject **ret, Error **errp);
void qmp_stop(Error **errp);
void qmp_marshal_stop(QDict *args, QObject **ret, Error **errp);
void qmp_cont(Error **errp);
void qmp_marshal_cont(QDict *args, QObject **ret, Error **errp);
void qmp_x_exit_preconfig(Error **errp);
void qmp_marshal_x_exit_preconfig(QDict *args, QObject **ret, Error **errp);
char *qmp_human_monitor_command(const char *command_line, bool has_cpu_index, int64_t cpu_index, Error **errp);
void qmp_marshal_human_monitor_command(QDict *args, QObject **ret, Error **errp);
void qmp_getfd(const char *fdname, Error **errp);
void qmp_marshal_getfd(QDict *args, QObject **ret, Error **errp);
void qmp_closefd(const char *fdname, Error **errp);
void qmp_marshal_closefd(QDict *args, QObject **ret, Error **errp);
AddfdInfo *qmp_add_fd(bool has_fdset_id, int64_t fdset_id, bool has_opaque, const char *opaque, Error **errp);
void qmp_marshal_add_fd(QDict *args, QObject **ret, Error **errp);
void qmp_remove_fd(int64_t fdset_id, bool has_fd, int64_t fd, Error **errp);
void qmp_marshal_remove_fd(QDict *args, QObject **ret, Error **errp);
FdsetInfoList *qmp_query_fdsets(Error **errp);
void qmp_marshal_query_fdsets(QDict *args, QObject **ret, Error **errp);
CommandLineOptionInfoList *qmp_query_command_line_options(bool has_option, const char *option, Error **errp);
void qmp_marshal_query_command_line_options(QDict *args, QObject **ret, Error **errp);

#endif /* QAPI_COMMANDS_MISC_H */
