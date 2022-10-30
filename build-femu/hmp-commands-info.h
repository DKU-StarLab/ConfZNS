

{
.name       = "version",
.args_type  = "",
.params     = "",
.help       = "show the version of QEMU",
.cmd        = hmp_info_version,
.flags      = "p",
},


{
.name       = "network",
.args_type  = "",
.params     = "",
.help       = "show the network state",
.cmd        = hmp_info_network,
},


{
.name       = "chardev",
.args_type  = "",
.params     = "",
.help       = "show the character devices",
.cmd        = hmp_info_chardev,
.flags      = "p",
},


{
.name       = "block",
.args_type  = "nodes:-n,verbose:-v,device:B?",
.params     = "[-n] [-v] [device]",
.help       = "show info of one block device or all block devices "
"(-n: show named nodes; -v: show details)",
.cmd        = hmp_info_block,
},


{
.name       = "blockstats",
.args_type  = "",
.params     = "",
.help       = "show block device statistics",
.cmd        = hmp_info_blockstats,
},


{
.name       = "block-jobs",
.args_type  = "",
.params     = "",
.help       = "show progress of ongoing block device operations",
.cmd        = hmp_info_block_jobs,
},


{
.name       = "registers",
.args_type  = "cpustate_all:-a",
.params     = "[-a]",
.help       = "show the cpu registers (-a: all - show register info for all cpus)",
.cmd        = hmp_info_registers,
},


#if defined(TARGET_I386)
{
.name       = "lapic",
.args_type  = "apic-id:i?",
.params     = "[apic-id]",
.help       = "show local apic state (apic-id: local apic to read, default is which of current CPU)",

.cmd        = hmp_info_local_apic,
},
#endif


{
.name       = "cpus",
.args_type  = "",
.params     = "",
.help       = "show infos for each CPU",
.cmd        = hmp_info_cpus,
},


{
.name       = "history",
.args_type  = "",
.params     = "",
.help       = "show the command line history",
.cmd        = hmp_info_history,
.flags      = "p",
},


{
.name       = "irq",
.args_type  = "",
.params     = "",
.help       = "show the interrupts statistics (if available)",
.cmd_info_hrt = qmp_x_query_irq,
},


{
.name       = "pic",
.args_type  = "",
.params     = "",
.help       = "show PIC state",
.cmd        = hmp_info_pic,
},


{
.name       = "rdma",
.args_type  = "",
.params     = "",
.help       = "show RDMA state",
.cmd_info_hrt = qmp_x_query_rdma,
},


{
.name       = "pci",
.args_type  = "",
.params     = "",
.help       = "show PCI info",
.cmd        = hmp_info_pci,
},


#if defined(TARGET_I386) || defined(TARGET_SH4) || defined(TARGET_SPARC) || \
defined(TARGET_PPC) || defined(TARGET_XTENSA) || defined(TARGET_M68K)
{
.name       = "tlb",
.args_type  = "",
.params     = "",
.help       = "show virtual to physical memory mappings",
.cmd        = hmp_info_tlb,
},
#endif


#if defined(TARGET_I386) || defined(TARGET_RISCV)
{
.name       = "mem",
.args_type  = "",
.params     = "",
.help       = "show the active virtual memory mappings",
.cmd        = hmp_info_mem,
},
#endif


{
.name       = "mtree",
.args_type  = "flatview:-f,dispatch_tree:-d,owner:-o,disabled:-D",
.params     = "[-f][-d][-o][-D]",
.help       = "show memory tree (-f: dump flat view for address spaces;"
"-d: dump dispatch tree, valid with -f only);"
"-o: dump region owners/parents;"
"-D: dump disabled regions",
.cmd        = hmp_info_mtree,
},


#if defined(CONFIG_TCG)
{
.name       = "jit",
.args_type  = "",
.params     = "",
.help       = "show dynamic compiler info",
},
#endif


#if defined(CONFIG_TCG)
{
.name       = "opcount",
.args_type  = "",
.params     = "",
.help       = "show dynamic compiler opcode counters",
},
#endif


