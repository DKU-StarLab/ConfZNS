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

#ifndef INCLUDE_TEST_QAPI_VISIT_SUB_MODULE_H
#define INCLUDE_TEST_QAPI_VISIT_SUB_MODULE_H

#include "qapi/qapi-builtin-visit.h"
#include "test-qapi-types-sub-module.h"

#include "../test-qapi-visit-sub-sub-module.h"

bool visit_type_SecondArrayRef_members(Visitor *v, SecondArrayRef *obj, Error **errp);

bool visit_type_SecondArrayRef(Visitor *v, const char *name,
                 SecondArrayRef **obj, Error **errp);

#endif /* INCLUDE_TEST_QAPI_VISIT_SUB_MODULE_H */
