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

#ifndef QAPI_VISIT_AUTHZ_H
#define QAPI_VISIT_AUTHZ_H

#include "qapi/qapi-builtin-visit.h"
#include "qapi-types-authz.h"


bool visit_type_QAuthZListPolicy(Visitor *v, const char *name,
                 QAuthZListPolicy *obj, Error **errp);

bool visit_type_QAuthZListFormat(Visitor *v, const char *name,
                 QAuthZListFormat *obj, Error **errp);

bool visit_type_QAuthZListRule_members(Visitor *v, QAuthZListRule *obj, Error **errp);

bool visit_type_QAuthZListRule(Visitor *v, const char *name,
                 QAuthZListRule **obj, Error **errp);

bool visit_type_QAuthZListRuleList(Visitor *v, const char *name,
                 QAuthZListRuleList **obj, Error **errp);

bool visit_type_QAuthZListRuleListHack_members(Visitor *v, QAuthZListRuleListHack *obj, Error **errp);

bool visit_type_QAuthZListRuleListHack(Visitor *v, const char *name,
                 QAuthZListRuleListHack **obj, Error **errp);

#endif /* QAPI_VISIT_AUTHZ_H */
