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

#ifndef QGA_QAPI_TYPES_H
#define QGA_QAPI_TYPES_H

#include "qapi/qapi-builtin-types.h"

typedef struct q_obj_guest_sync_delimited_arg q_obj_guest_sync_delimited_arg;

typedef struct q_obj_guest_sync_arg q_obj_guest_sync_arg;

typedef struct q_obj_guest_set_time_arg q_obj_guest_set_time_arg;

typedef struct GuestAgentCommandInfo GuestAgentCommandInfo;

typedef struct GuestAgentCommandInfoList GuestAgentCommandInfoList;

typedef struct GuestAgentInfo GuestAgentInfo;

typedef struct q_obj_guest_shutdown_arg q_obj_guest_shutdown_arg;

typedef struct q_obj_guest_file_open_arg q_obj_guest_file_open_arg;

typedef struct q_obj_guest_file_close_arg q_obj_guest_file_close_arg;

typedef struct GuestFileRead GuestFileRead;

typedef struct q_obj_guest_file_read_arg q_obj_guest_file_read_arg;

typedef struct GuestFileWrite GuestFileWrite;

typedef struct q_obj_guest_file_write_arg q_obj_guest_file_write_arg;

typedef struct GuestFileSeek GuestFileSeek;

typedef enum QGASeek {
    QGA_SEEK_SET,
    QGA_SEEK_CUR,
    QGA_SEEK_END,
    QGA_SEEK__MAX,
} QGASeek;

#define QGASeek_str(val) \
    qapi_enum_lookup(&QGASeek_lookup, (val))

extern const QEnumLookup QGASeek_lookup;

typedef struct GuestFileWhence GuestFileWhence;

typedef struct q_obj_guest_file_seek_arg q_obj_guest_file_seek_arg;

typedef struct q_obj_guest_file_flush_arg q_obj_guest_file_flush_arg;

typedef enum GuestFsfreezeStatus {
    GUEST_FSFREEZE_STATUS_THAWED,
    GUEST_FSFREEZE_STATUS_FROZEN,
    GUEST_FSFREEZE_STATUS__MAX,
} GuestFsfreezeStatus;

#define GuestFsfreezeStatus_str(val) \
    qapi_enum_lookup(&GuestFsfreezeStatus_lookup, (val))

extern const QEnumLookup GuestFsfreezeStatus_lookup;

typedef struct q_obj_guest_fsfreeze_freeze_list_arg q_obj_guest_fsfreeze_freeze_list_arg;

typedef struct GuestFilesystemTrimResult GuestFilesystemTrimResult;

typedef struct GuestFilesystemTrimResultList GuestFilesystemTrimResultList;

typedef struct GuestFilesystemTrimResponse GuestFilesystemTrimResponse;

typedef struct q_obj_guest_fstrim_arg q_obj_guest_fstrim_arg;

typedef enum GuestIpAddressType {
    GUEST_IP_ADDRESS_TYPE_IPV4,
    GUEST_IP_ADDRESS_TYPE_IPV6,
    GUEST_IP_ADDRESS_TYPE__MAX,
} GuestIpAddressType;

#define GuestIpAddressType_str(val) \
    qapi_enum_lookup(&GuestIpAddressType_lookup, (val))

extern const QEnumLookup GuestIpAddressType_lookup;

typedef struct GuestIpAddress GuestIpAddress;

typedef struct GuestNetworkInterfaceStat GuestNetworkInterfaceStat;

typedef struct GuestIpAddressList GuestIpAddressList;

typedef struct GuestNetworkInterface GuestNetworkInterface;

typedef struct GuestNetworkInterfaceList GuestNetworkInterfaceList;

typedef struct GuestLogicalProcessor GuestLogicalProcessor;

typedef struct GuestLogicalProcessorList GuestLogicalProcessorList;

typedef struct q_obj_guest_set_vcpus_arg q_obj_guest_set_vcpus_arg;

