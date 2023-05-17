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
#include "qapi-types-yank.h"
#include "qapi-visit-yank.h"

const QEnumLookup YankInstanceType_lookup = {
    .array = (const char *const[]) {
        [YANK_INSTANCE_TYPE_BLOCK_NODE] = "block-node",
        [YANK_INSTANCE_TYPE_CHARDEV] = "chardev",
        [YANK_INSTANCE_TYPE_MIGRATION] = "migration",
    },
    .size = YANK_INSTANCE_TYPE__MAX
};

void qapi_free_YankInstanceBlockNode(YankInstanceBlockNode *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_YankInstanceBlockNode(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_YankInstanceChardev(YankInstanceChardev *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_YankInstanceChardev(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_YankInstance(YankInstance *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_YankInstance(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_YankInstanceList(YankInstanceList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_YankInstanceList(v, NULL, &obj, NULL);
    visit_free(v);
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_types_yank_c;
