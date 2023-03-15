/* AUTOMATICALLY GENERATED, DO NOT MODIFY */

/*
 * Schema-defined QAPI/QMP events
 *
 * Copyright (c) 2014 Wenchao Xia
 * Copyright (c) 2015-2018 Red Hat Inc.
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1 or later.
 * See the COPYING.LIB file in the top-level directory.
 */

#include "qemu/osdep.h"
#include "qapi-emit-events.h"
#include "qapi-events-misc-target.h"
#include "qapi-visit-misc-target.h"
#include "qapi/error.h"
#include "qapi/qmp/qdict.h"
#include "qapi/qobject-output-visitor.h"
#include "qapi/qmp-event.h"


#if defined(TARGET_ALPHA) || defined(TARGET_ARM) || defined(TARGET_HPPA) || defined(TARGET_I386) || defined(TARGET_MIPS) || defined(TARGET_MIPS64) || defined(TARGET_MOXIE) || defined(TARGET_PPC) || defined(TARGET_PPC64) || defined(TARGET_S390X) || defined(TARGET_SH4) || defined(TARGET_SPARC)
void qapi_event_send_rtc_change(int64_t offset)
{
    QDict *qmp;
    QObject *obj;
    Visitor *v;
    q_obj_RTC_CHANGE_arg param = {
        offset
    };

    qmp = qmp_event_build_dict("RTC_CHANGE");

    v = qobject_output_visitor_new(&obj);

    visit_start_struct(v, "RTC_CHANGE", NULL, 0, &error_abort);
    visit_type_q_obj_RTC_CHANGE_arg_members(v, &param, &error_abort);
    visit_check_struct(v, &error_abort);
    visit_end_struct(v, NULL);

    visit_complete(v, &obj);
    qdict_put_obj(qmp, "data", obj);
    qapi_event_emit(QAPI_EVENT_RTC_CHANGE, qmp);

    visit_free(v);
    qobject_unref(qmp);
}
#endif /* defined(TARGET_ALPHA) || defined(TARGET_ARM) || defined(TARGET_HPPA) || defined(TARGET_I386) || defined(TARGET_MIPS) || defined(TARGET_MIPS64) || defined(TARGET_MOXIE) || defined(TARGET_PPC) || defined(TARGET_PPC64) || defined(TARGET_S390X) || defined(TARGET_SH4) || defined(TARGET_SPARC) */

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_events_misc_target_c;
