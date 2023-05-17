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
#include "qapi-types-acpi.h"
#include "qapi-visit-acpi.h"

void qapi_free_AcpiTableOptions(AcpiTableOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_AcpiTableOptions(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup ACPISlotType_lookup = {
    .array = (const char *const[]) {
        [ACPI_SLOT_TYPE_DIMM] = "DIMM",
        [ACPI_SLOT_TYPE_CPU] = "CPU",
    },
    .size = ACPI_SLOT_TYPE__MAX
};

void qapi_free_ACPIOSTInfo(ACPIOSTInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_ACPIOSTInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_ACPIOSTInfoList(ACPIOSTInfoList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_ACPIOSTInfoList(v, NULL, &obj, NULL);
    visit_free(v);
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_types_acpi_c;