{
.name       = "sync-profile",
.args_type  = "mean:-m,no_coalesce:-n,max:i?",
.params     = "[-m] [-n] [max]",
.help       = "show synchronization profiling info, up to max entries "
"(default: 10), sorted by total wait time. (-m: sort by "
"mean wait time; -n: do not coalesce objects with the "
"same call site)",
.cmd        = hmp_info_sync_profile,
},


{
.name       = "kvm",
.args_type  = "",
.params     = "",
.help       = "show KVM information",
.cmd        = hmp_info_kvm,
},


{
.name       = "numa",
.args_type  = "",
.params     = "",
.help       = "show NUMA information",
.cmd_info_hrt = qmp_x_query_numa,
},


{
.name       = "usb",
.args_type  = "",
.params     = "",
.help       = "show guest USB devices",
.cmd_info_hrt = qmp_x_query_usb,
},


{
.name       = "usbhost",
.args_type  = "",
.params     = "",
.help       = "show host USB devices",
},


#if defined(CONFIG_TCG)
{
.name       = "profile",
.args_type  = "",
.params     = "",
.help       = "show profiling information",
.cmd_info_hrt = qmp_x_query_profile,
},
#endif


{
.name       = "capture",
.args_type  = "",
.params     = "",
.help       = "show capture information",
.cmd        = hmp_info_capture,
},


{
.name       = "snapshots",
.args_type  = "",
.params     = "",
.help       = "show the currently saved VM snapshots",
.cmd        = hmp_info_snapshots,
},


{
.name       = "status",
.args_type  = "",
.params     = "",
.help       = "show the current VM status (running|paused)",
.cmd        = hmp_info_status,
.flags      = "p",
},


{
.name       = "mice",
.args_type  = "",
.params     = "",
.help       = "show which guest mouse is receiving events",
.cmd        = hmp_info_mice,
},


#if defined(CONFIG_VNC)
{
.name       = "vnc",
.args_type  = "",
.params     = "",
.help       = "show the vnc server status",
.cmd        = hmp_info_vnc,
},
#endif


#if defined(CONFIG_SPICE)
{
.name       = "spice",
.args_type  = "",
.params     = "",
.help       = "show the spice server status",
.cmd        = hmp_info_spice,
},
#endif


{
.name       = "name",
.args_type  = "",
.params     = "",
.help       = "show the current VM name",
.cmd        = hmp_info_name,
.flags      = "p",
},


{
.name       = "uuid",
.args_type  = "",
.params     = "",
.help       = "show the current VM UUID",
.cmd        = hmp_info_uuid,
.flags      = "p",
},


#if defined(CONFIG_SLIRP)
{
.name       = "usernet",
.args_type  = "",
.params     = "",
.help       = "show user network stack connection states",
.cmd        = hmp_info_usernet,
},
#endif


{
.name       = "migrate",
.args_type  = "",
.params     = "",
.help       = "show migration status",
.cmd        = hmp_info_migrate,
},


{
.name       = "migrate_capabilities",
.args_type  = "",
.params     = "",
.help       = "show current migration capabilities",
.cmd        = hmp_info_migrate_capabilities,
},


{
.name       = "migrate_parameters",
.args_type  = "",
.params     = "",
.help       = "show current migration parameters",
.cmd        = hmp_info_migrate_parameters,
},


{
.name       = "balloon",
.args_type  = "",
.params     = "",
.help       = "show balloon information",
.cmd        = hmp_info_balloon,
},


{
.name       = "qtree",
.args_type  = "",
.params     = "",
.help       = "show device tree",
.cmd        = hmp_info_qtree,
},


{
.name       = "qdm",
.args_type  = "",
.params     = "",
.help       = "show qdev device model list",
.cmd        = hmp_info_qdm,
},


{
.name       = "qom-tree",
.args_type  = "path:s?",
.params     = "[path]",
.help       = "show QOM composition tree",
.cmd        = hmp_info_qom_tree,
.flags      = "p",
},


{
.name       = "roms",
.args_type  = "",
.params     = "",
.help       = "show roms",
.cmd_info_hrt = qmp_x_query_roms,
},


