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

#ifndef INCLUDE_TEST_QAPI_TYPES_SUB_MODULE_H
#define INCLUDE_TEST_QAPI_TYPES_SUB_MODULE_H

#include "qapi/qapi-builtin-types.h"
#include "../test-qapi-types-sub-sub-module.h"

typedef struct SecondArrayRef SecondArrayRef;

struct SecondArrayRef {
    StatusList *s;
};

void qapi_free_SecondArrayRef(SecondArrayRef *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(SecondArrayRef, qapi_free_SecondArrayRef)

#endif /* INCLUDE_TEST_QAPI_TYPES_SUB_MODULE_H */
