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

#ifndef QAPI_VISIT_MISC_TARGET_H
#define QAPI_VISIT_MISC_TARGET_H

#include "qapi/qapi-builtin-visit.h"
#include "qapi-types-misc-target.h"


#if defined(TARGET_ALPHA) || defined(TARGET_ARM) || defined(TARGET_HPPA) || defined(TARGET_I386) || defined(TARGET_MIPS) || defined(TARGET_MIPS64) || defined(TARGET_MOXIE) || defined(TARGET_PPC) || defined(TARGET_PPC64) || defined(TARGET_S390X) || defined(TARGET_SH4) || defined(TARGET_SPARC)
bool visit_type_q_obj_RTC_CHANGE_arg_members(Visitor *v, q_obj_RTC_CHANGE_arg *obj, Error **errp);
#endif /* defined(TARGET_ALPHA) || defined(TARGET_ARM) || defined(TARGET_HPPA) || defined(TARGET_I386) || defined(TARGET_MIPS) || defined(TARGET_MIPS64) || defined(TARGET_MOXIE) || defined(TARGET_PPC) || defined(TARGET_PPC64) || defined(TARGET_S390X) || defined(TARGET_SH4) || defined(TARGET_SPARC) */

#if defined(TARGET_I386)
bool visit_type_SevState(Visitor *v, const char *name,
                 SevState *obj, Error **errp);
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
bool visit_type_SevInfo_members(Visitor *v, SevInfo *obj, Error **errp);

bool visit_type_SevInfo(Visitor *v, const char *name,
                 SevInfo **obj, Error **errp);
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
bool visit_type_SevLaunchMeasureInfo_members(Visitor *v, SevLaunchMeasureInfo *obj, Error **errp);

bool visit_type_SevLaunchMeasureInfo(Visitor *v, const char *name,
                 SevLaunchMeasureInfo **obj, Error **errp);
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
bool visit_type_SevCapability_members(Visitor *v, SevCapability *obj, Error **errp);

bool visit_type_SevCapability(Visitor *v, const char *name,
                 SevCapability **obj, Error **errp);
#endif /* defined(TARGET_I386) */

#if defined(TARGET_S390X)
bool visit_type_q_obj_dump_skeys_arg_members(Visitor *v, q_obj_dump_skeys_arg *obj, Error **errp);
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_ARM)
bool visit_type_GICCapability_members(Visitor *v, GICCapability *obj, Error **errp);

bool visit_type_GICCapability(Visitor *v, const char *name,
                 GICCapability **obj, Error **errp);
#endif /* defined(TARGET_ARM) */

#if defined(TARGET_ARM)
bool visit_type_GICCapabilityList(Visitor *v, const char *name,
                 GICCapabilityList **obj, Error **errp);
#endif /* defined(TARGET_ARM) */

#endif /* QAPI_VISIT_MISC_TARGET_H */
