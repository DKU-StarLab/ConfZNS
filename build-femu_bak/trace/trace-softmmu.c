/* This file is autogenerated by tracetool, do not edit. */

#include "qemu/osdep.h"
#include "qemu/module.h"
#include "trace-softmmu.h"

uint16_t _TRACE_BALLOON_EVENT_DSTATE;
uint16_t _TRACE_CPU_IN_DSTATE;
uint16_t _TRACE_CPU_OUT_DSTATE;
uint16_t _TRACE_MEMORY_REGION_OPS_READ_DSTATE;
uint16_t _TRACE_MEMORY_REGION_OPS_WRITE_DSTATE;
uint16_t _TRACE_MEMORY_REGION_SUBPAGE_READ_DSTATE;
uint16_t _TRACE_MEMORY_REGION_SUBPAGE_WRITE_DSTATE;
uint16_t _TRACE_MEMORY_REGION_RAM_DEVICE_READ_DSTATE;
uint16_t _TRACE_MEMORY_REGION_RAM_DEVICE_WRITE_DSTATE;
uint16_t _TRACE_FLATVIEW_NEW_DSTATE;
uint16_t _TRACE_FLATVIEW_DESTROY_DSTATE;
uint16_t _TRACE_FLATVIEW_DESTROY_RCU_DSTATE;
uint16_t _TRACE_VM_STATE_NOTIFY_DSTATE;
uint16_t _TRACE_LOAD_FILE_DSTATE;
uint16_t _TRACE_RUNSTATE_SET_DSTATE;
uint16_t _TRACE_SYSTEM_WAKEUP_REQUEST_DSTATE;
uint16_t _TRACE_QEMU_SYSTEM_SHUTDOWN_REQUEST_DSTATE;
uint16_t _TRACE_QEMU_SYSTEM_POWERDOWN_REQUEST_DSTATE;
TraceEvent _TRACE_BALLOON_EVENT_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "balloon_event",
    .sstate = TRACE_BALLOON_EVENT_ENABLED,
    .dstate = &_TRACE_BALLOON_EVENT_DSTATE 
};
TraceEvent _TRACE_CPU_IN_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "cpu_in",
    .sstate = TRACE_CPU_IN_ENABLED,
    .dstate = &_TRACE_CPU_IN_DSTATE 
};
TraceEvent _TRACE_CPU_OUT_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "cpu_out",
    .sstate = TRACE_CPU_OUT_ENABLED,
    .dstate = &_TRACE_CPU_OUT_DSTATE 
};
TraceEvent _TRACE_MEMORY_REGION_OPS_READ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "memory_region_ops_read",
    .sstate = TRACE_MEMORY_REGION_OPS_READ_ENABLED,
    .dstate = &_TRACE_MEMORY_REGION_OPS_READ_DSTATE 
};
TraceEvent _TRACE_MEMORY_REGION_OPS_WRITE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "memory_region_ops_write",
    .sstate = TRACE_MEMORY_REGION_OPS_WRITE_ENABLED,
    .dstate = &_TRACE_MEMORY_REGION_OPS_WRITE_DSTATE 
};
TraceEvent _TRACE_MEMORY_REGION_SUBPAGE_READ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "memory_region_subpage_read",
    .sstate = TRACE_MEMORY_REGION_SUBPAGE_READ_ENABLED,
    .dstate = &_TRACE_MEMORY_REGION_SUBPAGE_READ_DSTATE 
};
TraceEvent _TRACE_MEMORY_REGION_SUBPAGE_WRITE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "memory_region_subpage_write",
    .sstate = TRACE_MEMORY_REGION_SUBPAGE_WRITE_ENABLED,
    .dstate = &_TRACE_MEMORY_REGION_SUBPAGE_WRITE_DSTATE 
};
TraceEvent _TRACE_MEMORY_REGION_RAM_DEVICE_READ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "memory_region_ram_device_read",
    .sstate = TRACE_MEMORY_REGION_RAM_DEVICE_READ_ENABLED,
    .dstate = &_TRACE_MEMORY_REGION_RAM_DEVICE_READ_DSTATE 
};
TraceEvent _TRACE_MEMORY_REGION_RAM_DEVICE_WRITE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "memory_region_ram_device_write",
    .sstate = TRACE_MEMORY_REGION_RAM_DEVICE_WRITE_ENABLED,
    .dstate = &_TRACE_MEMORY_REGION_RAM_DEVICE_WRITE_DSTATE 
};
TraceEvent _TRACE_FLATVIEW_NEW_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "flatview_new",
    .sstate = TRACE_FLATVIEW_NEW_ENABLED,
    .dstate = &_TRACE_FLATVIEW_NEW_DSTATE 
};
TraceEvent _TRACE_FLATVIEW_DESTROY_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "flatview_destroy",
    .sstate = TRACE_FLATVIEW_DESTROY_ENABLED,
    .dstate = &_TRACE_FLATVIEW_DESTROY_DSTATE 
};
TraceEvent _TRACE_FLATVIEW_DESTROY_RCU_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "flatview_destroy_rcu",
    .sstate = TRACE_FLATVIEW_DESTROY_RCU_ENABLED,
    .dstate = &_TRACE_FLATVIEW_DESTROY_RCU_DSTATE 
};
TraceEvent _TRACE_VM_STATE_NOTIFY_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "vm_state_notify",
    .sstate = TRACE_VM_STATE_NOTIFY_ENABLED,
    .dstate = &_TRACE_VM_STATE_NOTIFY_DSTATE 
};
TraceEvent _TRACE_LOAD_FILE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "load_file",
    .sstate = TRACE_LOAD_FILE_ENABLED,
    .dstate = &_TRACE_LOAD_FILE_DSTATE 
};
TraceEvent _TRACE_RUNSTATE_SET_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "runstate_set",
    .sstate = TRACE_RUNSTATE_SET_ENABLED,
    .dstate = &_TRACE_RUNSTATE_SET_DSTATE 
};
TraceEvent _TRACE_SYSTEM_WAKEUP_REQUEST_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "system_wakeup_request",
    .sstate = TRACE_SYSTEM_WAKEUP_REQUEST_ENABLED,
    .dstate = &_TRACE_SYSTEM_WAKEUP_REQUEST_DSTATE 
};
TraceEvent _TRACE_QEMU_SYSTEM_SHUTDOWN_REQUEST_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qemu_system_shutdown_request",
    .sstate = TRACE_QEMU_SYSTEM_SHUTDOWN_REQUEST_ENABLED,
    .dstate = &_TRACE_QEMU_SYSTEM_SHUTDOWN_REQUEST_DSTATE 
};
TraceEvent _TRACE_QEMU_SYSTEM_POWERDOWN_REQUEST_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qemu_system_powerdown_request",
    .sstate = TRACE_QEMU_SYSTEM_POWERDOWN_REQUEST_ENABLED,
    .dstate = &_TRACE_QEMU_SYSTEM_POWERDOWN_REQUEST_DSTATE 
};
TraceEvent *softmmu_trace_events[] = {
    &_TRACE_BALLOON_EVENT_EVENT,
    &_TRACE_CPU_IN_EVENT,
    &_TRACE_CPU_OUT_EVENT,
    &_TRACE_MEMORY_REGION_OPS_READ_EVENT,
    &_TRACE_MEMORY_REGION_OPS_WRITE_EVENT,
    &_TRACE_MEMORY_REGION_SUBPAGE_READ_EVENT,
    &_TRACE_MEMORY_REGION_SUBPAGE_WRITE_EVENT,
    &_TRACE_MEMORY_REGION_RAM_DEVICE_READ_EVENT,
    &_TRACE_MEMORY_REGION_RAM_DEVICE_WRITE_EVENT,
    &_TRACE_FLATVIEW_NEW_EVENT,
    &_TRACE_FLATVIEW_DESTROY_EVENT,
    &_TRACE_FLATVIEW_DESTROY_RCU_EVENT,
    &_TRACE_VM_STATE_NOTIFY_EVENT,
    &_TRACE_LOAD_FILE_EVENT,
    &_TRACE_RUNSTATE_SET_EVENT,
    &_TRACE_SYSTEM_WAKEUP_REQUEST_EVENT,
    &_TRACE_QEMU_SYSTEM_SHUTDOWN_REQUEST_EVENT,
    &_TRACE_QEMU_SYSTEM_POWERDOWN_REQUEST_EVENT,
  NULL,
};

static void trace_softmmu_register_events(void)
{
    trace_event_register_group(softmmu_trace_events);
}
trace_init(trace_softmmu_register_events)