{
.name       = "trace-events",
.args_type  = "name:s?,vcpu:i?",
.params     = "[name] [vcpu]",
.help       = "show available trace-events & their state "
"(name: event name pattern; vcpu: vCPU to query, default is any)",
.cmd = hmp_info_trace_events,
.command_completion = info_trace_events_completion,
},


{
.name       = "tpm",
.args_type  = "",
.params     = "",
.help       = "show the TPM device",
.cmd        = hmp_info_tpm,
},


{
.name       = "memdev",
.args_type  = "",
.params     = "",
.help       = "show memory backends",
.cmd        = hmp_info_memdev,
.flags      = "p",
},


{
.name       = "memory-devices",
.args_type  = "",
.params     = "",
.help       = "show memory devices",
.cmd        = hmp_info_memory_devices,
},


{
.name       = "iothreads",
.args_type  = "",
.params     = "",
.help       = "show iothreads",
.cmd        = hmp_info_iothreads,
.flags      = "p",
},


{
.name       = "rocker",
.args_type  = "name:s",
.params     = "name",
.help       = "Show rocker switch",
.cmd        = hmp_rocker,
},


{
.name       = "rocker-ports",
.args_type  = "name:s",
.params     = "name",
.help       = "Show rocker ports",
.cmd        = hmp_rocker_ports,
},


{
.name       = "rocker-of-dpa-flows",
.args_type  = "name:s,tbl_id:i?",
.params     = "name [tbl_id]",
.help       = "Show rocker OF-DPA flow tables",
.cmd        = hmp_rocker_of_dpa_flows,
},


{
.name       = "rocker-of-dpa-groups",
.args_type  = "name:s,type:i?",
.params     = "name [type]",
.help       = "Show rocker OF-DPA groups",
.cmd        = hmp_rocker_of_dpa_groups,
},


#if defined(TARGET_S390X)
{
.name       = "skeys",
.args_type  = "addr:l",
.params     = "address",
.help       = "Display the value of a storage key",
.cmd        = hmp_info_skeys,
},
#endif


#if defined(TARGET_S390X)
{
.name       = "cmma",
.args_type  = "addr:l,count:l?",
.params     = "address [count]",
.help       = "Display the values of the CMMA storage attributes for a range of pages",
.cmd        = hmp_info_cmma,
},
#endif


{
.name       = "dump",
.args_type  = "",
.params     = "",
.help       = "Display the latest dump status",
.cmd        = hmp_info_dump,
},


{
.name       = "ramblock",
.args_type  = "",
.params     = "",
.help       = "Display system ramblock information",
.cmd_info_hrt = qmp_x_query_ramblock,
},


{
.name       = "hotpluggable-cpus",
.args_type  = "",
.params     = "",
.help       = "Show information about hotpluggable CPUs",
.cmd        = hmp_hotpluggable_cpus,
.flags      = "p",
},


{
.name       = "vm-generation-id",
.args_type  = "",
.params     = "",
.help       = "Show Virtual Machine Generation ID",
.cmd = hmp_info_vm_generation_id,
},


{
.name       = "memory_size_summary",
.args_type  = "",
.params     = "",
.help       = "show the amount of initially allocated and "
"present hotpluggable (if enabled) memory in bytes.",
.cmd        = hmp_info_memory_size_summary,
},


#if defined(TARGET_I386)
{
.name       = "sev",
.args_type  = "",
.params     = "",
.help       = "show SEV information",
.cmd        = hmp_info_sev,
},
#endif


{
.name       = "replay",
.args_type  = "",
.params     = "",
.help       = "show record/replay information",
.cmd        = hmp_info_replay,
},


{
.name       = "dirty_rate",
.args_type  = "",
.params     = "",
.help       = "show dirty rate information",
.cmd        = hmp_info_dirty_rate,
},


#if defined(TARGET_I386)
{
.name       = "sgx",
.args_type  = "",
.params     = "",
.help       = "show intel SGX information",
.cmd        = hmp_info_sgx,
},
#endif


#if defined(TARGET_M68K) || defined(TARGET_PPC)
{
.name         = "via",
.args_type    = "",
.params       = "",
.help         = "show guest mos6522 VIA devices",
.cmd          = hmp_info_via,
},
#endif

