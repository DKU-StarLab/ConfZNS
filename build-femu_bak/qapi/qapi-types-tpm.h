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

#ifndef QAPI_TYPES_TPM_H
#define QAPI_TYPES_TPM_H

#include "qapi/qapi-builtin-types.h"

typedef enum TpmModel {
    TPM_MODEL_TPM_TIS,
    TPM_MODEL_TPM_CRB,
    TPM_MODEL_TPM_SPAPR,
    TPM_MODEL__MAX,
} TpmModel;

#define TpmModel_str(val) \
    qapi_enum_lookup(&TpmModel_lookup, (val))

extern const QEnumLookup TpmModel_lookup;

typedef struct TpmModelList TpmModelList;

typedef enum TpmType {
    TPM_TYPE_PASSTHROUGH,
    TPM_TYPE_EMULATOR,
    TPM_TYPE__MAX,
} TpmType;

#define TpmType_str(val) \
    qapi_enum_lookup(&TpmType_lookup, (val))

extern const QEnumLookup TpmType_lookup;

typedef struct TpmTypeList TpmTypeList;

typedef struct TPMPassthroughOptions TPMPassthroughOptions;

typedef struct TPMEmulatorOptions TPMEmulatorOptions;

typedef struct q_obj_TPMPassthroughOptions_wrapper q_obj_TPMPassthroughOptions_wrapper;

typedef struct q_obj_TPMEmulatorOptions_wrapper q_obj_TPMEmulatorOptions_wrapper;

typedef enum TpmTypeOptionsKind {
    TPM_TYPE_OPTIONS_KIND_PASSTHROUGH,
    TPM_TYPE_OPTIONS_KIND_EMULATOR,
    TPM_TYPE_OPTIONS_KIND__MAX,
} TpmTypeOptionsKind;

#define TpmTypeOptionsKind_str(val) \
    qapi_enum_lookup(&TpmTypeOptionsKind_lookup, (val))

extern const QEnumLookup TpmTypeOptionsKind_lookup;

typedef struct TpmTypeOptions TpmTypeOptions;

typedef struct TPMInfo TPMInfo;

typedef struct TPMInfoList TPMInfoList;

struct TpmModelList {
    TpmModelList *next;
    TpmModel value;
};

void qapi_free_TpmModelList(TpmModelList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(TpmModelList, qapi_free_TpmModelList)

struct TpmTypeList {
    TpmTypeList *next;
    TpmType value;
};

void qapi_free_TpmTypeList(TpmTypeList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(TpmTypeList, qapi_free_TpmTypeList)

struct TPMPassthroughOptions {
    bool has_path;
    char *path;
    bool has_cancel_path;
    char *cancel_path;
};

void qapi_free_TPMPassthroughOptions(TPMPassthroughOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(TPMPassthroughOptions, qapi_free_TPMPassthroughOptions)

struct TPMEmulatorOptions {
    char *chardev;
};

void qapi_free_TPMEmulatorOptions(TPMEmulatorOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(TPMEmulatorOptions, qapi_free_TPMEmulatorOptions)

struct q_obj_TPMPassthroughOptions_wrapper {
    TPMPassthroughOptions *data;
};

struct q_obj_TPMEmulatorOptions_wrapper {
    TPMEmulatorOptions *data;
};

struct TpmTypeOptions {
    TpmTypeOptionsKind type;
    union { /* union tag is @type */
        q_obj_TPMPassthroughOptions_wrapper passthrough;
        q_obj_TPMEmulatorOptions_wrapper emulator;
    } u;
};

void qapi_free_TpmTypeOptions(TpmTypeOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(TpmTypeOptions, qapi_free_TpmTypeOptions)

struct TPMInfo {
    char *id;
    TpmModel model;
    TpmTypeOptions *options;
};

void qapi_free_TPMInfo(TPMInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(TPMInfo, qapi_free_TPMInfo)

struct TPMInfoList {
    TPMInfoList *next;
    TPMInfo *value;
};

void qapi_free_TPMInfoList(TPMInfoList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(TPMInfoList, qapi_free_TPMInfoList)

#endif /* QAPI_TYPES_TPM_H */
