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

#ifndef TEST_QAPI_VISIT_SUB_SUB_MODULE_H
#define TEST_QAPI_VISIT_SUB_SUB_MODULE_H

#include "qapi/qapi-builtin-visit.h"
#include "test-qapi-types-sub-sub-module.h"


bool visit_type_StatusList(Visitor *v, const char *name,
                 StatusList **obj, Error **errp);

bool visit_type_Status(Visitor *v, const char *name,
                 Status *obj, Error **errp);

#endif /* TEST_QAPI_VISIT_SUB_SUB_MODULE_H */
