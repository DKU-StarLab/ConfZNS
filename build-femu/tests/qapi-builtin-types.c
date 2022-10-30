/* AUTOMATICALLY GENERATED, DO NOT MODIFY */

/*
 * Built-in QAPI types
 *
 * Copyright IBM, Corp. 2011
 * Copyright (c) 2013-2018 Red Hat Inc.
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1 or later.
 * See the COPYING.LIB file in the top-level directory.
 */

#include "qemu/osdep.h"
#include "qapi/dealloc-visitor.h"
#include "qapi/qapi-builtin-types.h"
#include "qapi/qapi-builtin-visit.h"

void qapi_free_strList(strList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_strList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_numberList(numberList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_numberList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_intList(intList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_intList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_int8List(int8List *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_int8List(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_int16List(int16List *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_int16List(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_int32List(int32List *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_int32List(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_int64List(int64List *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_int64List(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_uint8List(uint8List *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_uint8List(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_uint16List(uint16List *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_uint16List(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_uint32List(uint32List *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_uint32List(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_uint64List(uint64List *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_uint64List(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_sizeList(sizeList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_sizeList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_boolList(boolList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_boolList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_anyList(anyList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_anyList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_nullList(nullList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_nullList(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup QType_lookup = {
    .array = (const char *const[]) {
        [QTYPE_NONE] = "none",
        [QTYPE_QNULL] = "qnull",
        [QTYPE_QNUM] = "qnum",
        [QTYPE_QSTRING] = "qstring",
        [QTYPE_QDICT] = "qdict",
        [QTYPE_QLIST] = "qlist",
        [QTYPE_QBOOL] = "qbool",
    },
    .size = QTYPE__MAX
};

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_builtin_types_c;