typedef enum GuestDiskBusType {
    GUEST_DISK_BUS_TYPE_IDE,
    GUEST_DISK_BUS_TYPE_FDC,
    GUEST_DISK_BUS_TYPE_SCSI,
    GUEST_DISK_BUS_TYPE_VIRTIO,
    GUEST_DISK_BUS_TYPE_XEN,
    GUEST_DISK_BUS_TYPE_USB,
    GUEST_DISK_BUS_TYPE_UML,
    GUEST_DISK_BUS_TYPE_SATA,
    GUEST_DISK_BUS_TYPE_SD,
    GUEST_DISK_BUS_TYPE_UNKNOWN,
    GUEST_DISK_BUS_TYPE_IEEE1394,
    GUEST_DISK_BUS_TYPE_SSA,
    GUEST_DISK_BUS_TYPE_FIBRE,
    GUEST_DISK_BUS_TYPE_RAID,
    GUEST_DISK_BUS_TYPE_ISCSI,
    GUEST_DISK_BUS_TYPE_SAS,
    GUEST_DISK_BUS_TYPE_MMC,
    GUEST_DISK_BUS_TYPE_VIRTUAL,
    GUEST_DISK_BUS_TYPE_FILE_BACKED_VIRTUAL,
    GUEST_DISK_BUS_TYPE__MAX,
} GuestDiskBusType;

#define GuestDiskBusType_str(val) \
    qapi_enum_lookup(&GuestDiskBusType_lookup, (val))

extern const QEnumLookup GuestDiskBusType_lookup;

typedef struct GuestPCIAddress GuestPCIAddress;

typedef struct GuestCCWAddress GuestCCWAddress;

typedef struct GuestDiskAddress GuestDiskAddress;

typedef struct GuestDiskInfo GuestDiskInfo;

typedef struct GuestDiskInfoList GuestDiskInfoList;

typedef struct GuestDiskAddressList GuestDiskAddressList;

typedef struct GuestFilesystemInfo GuestFilesystemInfo;

typedef struct GuestFilesystemInfoList GuestFilesystemInfoList;

typedef struct q_obj_guest_set_user_password_arg q_obj_guest_set_user_password_arg;

typedef struct GuestMemoryBlock GuestMemoryBlock;

typedef struct GuestMemoryBlockList GuestMemoryBlockList;

typedef enum GuestMemoryBlockResponseType {
    GUEST_MEMORY_BLOCK_RESPONSE_TYPE_SUCCESS,
    GUEST_MEMORY_BLOCK_RESPONSE_TYPE_NOT_FOUND,
    GUEST_MEMORY_BLOCK_RESPONSE_TYPE_OPERATION_NOT_SUPPORTED,
    GUEST_MEMORY_BLOCK_RESPONSE_TYPE_OPERATION_FAILED,
    GUEST_MEMORY_BLOCK_RESPONSE_TYPE__MAX,
} GuestMemoryBlockResponseType;

#define GuestMemoryBlockResponseType_str(val) \
    qapi_enum_lookup(&GuestMemoryBlockResponseType_lookup, (val))

extern const QEnumLookup GuestMemoryBlockResponseType_lookup;

typedef struct GuestMemoryBlockResponse GuestMemoryBlockResponse;

typedef struct q_obj_guest_set_memory_blocks_arg q_obj_guest_set_memory_blocks_arg;

typedef struct GuestMemoryBlockResponseList GuestMemoryBlockResponseList;

typedef struct GuestMemoryBlockInfo GuestMemoryBlockInfo;

typedef struct GuestExecStatus GuestExecStatus;

typedef struct q_obj_guest_exec_status_arg q_obj_guest_exec_status_arg;

typedef struct GuestExec GuestExec;

typedef struct q_obj_guest_exec_arg q_obj_guest_exec_arg;

typedef struct GuestHostName GuestHostName;

typedef struct GuestUser GuestUser;

typedef struct GuestUserList GuestUserList;

typedef struct GuestTimezone GuestTimezone;

typedef struct GuestOSInfo GuestOSInfo;

typedef enum GuestDeviceType {
    GUEST_DEVICE_TYPE_PCI,
    GUEST_DEVICE_TYPE__MAX,
} GuestDeviceType;

#define GuestDeviceType_str(val) \
    qapi_enum_lookup(&GuestDeviceType_lookup, (val))

