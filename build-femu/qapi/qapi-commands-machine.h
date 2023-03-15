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

#ifndef QAPI_COMMANDS_MACHINE_H
#define QAPI_COMMANDS_MACHINE_H

#include "qapi-commands-common.h"
#include "qapi-types-machine.h"

CpuInfoFastList *qmp_query_cpus_fast(Error **errp);
void qmp_marshal_query_cpus_fast(QDict *args, QObject **ret, Error **errp);
MachineInfoList *qmp_query_machines(Error **errp);
void qmp_marshal_query_machines(QDict *args, QObject **ret, Error **errp);
CurrentMachineParams *qmp_query_current_machine(Error **errp);
void qmp_marshal_query_current_machine(QDict *args, QObject **ret, Error **errp);
TargetInfo *qmp_query_target(Error **errp);
void qmp_marshal_query_target(QDict *args, QObject **ret, Error **errp);
UuidInfo *qmp_query_uuid(Error **errp);
void qmp_marshal_query_uuid(QDict *args, QObject **ret, Error **errp);
GuidInfo *qmp_query_vm_generation_id(Error **errp);
void qmp_marshal_query_vm_generation_id(QDict *args, QObject **ret, Error **errp);
void qmp_system_reset(Error **errp);
void qmp_marshal_system_reset(QDict *args, QObject **ret, Error **errp);
void qmp_system_powerdown(Error **errp);
void qmp_marshal_system_powerdown(QDict *args, QObject **ret, Error **errp);
void qmp_system_wakeup(Error **errp);
void qmp_marshal_system_wakeup(QDict *args, QObject **ret, Error **errp);
void qmp_inject_nmi(Error **errp);
void qmp_marshal_inject_nmi(QDict *args, QObject **ret, Error **errp);
KvmInfo *qmp_query_kvm(Error **errp);
void qmp_marshal_query_kvm(QDict *args, QObject **ret, Error **errp);
void qmp_memsave(int64_t val, int64_t size, const char *filename, bool has_cpu_index, int64_t cpu_index, Error **errp);
void qmp_marshal_memsave(QDict *args, QObject **ret, Error **errp);
void qmp_pmemsave(int64_t val, int64_t size, const char *filename, Error **errp);
void qmp_marshal_pmemsave(QDict *args, QObject **ret, Error **errp);
MemdevList *qmp_query_memdev(Error **errp);
void qmp_marshal_query_memdev(QDict *args, QObject **ret, Error **errp);
HotpluggableCPUList *qmp_query_hotpluggable_cpus(Error **errp);
void qmp_marshal_query_hotpluggable_cpus(QDict *args, QObject **ret, Error **errp);
void qmp_set_numa_node(NumaOptions *arg, Error **errp);
void qmp_marshal_set_numa_node(QDict *args, QObject **ret, Error **errp);
void qmp_balloon(int64_t value, Error **errp);
void qmp_marshal_balloon(QDict *args, QObject **ret, Error **errp);
BalloonInfo *qmp_query_balloon(Error **errp);
void qmp_marshal_query_balloon(QDict *args, QObject **ret, Error **errp);
MemoryInfo *qmp_query_memory_size_summary(Error **errp);
void qmp_marshal_query_memory_size_summary(QDict *args, QObject **ret, Error **errp);
MemoryDeviceInfoList *qmp_query_memory_devices(Error **errp);
void qmp_marshal_query_memory_devices(QDict *args, QObject **ret, Error **errp);
HumanReadableText *qmp_x_query_irq(Error **errp);
void qmp_marshal_x_query_irq(QDict *args, QObject **ret, Error **errp);
#if defined(CONFIG_TCG)
HumanReadableText *qmp_x_query_jit(Error **errp);
void qmp_marshal_x_query_jit(QDict *args, QObject **ret, Error **errp);
#endif /* defined(CONFIG_TCG) */
HumanReadableText *qmp_x_query_numa(Error **errp);
void qmp_marshal_x_query_numa(QDict *args, QObject **ret, Error **errp);
#if defined(CONFIG_TCG)
HumanReadableText *qmp_x_query_opcount(Error **errp);
void qmp_marshal_x_query_opcount(QDict *args, QObject **ret, Error **errp);
#endif /* defined(CONFIG_TCG) */
#if defined(CONFIG_TCG)
HumanReadableText *qmp_x_query_profile(Error **errp);
void qmp_marshal_x_query_profile(QDict *args, QObject **ret, Error **errp);
#endif /* defined(CONFIG_TCG) */
HumanReadableText *qmp_x_query_ramblock(Error **errp);
void qmp_marshal_x_query_ramblock(QDict *args, QObject **ret, Error **errp);
HumanReadableText *qmp_x_query_rdma(Error **errp);
void qmp_marshal_x_query_rdma(QDict *args, QObject **ret, Error **errp);
HumanReadableText *qmp_x_query_roms(Error **errp);
void qmp_marshal_x_query_roms(QDict *args, QObject **ret, Error **errp);
HumanReadableText *qmp_x_query_usb(Error **errp);
void qmp_marshal_x_query_usb(QDict *args, QObject **ret, Error **errp);

#endif /* QAPI_COMMANDS_MACHINE_H */
