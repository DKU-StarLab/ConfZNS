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

#ifndef QAPI_COMMANDS_DUMP_H
#define QAPI_COMMANDS_DUMP_H

#include "qapi-types-dump.h"

void qmp_dump_guest_memory(bool paging, const char *protocol, bool has_detach, bool detach, bool has_begin, int64_t begin, bool has_length, int64_t length, bool has_format, DumpGuestMemoryFormat format, Error **errp);
void qmp_marshal_dump_guest_memory(QDict *args, QObject **ret, Error **errp);
DumpQueryResult *qmp_query_dump(Error **errp);
void qmp_marshal_query_dump(QDict *args, QObject **ret, Error **errp);
DumpGuestMemoryCapability *qmp_query_dump_guest_memory_capability(Error **errp);
void qmp_marshal_query_dump_guest_memory_capability(QDict *args, QObject **ret, Error **errp);

#endif /* QAPI_COMMANDS_DUMP_H */
