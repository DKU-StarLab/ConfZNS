/* AUTOMATICALLY GENERATED, DO NOT MODIFY */

/*
 * QAPI Commands initialization
 *
 * Copyright IBM, Corp. 2011
 * Copyright (C) 2014-2018 Red Hat, Inc.
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1 or later.
 * See the COPYING.LIB file in the top-level directory.
 */

#include "qemu/osdep.h"
#include "qga-qapi-commands.h"
#include "qga-qapi-init-commands.h"

void qga_qmp_init_marshal(QmpCommandList *cmds)
{
    QTAILQ_INIT(cmds);

    qmp_register_command(cmds, "guest-sync-delimited",
                         qmp_marshal_guest_sync_delimited, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "guest-sync",
                         qmp_marshal_guest_sync, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "guest-ping",
                         qmp_marshal_guest_ping, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "guest-get-time",
                         qmp_marshal_guest_get_time, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "guest-set-time",
                         qmp_marshal_guest_set_time, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "guest-info",
                         qmp_marshal_guest_info, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "guest-shutdown",
                         qmp_marshal_guest_shutdown, QCO_NO_SUCCESS_RESP);
    qmp_register_command(cmds, "guest-file-open",
                         qmp_marshal_guest_file_open, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "guest-file-close",
                         qmp_marshal_guest_file_close, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "guest-file-read",
                         qmp_marshal_guest_file_read, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "guest-file-write",
                         qmp_marshal_guest_file_write, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "guest-file-seek",
                         qmp_marshal_guest_file_seek, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "guest-file-flush",
                         qmp_marshal_guest_file_flush, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "guest-fsfreeze-status",
                         qmp_marshal_guest_fsfreeze_status, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "guest-fsfreeze-freeze",
                         qmp_marshal_guest_fsfreeze_freeze, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "guest-fsfreeze-freeze-list",
                         qmp_marshal_guest_fsfreeze_freeze_list, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "guest-fsfreeze-thaw",
                         qmp_marshal_guest_fsfreeze_thaw, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "guest-fstrim",
                         qmp_marshal_guest_fstrim, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "guest-suspend-disk",
                         qmp_marshal_guest_suspend_disk, QCO_NO_SUCCESS_RESP);
    qmp_register_command(cmds, "guest-suspend-ram",
                         qmp_marshal_guest_suspend_ram, QCO_NO_SUCCESS_RESP);
    qmp_register_command(cmds, "guest-suspend-hybrid",
                         qmp_marshal_guest_suspend_hybrid, QCO_NO_SUCCESS_RESP);
    qmp_register_command(cmds, "guest-network-get-interfaces",
                         qmp_marshal_guest_network_get_interfaces, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "guest-get-vcpus",
                         qmp_marshal_guest_get_vcpus, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "guest-set-vcpus",
                         qmp_marshal_guest_set_vcpus, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "guest-get-disks",
                         qmp_marshal_guest_get_disks, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "guest-get-fsinfo",
                         qmp_marshal_guest_get_fsinfo, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "guest-set-user-password",
                         qmp_marshal_guest_set_user_password, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "guest-get-memory-blocks",
                         qmp_marshal_guest_get_memory_blocks, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "guest-set-memory-blocks",
                         qmp_marshal_guest_set_memory_blocks, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "guest-get-memory-block-info",
                         qmp_marshal_guest_get_memory_block_info, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "guest-exec-status",
                         qmp_marshal_guest_exec_status, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "guest-exec",
                         qmp_marshal_guest_exec, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "guest-get-host-name",
                         qmp_marshal_guest_get_host_name, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "guest-get-users",
                         qmp_marshal_guest_get_users, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "guest-get-timezone",
                         qmp_marshal_guest_get_timezone, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "guest-get-osinfo",
                         qmp_marshal_guest_get_osinfo, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "guest-get-devices",
                         qmp_marshal_guest_get_devices, QCO_NO_OPTIONS);
#if defined(CONFIG_POSIX)
    qmp_register_command(cmds, "guest-ssh-get-authorized-keys",
                         qmp_marshal_guest_ssh_get_authorized_keys, QCO_NO_OPTIONS);
#endif /* defined(CONFIG_POSIX) */
#if defined(CONFIG_POSIX)
    qmp_register_command(cmds, "guest-ssh-add-authorized-keys",
                         qmp_marshal_guest_ssh_add_authorized_keys, QCO_NO_OPTIONS);
#endif /* defined(CONFIG_POSIX) */
#if defined(CONFIG_POSIX)
    qmp_register_command(cmds, "guest-ssh-remove-authorized-keys",
                         qmp_marshal_guest_ssh_remove_authorized_keys, QCO_NO_OPTIONS);
#endif /* defined(CONFIG_POSIX) */
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qga_qapi_init_commands_c;
