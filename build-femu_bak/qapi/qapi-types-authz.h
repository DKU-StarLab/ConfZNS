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

#ifndef QAPI_TYPES_AUTHZ_H
#define QAPI_TYPES_AUTHZ_H

#include "qapi/qapi-builtin-types.h"

typedef enum QAuthZListPolicy {
    QAUTHZ_LIST_POLICY_DENY,
    QAUTHZ_LIST_POLICY_ALLOW,
    QAUTHZ_LIST_POLICY__MAX,
} QAuthZListPolicy;

#define QAuthZListPolicy_str(val) \
    qapi_enum_lookup(&QAuthZListPolicy_lookup, (val))

extern const QEnumLookup QAuthZListPolicy_lookup;

typedef enum QAuthZListFormat {
    QAUTHZ_LIST_FORMAT_EXACT,
    QAUTHZ_LIST_FORMAT_GLOB,
    QAUTHZ_LIST_FORMAT__MAX,
} QAuthZListFormat;

#define QAuthZListFormat_str(val) \
    qapi_enum_lookup(&QAuthZListFormat_lookup, (val))

extern const QEnumLookup QAuthZListFormat_lookup;

typedef struct QAuthZListRule QAuthZListRule;

typedef struct QAuthZListRuleList QAuthZListRuleList;

typedef struct QAuthZListRuleListHack QAuthZListRuleListHack;

struct QAuthZListRule {
    char *match;
    QAuthZListPolicy policy;
    bool has_format;
    QAuthZListFormat format;
};

void qapi_free_QAuthZListRule(QAuthZListRule *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(QAuthZListRule, qapi_free_QAuthZListRule)

struct QAuthZListRuleList {
    QAuthZListRuleList *next;
    QAuthZListRule *value;
};

void qapi_free_QAuthZListRuleList(QAuthZListRuleList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(QAuthZListRuleList, qapi_free_QAuthZListRuleList)

struct QAuthZListRuleListHack {
    QAuthZListRuleList *unused;
};

void qapi_free_QAuthZListRuleListHack(QAuthZListRuleListHack *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(QAuthZListRuleListHack, qapi_free_QAuthZListRuleListHack)

#endif /* QAPI_TYPES_AUTHZ_H */