extern const QEnumLookup GuestDeviceType_lookup;

typedef struct GuestDeviceIdPCI GuestDeviceIdPCI;

typedef struct q_obj_GuestDeviceId_base q_obj_GuestDeviceId_base;

typedef struct GuestDeviceId GuestDeviceId;

typedef struct GuestDeviceInfo GuestDeviceInfo;

typedef struct GuestDeviceInfoList GuestDeviceInfoList;

#if defined(CONFIG_POSIX)
typedef struct GuestAuthorizedKeys GuestAuthorizedKeys;
#endif /* defined(CONFIG_POSIX) */

#if defined(CONFIG_POSIX)
typedef struct q_obj_guest_ssh_get_authorized_keys_arg q_obj_guest_ssh_get_authorized_keys_arg;
#endif /* defined(CONFIG_POSIX) */

#if defined(CONFIG_POSIX)
typedef struct q_obj_guest_ssh_add_authorized_keys_arg q_obj_guest_ssh_add_authorized_keys_arg;
#endif /* defined(CONFIG_POSIX) */

#if defined(CONFIG_POSIX)
typedef struct q_obj_guest_ssh_remove_authorized_keys_arg q_obj_guest_ssh_remove_authorized_keys_arg;
#endif /* defined(CONFIG_POSIX) */

struct q_obj_guest_sync_delimited_arg {
    int64_t id;
};

struct q_obj_guest_sync_arg {
    int64_t id;
};

struct q_obj_guest_set_time_arg {
    bool has_time;
    int64_t time;
};

struct GuestAgentCommandInfo {
    char *name;
    bool enabled;
    bool success_response;
};

void qapi_free_GuestAgentCommandInfo(GuestAgentCommandInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestAgentCommandInfo, qapi_free_GuestAgentCommandInfo)

struct GuestAgentCommandInfoList {
    GuestAgentCommandInfoList *next;
    GuestAgentCommandInfo *value;
};

void qapi_free_GuestAgentCommandInfoList(GuestAgentCommandInfoList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestAgentCommandInfoList, qapi_free_GuestAgentCommandInfoList)

struct GuestAgentInfo {
    char *version;
    GuestAgentCommandInfoList *supported_commands;
};

void qapi_free_GuestAgentInfo(GuestAgentInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestAgentInfo, qapi_free_GuestAgentInfo)

struct q_obj_guest_shutdown_arg {
    bool has_mode;
    char *mode;
};

struct q_obj_guest_file_open_arg {
    char *path;
    bool has_mode;
    char *mode;
};

struct q_obj_guest_file_close_arg {
    int64_t handle;
};

struct GuestFileRead {
    int64_t count;
    char *buf_b64;
    bool eof;
};

void qapi_free_GuestFileRead(GuestFileRead *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestFileRead, qapi_free_GuestFileRead)

struct q_obj_guest_file_read_arg {
    int64_t handle;
    bool has_count;
    int64_t count;
};

struct GuestFileWrite {
    int64_t count;
    bool eof;
};

void qapi_free_GuestFileWrite(GuestFileWrite *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestFileWrite, qapi_free_GuestFileWrite)

struct q_obj_guest_file_write_arg {
    int64_t handle;
    char *buf_b64;
    bool has_count;
    int64_t count;
};

struct GuestFileSeek {
    int64_t position;
    bool eof;
};

void qapi_free_GuestFileSeek(GuestFileSeek *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestFileSeek, qapi_free_GuestFileSeek)

struct GuestFileWhence {
    QType type;
    union { /* union tag is @type */
        int64_t value;
        QGASeek name;
    } u;
};

void qapi_free_GuestFileWhence(GuestFileWhence *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestFileWhence, qapi_free_GuestFileWhence)

struct q_obj_guest_file_seek_arg {
    int64_t handle;
    int64_t offset;
    GuestFileWhence *whence;
};

struct q_obj_guest_file_flush_arg {
    int64_t handle;
};

struct q_obj_guest_fsfreeze_freeze_list_arg {
    bool has_mountpoints;
    strList *mountpoints;
};

