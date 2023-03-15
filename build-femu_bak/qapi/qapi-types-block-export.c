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
#include "qapi-types-block-export.h"
#include "qapi-visit-block-export.h"

void qapi_free_NbdServerOptions(NbdServerOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_NbdServerOptions(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockExportOptionsNbdBase(BlockExportOptionsNbdBase *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockExportOptionsNbdBase(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockExportOptionsNbd(BlockExportOptionsNbd *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockExportOptionsNbd(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockExportOptionsVhostUserBlk(BlockExportOptionsVhostUserBlk *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockExportOptionsVhostUserBlk(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_NbdServerAddOptions(NbdServerAddOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_NbdServerAddOptions(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup BlockExportRemoveMode_lookup = {
    .array = (const char *const[]) {
        [BLOCK_EXPORT_REMOVE_MODE_SAFE] = "safe",
        [BLOCK_EXPORT_REMOVE_MODE_HARD] = "hard",
    },
    .size = BLOCK_EXPORT_REMOVE_MODE__MAX
};

const QEnumLookup BlockExportType_lookup = {
    .array = (const char *const[]) {
        [BLOCK_EXPORT_TYPE_NBD] = "nbd",
        [BLOCK_EXPORT_TYPE_VHOST_USER_BLK] = "vhost-user-blk",
    },
    .size = BLOCK_EXPORT_TYPE__MAX
};

void qapi_free_BlockExportOptions(BlockExportOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockExportOptions(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockExportInfo(BlockExportInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockExportInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockExportInfoList(BlockExportInfoList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockExportInfoList(v, NULL, &obj, NULL);
    visit_free(v);
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_types_block_export_c;
