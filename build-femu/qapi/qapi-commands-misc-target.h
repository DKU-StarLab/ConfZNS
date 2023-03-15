/* AUTOMATICALLY GENERATED, DO NOT MODIFY */

/*
 * Schema-defined QAPI/QMP commands
 *
 * Copyright IBM, Corp. 2011
 * Copyright (C) 2014-2018 Red Hat, Inc.
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1 or later.
 * See the COPYING.LIB file in the top-level directory.
 */

#ifndef QAPI_COMMANDS_MISC_TARGET_H
#define QAPI_COMMANDS_MISC_TARGET_H

#include "qapi-types-misc-target.h"

#if defined(TARGET_I386)
void qmp_rtc_reset_reinjection(Error **errp);
void qmp_marshal_rtc_reset_reinjection(QDict *args, QObject **ret, Error **errp);
#endif /* defined(TARGET_I386) */
#if defined(TARGET_I386)
SevInfo *qmp_query_sev(Error **errp);
void qmp_marshal_query_sev(QDict *args, QObject **ret, Error **errp);
#endif /* defined(TARGET_I386) */
#if defined(TARGET_I386)
SevLaunchMeasureInfo *qmp_query_sev_launch_measure(Error **errp);
void qmp_marshal_query_sev_launch_measure(QDict *args, QObject **ret, Error **errp);
#endif /* defined(TARGET_I386) */
#if defined(TARGET_I386)
SevCapability *qmp_query_sev_capabilities(Error **errp);
void qmp_marshal_query_sev_capabilities(QDict *args, QObject **ret, Error **errp);
#endif /* defined(TARGET_I386) */
#if defined(TARGET_I386)
void qmp_sev_inject_launch_secret(const char *packet_header, const char *secret, bool has_gpa, uint64_t gpa, Error **errp);
void qmp_marshal_sev_inject_launch_secret(QDict *args, QObject **ret, Error **errp);
#endif /* defined(TARGET_I386) */
#if defined(TARGET_I386)
SevAttestationReport *qmp_query_sev_attestation_report(const char *mnonce, Error **errp);
void qmp_marshal_query_sev_attestation_report(QDict *args, QObject **ret, Error **errp);
#endif /* defined(TARGET_I386) */
#if defined(TARGET_S390X)
void qmp_dump_skeys(const char *filename, Error **errp);
void qmp_marshal_dump_skeys(QDict *args, QObject **ret, Error **errp);
#endif /* defined(TARGET_S390X) */
#if defined(TARGET_ARM)
GICCapabilityList *qmp_query_gic_capabilities(Error **errp);
void qmp_marshal_query_gic_capabilities(QDict *args, QObject **ret, Error **errp);
#endif /* defined(TARGET_ARM) */
#if defined(TARGET_I386)
SGXInfo *qmp_query_sgx(Error **errp);
void qmp_marshal_query_sgx(QDict *args, QObject **ret, Error **errp);
#endif /* defined(TARGET_I386) */
#if defined(TARGET_I386)
SGXInfo *qmp_query_sgx_capabilities(Error **errp);
void qmp_marshal_query_sgx_capabilities(QDict *args, QObject **ret, Error **errp);
#endif /* defined(TARGET_I386) */

#endif /* QAPI_COMMANDS_MISC_TARGET_H */