struct GuestFilesystemTrimResult {
    char *path;
    bool has_trimmed;
    int64_t trimmed;
    bool has_minimum;
    int64_t minimum;
    bool has_error;
    char *error;
};

void qapi_free_GuestFilesystemTrimResult(GuestFilesystemTrimResult *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestFilesystemTrimResult, qapi_free_GuestFilesystemTrimResult)

struct GuestFilesystemTrimResultList {
    GuestFilesystemTrimResultList *next;
    GuestFilesystemTrimResult *value;
};

void qapi_free_GuestFilesystemTrimResultList(GuestFilesystemTrimResultList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestFilesystemTrimResultList, qapi_free_GuestFilesystemTrimResultList)

struct GuestFilesystemTrimResponse {
    GuestFilesystemTrimResultList *paths;
};

void qapi_free_GuestFilesystemTrimResponse(GuestFilesystemTrimResponse *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestFilesystemTrimResponse, qapi_free_GuestFilesystemTrimResponse)

struct q_obj_guest_fstrim_arg {
    bool has_minimum;
    int64_t minimum;
};

struct GuestIpAddress {
    char *ip_address;
    GuestIpAddressType ip_address_type;
    int64_t prefix;
};

void qapi_free_GuestIpAddress(GuestIpAddress *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestIpAddress, qapi_free_GuestIpAddress)

struct GuestNetworkInterfaceStat {
    uint64_t rx_bytes;
    uint64_t rx_packets;
    uint64_t rx_errs;
    uint64_t rx_dropped;
    uint64_t tx_bytes;
    uint64_t tx_packets;
    uint64_t tx_errs;
    uint64_t tx_dropped;
};

void qapi_free_GuestNetworkInterfaceStat(GuestNetworkInterfaceStat *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestNetworkInterfaceStat, qapi_free_GuestNetworkInterfaceStat)

struct GuestIpAddressList {
    GuestIpAddressList *next;
    GuestIpAddress *value;
};

void qapi_free_GuestIpAddressList(GuestIpAddressList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestIpAddressList, qapi_free_GuestIpAddressList)

struct GuestNetworkInterface {
    char *name;
    bool has_hardware_address;
    char *hardware_address;
    bool has_ip_addresses;
    GuestIpAddressList *ip_addresses;
    bool has_statistics;
    GuestNetworkInterfaceStat *statistics;
};

void qapi_free_GuestNetworkInterface(GuestNetworkInterface *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestNetworkInterface, qapi_free_GuestNetworkInterface)

struct GuestNetworkInterfaceList {
    GuestNetworkInterfaceList *next;
    GuestNetworkInterface *value;
};

void qapi_free_GuestNetworkInterfaceList(GuestNetworkInterfaceList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestNetworkInterfaceList, qapi_free_GuestNetworkInterfaceList)

struct GuestLogicalProcessor {
    int64_t logical_id;
    bool online;
    bool has_can_offline;
    bool can_offline;
};

void qapi_free_GuestLogicalProcessor(GuestLogicalProcessor *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestLogicalProcessor, qapi_free_GuestLogicalProcessor)

struct GuestLogicalProcessorList {
    GuestLogicalProcessorList *next;
    GuestLogicalProcessor *value;
};

void qapi_free_GuestLogicalProcessorList(GuestLogicalProcessorList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestLogicalProcessorList, qapi_free_GuestLogicalProcessorList)

struct q_obj_guest_set_vcpus_arg {
    GuestLogicalProcessorList *vcpus;
};

struct GuestPCIAddress {
    int64_t domain;
    int64_t bus;
    int64_t slot;
    int64_t function;
};

void qapi_free_GuestPCIAddress(GuestPCIAddress *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestPCIAddress, qapi_free_GuestPCIAddress)

struct GuestCCWAddress {
    int64_t cssid;
    int64_t ssid;
    int64_t subchno;
    int64_t devno;
};

void qapi_free_GuestCCWAddress(GuestCCWAddress *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestCCWAddress, qapi_free_GuestCCWAddress)

