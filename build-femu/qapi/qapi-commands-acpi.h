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

#ifndef QAPI_COMMANDS_ACPI_H
#define QAPI_COMMANDS_ACPI_H

#include "qapi-types-acpi.h"

ACPIOSTInfoList *qmp_query_acpi_ospm_status(Error **errp);
void qmp_marshal_query_acpi_ospm_status(QDict *args, QObject **ret, Error **errp);

#endif /* QAPI_COMMANDS_ACPI_H */
