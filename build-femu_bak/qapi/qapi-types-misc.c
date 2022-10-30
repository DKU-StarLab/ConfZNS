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
#include "qapi-types-misc.h"
#include "qapi-visit-misc.h"

void qapi_free_NameInfo(NameInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_NameInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_IOThreadInfo(IOThreadInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_IOThreadInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_IOThreadInfoList(IOThreadInfoList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_IOThreadInfoList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_AddfdInfo(AddfdInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_AddfdInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_FdsetFdInfo(FdsetFdInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_FdsetFdInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_FdsetFdInfoList(FdsetFdInfoList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_FdsetFdInfoList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_FdsetInfo(FdsetInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_FdsetInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_FdsetInfoList(FdsetInfoList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_FdsetInfoList(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup CommandLineParameterType_lookup = {
    .array = (const char *const[]) {
        [COMMAND_LINE_PARAMETER_TYPE_STRING] = "string",
        [COMMAND_LINE_PARAMETER_TYPE_BOOLEAN] = "boolean",
        [COMMAND_LINE_PARAMETER_TYPE_NUMBER] = "number",
        [COMMAND_LINE_PARAMETER_TYPE_SIZE] = "size",
    },
    .size = COMMAND_LINE_PARAMETER_TYPE__MAX
};

void qapi_free_CommandLineParameterInfo(CommandLineParameterInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_CommandLineParameterInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_CommandLineParameterInfoList(CommandLineParameterInfoList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_CommandLineParameterInfoList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_CommandLineOptionInfo(CommandLineOptionInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_CommandLineOptionInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_CommandLineOptionInfoList(CommandLineOptionInfoList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_CommandLineOptionInfoList(v, NULL, &obj, NULL);
    visit_free(v);
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_types_misc_c;