struct GuestDiskAddress {
    GuestPCIAddress *pci_controller;
    GuestDiskBusType bus_type;
    int64_t bus;
    int64_t target;
    int64_t unit;
    bool has_serial;
    char *serial;
    bool has_dev;
    char *dev;
    bool has_ccw_address;
    GuestCCWAddress *ccw_address;
};

void qapi_free_GuestDiskAddress(GuestDiskAddress *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestDiskAddress, qapi_free_GuestDiskAddress)

struct GuestDiskInfo {
    char *name;
    bool partition;
    bool has_dependencies;
    strList *dependencies;
    bool has_address;
    GuestDiskAddress *address;
    bool has_alias;
    char *alias;
};

void qapi_free_GuestDiskInfo(GuestDiskInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestDiskInfo, qapi_free_GuestDiskInfo)

struct GuestDiskInfoList {
    GuestDiskInfoList *next;
    GuestDiskInfo *value;
};

void qapi_free_GuestDiskInfoList(GuestDiskInfoList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestDiskInfoList, qapi_free_GuestDiskInfoList)

struct GuestDiskAddressList {
    GuestDiskAddressList *next;
    GuestDiskAddress *value;
};

void qapi_free_GuestDiskAddressList(GuestDiskAddressList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestDiskAddressList, qapi_free_GuestDiskAddressList)

struct GuestFilesystemInfo {
    char *name;
    char *mountpoint;
    char *type;
    bool has_used_bytes;
    uint64_t used_bytes;
    bool has_total_bytes;
    uint64_t total_bytes;
    GuestDiskAddressList *disk;
};

void qapi_free_GuestFilesystemInfo(GuestFilesystemInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestFilesystemInfo, qapi_free_GuestFilesystemInfo)

struct GuestFilesystemInfoList {
    GuestFilesystemInfoList *next;
    GuestFilesystemInfo *value;
};

void qapi_free_GuestFilesystemInfoList(GuestFilesystemInfoList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestFilesystemInfoList, qapi_free_GuestFilesystemInfoList)

struct q_obj_guest_set_user_password_arg {
    char *username;
    char *password;
    bool crypted;
};

struct GuestMemoryBlock {
    uint64_t phys_index;
    bool online;
    bool has_can_offline;
    bool can_offline;
};

void qapi_free_GuestMemoryBlock(GuestMemoryBlock *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestMemoryBlock, qapi_free_GuestMemoryBlock)

struct GuestMemoryBlockList {
    GuestMemoryBlockList *next;
    GuestMemoryBlock *value;
};

void qapi_free_GuestMemoryBlockList(GuestMemoryBlockList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestMemoryBlockList, qapi_free_GuestMemoryBlockList)

struct GuestMemoryBlockResponse {
    uint64_t phys_index;
    GuestMemoryBlockResponseType response;
    bool has_error_code;
    int64_t error_code;
};

void qapi_free_GuestMemoryBlockResponse(GuestMemoryBlockResponse *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestMemoryBlockResponse, qapi_free_GuestMemoryBlockResponse)

struct q_obj_guest_set_memory_blocks_arg {
    GuestMemoryBlockList *mem_blks;
};

struct GuestMemoryBlockResponseList {
    GuestMemoryBlockResponseList *next;
    GuestMemoryBlockResponse *value;
};

void qapi_free_GuestMemoryBlockResponseList(GuestMemoryBlockResponseList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestMemoryBlockResponseList, qapi_free_GuestMemoryBlockResponseList)

struct GuestMemoryBlockInfo {
    uint64_t size;
};

void qapi_free_GuestMemoryBlockInfo(GuestMemoryBlockInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestMemoryBlockInfo, qapi_free_GuestMemoryBlockInfo)

struct GuestExecStatus {
    bool exited;
    bool has_exitcode;
    int64_t exitcode;
    bool has_signal;
    int64_t signal;
    bool has_out_data;
    char *out_data;
    bool has_err_data;
    char *err_data;
    bool has_out_truncated;
    bool out_truncated;
    bool has_err_truncated;
    bool err_truncated;
};

void qapi_free_GuestExecStatus(GuestExecStatus *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestExecStatus, qapi_free_GuestExecStatus)

struct q_obj_guest_exec_status_arg {
    int64_t pid;
};

