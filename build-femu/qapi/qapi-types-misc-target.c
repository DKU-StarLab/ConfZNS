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
#include "qapi-types-misc-target.h"
#include "qapi-visit-misc-target.h"

#if defined(TARGET_I386)
const QEnumLookup SevState_lookup = {
    .array = (const char *const[]) {
        [SEV_STATE_UNINIT] = "uninit",
        [SEV_STATE_LAUNCH_UPDATE] = "launch-update",
        [SEV_STATE_LAUNCH_SECRET] = "launch-secret",
        [SEV_STATE_RUNNING] = "running",
        [SEV_STATE_SEND_UPDATE] = "send-update",
        [SEV_STATE_RECEIVE_UPDATE] = "receive-update",
    },
    .size = SEV_STATE__MAX
};
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
void qapi_free_SevInfo(SevInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_SevInfo(v, NULL, &obj, NULL);
    visit_free(v);
}
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
void qapi_free_SevLaunchMeasureInfo(SevLaunchMeasureInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_SevLaunchMeasureInfo(v, NULL, &obj, NULL);
    visit_free(v);
}
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
void qapi_free_SevCapability(SevCapability *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_SevCapability(v, NULL, &obj, NULL);
    visit_free(v);
}
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
void qapi_free_SevAttestationReport(SevAttestationReport *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_SevAttestationReport(v, NULL, &obj, NULL);
    visit_free(v);
}
#endif /* defined(TARGET_I386) */

#if defined(TARGET_ARM)
void qapi_free_GICCapability(GICCapability *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_GICCapability(v, NULL, &obj, NULL);
    visit_free(v);
}
#endif /* defined(TARGET_ARM) */

#if defined(TARGET_ARM)
void qapi_free_GICCapabilityList(GICCapabilityList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_GICCapabilityList(v, NULL, &obj, NULL);
    visit_free(v);
}
#endif /* defined(TARGET_ARM) */

void qapi_free_SGXEPCSection(SGXEPCSection *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_SGXEPCSection(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_SGXEPCSectionList(SGXEPCSectionList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_SGXEPCSectionList(v, NULL, &obj, NULL);
    visit_free(v);
}

#if defined(TARGET_I386)
void qapi_free_SGXInfo(SGXInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_SGXInfo(v, NULL, &obj, NULL);
    visit_free(v);
}
#endif /* defined(TARGET_I386) */

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_types_misc_target_c;
