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

#ifndef QAPI_TYPES_BLOCK_H
#define QAPI_TYPES_BLOCK_H

#include "qapi/qapi-builtin-types.h"
#include "qapi-types-block-core.h"

typedef enum BiosAtaTranslation {
    BIOS_ATA_TRANSLATION_AUTO,
    BIOS_ATA_TRANSLATION_NONE,
    BIOS_ATA_TRANSLATION_LBA,
    BIOS_ATA_TRANSLATION_LARGE,
    BIOS_ATA_TRANSLATION_RECHS,
    BIOS_ATA_TRANSLATION__MAX,
} BiosAtaTranslation;

#define BiosAtaTranslation_str(val) \
    qapi_enum_lookup(&BiosAtaTranslation_lookup, (val))

extern const QEnumLookup BiosAtaTranslation_lookup;

typedef enum FloppyDriveType {
    FLOPPY_DRIVE_TYPE_144,
    FLOPPY_DRIVE_TYPE_288,
    FLOPPY_DRIVE_TYPE_120,
    FLOPPY_DRIVE_TYPE_NONE,
    FLOPPY_DRIVE_TYPE_AUTO,
    FLOPPY_DRIVE_TYPE__MAX,
} FloppyDriveType;

#define FloppyDriveType_str(val) \
    qapi_enum_lookup(&FloppyDriveType_lookup, (val))

extern const QEnumLookup FloppyDriveType_lookup;

typedef struct PRManagerInfo PRManagerInfo;

typedef struct PRManagerInfoList PRManagerInfoList;

typedef struct q_obj_eject_arg q_obj_eject_arg;

typedef struct q_obj_blockdev_open_tray_arg q_obj_blockdev_open_tray_arg;

typedef struct q_obj_blockdev_close_tray_arg q_obj_blockdev_close_tray_arg;

typedef struct q_obj_blockdev_remove_medium_arg q_obj_blockdev_remove_medium_arg;

typedef struct q_obj_blockdev_insert_medium_arg q_obj_blockdev_insert_medium_arg;

typedef enum BlockdevChangeReadOnlyMode {
    BLOCKDEV_CHANGE_READ_ONLY_MODE_RETAIN,
    BLOCKDEV_CHANGE_READ_ONLY_MODE_READ_ONLY,
    BLOCKDEV_CHANGE_READ_ONLY_MODE_READ_WRITE,
    BLOCKDEV_CHANGE_READ_ONLY_MODE__MAX,
} BlockdevChangeReadOnlyMode;

#define BlockdevChangeReadOnlyMode_str(val) \
    qapi_enum_lookup(&BlockdevChangeReadOnlyMode_lookup, (val))

extern const QEnumLookup BlockdevChangeReadOnlyMode_lookup;

typedef struct q_obj_blockdev_change_medium_arg q_obj_blockdev_change_medium_arg;

typedef struct q_obj_DEVICE_TRAY_MOVED_arg q_obj_DEVICE_TRAY_MOVED_arg;

typedef struct q_obj_PR_MANAGER_STATUS_CHANGED_arg q_obj_PR_MANAGER_STATUS_CHANGED_arg;

typedef struct q_obj_block_latency_histogram_set_arg q_obj_block_latency_histogram_set_arg;

struct PRManagerInfo {
    char *id;
    bool connected;
};

void qapi_free_PRManagerInfo(PRManagerInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(PRManagerInfo, qapi_free_PRManagerInfo)

struct PRManagerInfoList {
    PRManagerInfoList *next;
    PRManagerInfo *value;
};

void qapi_free_PRManagerInfoList(PRManagerInfoList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(PRManagerInfoList, qapi_free_PRManagerInfoList)

struct q_obj_eject_arg {
    bool has_device;
    char *device;
    bool has_id;
    char *id;
    bool has_force;
    bool force;
};

struct q_obj_blockdev_open_tray_arg {
    bool has_device;
    char *device;
    bool has_id;
    char *id;
    bool has_force;
    bool force;
};

struct q_obj_blockdev_close_tray_arg {
    bool has_device;
    char *device;
    bool has_id;
    char *id;
};

struct q_obj_blockdev_remove_medium_arg {
    char *id;
};

struct q_obj_blockdev_insert_medium_arg {
    char *id;
    char *node_name;
};

struct q_obj_blockdev_change_medium_arg {
    bool has_device;
    char *device;
    bool has_id;
    char *id;
    char *filename;
    bool has_format;
    char *format;
    bool has_read_only_mode;
    BlockdevChangeReadOnlyMode read_only_mode;
};

struct q_obj_DEVICE_TRAY_MOVED_arg {
    char *device;
    char *id;
    bool tray_open;
};

struct q_obj_PR_MANAGER_STATUS_CHANGED_arg {
    char *id;
    bool connected;
};

struct q_obj_block_latency_histogram_set_arg {
    char *id;
    bool has_boundaries;
    uint64List *boundaries;
    bool has_boundaries_read;
    uint64List *boundaries_read;
    bool has_boundaries_write;
    uint64List *boundaries_write;
    bool has_boundaries_flush;
    uint64List *boundaries_flush;
};

#endif /* QAPI_TYPES_BLOCK_H */