struct GuestExec {
    int64_t pid;
};

void qapi_free_GuestExec(GuestExec *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestExec, qapi_free_GuestExec)

struct q_obj_guest_exec_arg {
    char *path;
    bool has_arg;
    strList *arg;
    bool has_env;
    strList *env;
    bool has_input_data;
    char *input_data;
    bool has_capture_output;
    bool capture_output;
};

struct GuestHostName {
    char *host_name;
};

void qapi_free_GuestHostName(GuestHostName *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestHostName, qapi_free_GuestHostName)

struct GuestUser {
    char *user;
    double login_time;
    bool has_domain;
    char *domain;
};

void qapi_free_GuestUser(GuestUser *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestUser, qapi_free_GuestUser)

struct GuestUserList {
    GuestUserList *next;
    GuestUser *value;
};

void qapi_free_GuestUserList(GuestUserList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestUserList, qapi_free_GuestUserList)

struct GuestTimezone {
    bool has_zone;
    char *zone;
    int64_t offset;
};

void qapi_free_GuestTimezone(GuestTimezone *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestTimezone, qapi_free_GuestTimezone)

struct GuestOSInfo {
    bool has_kernel_release;
    char *kernel_release;
    bool has_kernel_version;
    char *kernel_version;
    bool has_machine;
    char *machine;
    bool has_id;
    char *id;
    bool has_name;
    char *name;
    bool has_pretty_name;
    char *pretty_name;
    bool has_version;
    char *version;
    bool has_version_id;
    char *version_id;
    bool has_variant;
    char *variant;
    bool has_variant_id;
    char *variant_id;
};

void qapi_free_GuestOSInfo(GuestOSInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestOSInfo, qapi_free_GuestOSInfo)

struct GuestDeviceIdPCI {
    uint16_t vendor_id;
    uint16_t device_id;
};

void qapi_free_GuestDeviceIdPCI(GuestDeviceIdPCI *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestDeviceIdPCI, qapi_free_GuestDeviceIdPCI)

struct q_obj_GuestDeviceId_base {
    GuestDeviceType type;
};

struct GuestDeviceId {
    GuestDeviceType type;
    union { /* union tag is @type */
        GuestDeviceIdPCI pci;
    } u;
};

void qapi_free_GuestDeviceId(GuestDeviceId *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestDeviceId, qapi_free_GuestDeviceId)

struct GuestDeviceInfo {
    char *driver_name;
    bool has_driver_date;
    int64_t driver_date;
    bool has_driver_version;
    char *driver_version;
    bool has_id;
    GuestDeviceId *id;
};

void qapi_free_GuestDeviceInfo(GuestDeviceInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestDeviceInfo, qapi_free_GuestDeviceInfo)

struct GuestDeviceInfoList {
    GuestDeviceInfoList *next;
    GuestDeviceInfo *value;
};

void qapi_free_GuestDeviceInfoList(GuestDeviceInfoList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestDeviceInfoList, qapi_free_GuestDeviceInfoList)

#if defined(CONFIG_POSIX)
struct GuestAuthorizedKeys {
    strList *keys;
};
#endif /* defined(CONFIG_POSIX) */

#if defined(CONFIG_POSIX)
void qapi_free_GuestAuthorizedKeys(GuestAuthorizedKeys *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestAuthorizedKeys, qapi_free_GuestAuthorizedKeys)
#endif /* defined(CONFIG_POSIX) */

#if defined(CONFIG_POSIX)
struct q_obj_guest_ssh_get_authorized_keys_arg {
    char *username;
};
#endif /* defined(CONFIG_POSIX) */

#if defined(CONFIG_POSIX)
struct q_obj_guest_ssh_add_authorized_keys_arg {
    char *username;
    strList *keys;
    bool has_reset;
    bool reset;
};
#endif /* defined(CONFIG_POSIX) */

#if defined(CONFIG_POSIX)
struct q_obj_guest_ssh_remove_authorized_keys_arg {
    char *username;
    strList *keys;
};
#endif /* defined(CONFIG_POSIX) */

#endif /* QGA_QAPI_TYPES_H */
