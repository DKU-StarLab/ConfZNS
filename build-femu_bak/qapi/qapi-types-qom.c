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

#include "qemu/osdep.h"
#include "qapi/dealloc-visitor.h"
#include "qapi-types-qom.h"
#include "qapi-visit-qom.h"

void qapi_free_ObjectPropertyInfo(ObjectPropertyInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_ObjectPropertyInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_ObjectPropertyInfoList(ObjectPropertyInfoList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_ObjectPropertyInfoList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_ObjectTypeInfo(ObjectTypeInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_ObjectTypeInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_ObjectTypeInfoList(ObjectTypeInfoList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_ObjectTypeInfoList(v, NULL, &obj, NULL);
    visit_free(v);
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_types_qom_c;
