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

#ifndef TEST_QAPI_TYPES_SUB_SUB_MODULE_H
#define TEST_QAPI_TYPES_SUB_SUB_MODULE_H

#include "qapi/qapi-builtin-types.h"

typedef struct StatusList StatusList;

typedef enum Status {
    STATUS_GOOD,
    STATUS_BAD,
    STATUS_UGLY,
    STATUS__MAX,
} Status;

#define Status_str(val) \
    qapi_enum_lookup(&Status_lookup, (val))

extern const QEnumLookup Status_lookup;

struct StatusList {
    StatusList *next;
    Status value;
};

void qapi_free_StatusList(StatusList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(StatusList, qapi_free_StatusList)

#endif /* TEST_QAPI_TYPES_SUB_SUB_MODULE_H */
