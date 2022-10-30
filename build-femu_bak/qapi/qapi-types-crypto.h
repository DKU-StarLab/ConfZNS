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

#ifndef QAPI_TYPES_CRYPTO_H
#define QAPI_TYPES_CRYPTO_H

#include "qapi/qapi-builtin-types.h"

typedef enum QCryptoTLSCredsEndpoint {
    QCRYPTO_TLS_CREDS_ENDPOINT_CLIENT,
    QCRYPTO_TLS_CREDS_ENDPOINT_SERVER,
    QCRYPTO_TLS_CREDS_ENDPOINT__MAX,
} QCryptoTLSCredsEndpoint;

#define QCryptoTLSCredsEndpoint_str(val) \
    qapi_enum_lookup(&QCryptoTLSCredsEndpoint_lookup, (val))

extern const QEnumLookup QCryptoTLSCredsEndpoint_lookup;

typedef enum QCryptoSecretFormat {
    QCRYPTO_SECRET_FORMAT_RAW,
    QCRYPTO_SECRET_FORMAT_BASE64,
    QCRYPTO_SECRET_FORMAT__MAX,
} QCryptoSecretFormat;

#define QCryptoSecretFormat_str(val) \
    qapi_enum_lookup(&QCryptoSecretFormat_lookup, (val))

extern const QEnumLookup QCryptoSecretFormat_lookup;

typedef enum QCryptoHashAlgorithm {
    QCRYPTO_HASH_ALG_MD5,
    QCRYPTO_HASH_ALG_SHA1,
    QCRYPTO_HASH_ALG_SHA224,
    QCRYPTO_HASH_ALG_SHA256,
    QCRYPTO_HASH_ALG_SHA384,
    QCRYPTO_HASH_ALG_SHA512,
    QCRYPTO_HASH_ALG_RIPEMD160,
    QCRYPTO_HASH_ALG__MAX,
} QCryptoHashAlgorithm;

#define QCryptoHashAlgorithm_str(val) \
    qapi_enum_lookup(&QCryptoHashAlgorithm_lookup, (val))

extern const QEnumLookup QCryptoHashAlgorithm_lookup;

typedef enum QCryptoCipherAlgorithm {
    QCRYPTO_CIPHER_ALG_AES_128,
    QCRYPTO_CIPHER_ALG_AES_192,
    QCRYPTO_CIPHER_ALG_AES_256,
    QCRYPTO_CIPHER_ALG_DES_RFB,
    QCRYPTO_CIPHER_ALG_3DES,
    QCRYPTO_CIPHER_ALG_CAST5_128,
    QCRYPTO_CIPHER_ALG_SERPENT_128,
    QCRYPTO_CIPHER_ALG_SERPENT_192,
    QCRYPTO_CIPHER_ALG_SERPENT_256,
    QCRYPTO_CIPHER_ALG_TWOFISH_128,
    QCRYPTO_CIPHER_ALG_TWOFISH_192,
    QCRYPTO_CIPHER_ALG_TWOFISH_256,
    QCRYPTO_CIPHER_ALG__MAX,
} QCryptoCipherAlgorithm;

#define QCryptoCipherAlgorithm_str(val) \
    qapi_enum_lookup(&QCryptoCipherAlgorithm_lookup, (val))

extern const QEnumLookup QCryptoCipherAlgorithm_lookup;

typedef enum QCryptoCipherMode {
    QCRYPTO_CIPHER_MODE_ECB,
    QCRYPTO_CIPHER_MODE_CBC,
    QCRYPTO_CIPHER_MODE_XTS,
    QCRYPTO_CIPHER_MODE_CTR,
    QCRYPTO_CIPHER_MODE__MAX,
} QCryptoCipherMode;

#define QCryptoCipherMode_str(val) \
    qapi_enum_lookup(&QCryptoCipherMode_lookup, (val))

extern const QEnumLookup QCryptoCipherMode_lookup;

typedef enum QCryptoIVGenAlgorithm {
    QCRYPTO_IVGEN_ALG_PLAIN,
    QCRYPTO_IVGEN_ALG_PLAIN64,
    QCRYPTO_IVGEN_ALG_ESSIV,
    QCRYPTO_IVGEN_ALG__MAX,
} QCryptoIVGenAlgorithm;

#define QCryptoIVGenAlgorithm_str(val) \
    qapi_enum_lookup(&QCryptoIVGenAlgorithm_lookup, (val))

extern const QEnumLookup QCryptoIVGenAlgorithm_lookup;

typedef enum QCryptoBlockFormat {
    Q_CRYPTO_BLOCK_FORMAT_QCOW,
    Q_CRYPTO_BLOCK_FORMAT_LUKS,
    Q_CRYPTO_BLOCK_FORMAT__MAX,
} QCryptoBlockFormat;

#define QCryptoBlockFormat_str(val) \
    qapi_enum_lookup(&QCryptoBlockFormat_lookup, (val))

extern const QEnumLookup QCryptoBlockFormat_lookup;

typedef struct QCryptoBlockOptionsBase QCryptoBlockOptionsBase;

typedef struct QCryptoBlockOptionsQCow QCryptoBlockOptionsQCow;

typedef struct QCryptoBlockOptionsLUKS QCryptoBlockOptionsLUKS;

typedef struct QCryptoBlockCreateOptionsLUKS QCryptoBlockCreateOptionsLUKS;

typedef struct QCryptoBlockOpenOptions QCryptoBlockOpenOptions;

typedef struct QCryptoBlockCreateOptions QCryptoBlockCreateOptions;

typedef struct QCryptoBlockInfoBase QCryptoBlockInfoBase;

typedef struct QCryptoBlockInfoLUKSSlot QCryptoBlockInfoLUKSSlot;

typedef struct QCryptoBlockInfoLUKSSlotList QCryptoBlockInfoLUKSSlotList;

typedef struct QCryptoBlockInfoLUKS QCryptoBlockInfoLUKS;

typedef struct QCryptoBlockInfo QCryptoBlockInfo;

typedef enum QCryptoBlockLUKSKeyslotState {
    Q_CRYPTO_BLOCKLUKS_KEYSLOT_STATE_ACTIVE,
    Q_CRYPTO_BLOCKLUKS_KEYSLOT_STATE_INACTIVE,
    Q_CRYPTO_BLOCKLUKS_KEYSLOT_STATE__MAX,
} QCryptoBlockLUKSKeyslotState;

#define QCryptoBlockLUKSKeyslotState_str(val) \
    qapi_enum_lookup(&QCryptoBlockLUKSKeyslotState_lookup, (val))

extern const QEnumLookup QCryptoBlockLUKSKeyslotState_lookup;

typedef struct QCryptoBlockAmendOptionsLUKS QCryptoBlockAmendOptionsLUKS;

typedef struct QCryptoBlockAmendOptions QCryptoBlockAmendOptions;

struct QCryptoBlockOptionsBase {
    QCryptoBlockFormat format;
};

void qapi_free_QCryptoBlockOptionsBase(QCryptoBlockOptionsBase *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(QCryptoBlockOptionsBase, qapi_free_QCryptoBlockOptionsBase)

struct QCryptoBlockOptionsQCow {
    bool has_key_secret;
    char *key_secret;
};

void qapi_free_QCryptoBlockOptionsQCow(QCryptoBlockOptionsQCow *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(QCryptoBlockOptionsQCow, qapi_free_QCryptoBlockOptionsQCow)

struct QCryptoBlockOptionsLUKS {
    bool has_key_secret;
    char *key_secret;
};

void qapi_free_QCryptoBlockOptionsLUKS(QCryptoBlockOptionsLUKS *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(QCryptoBlockOptionsLUKS, qapi_free_QCryptoBlockOptionsLUKS)

struct QCryptoBlockCreateOptionsLUKS {
    /* Members inherited from QCryptoBlockOptionsLUKS: */
    bool has_key_secret;
    char *key_secret;
    /* Own members: */
    bool has_cipher_alg;
    QCryptoCipherAlgorithm cipher_alg;
    bool has_cipher_mode;
    QCryptoCipherMode cipher_mode;
    bool has_ivgen_alg;
    QCryptoIVGenAlgorithm ivgen_alg;
    bool has_ivgen_hash_alg;
    QCryptoHashAlgorithm ivgen_hash_alg;
    bool has_hash_alg;
    QCryptoHashAlgorithm hash_alg;
    bool has_iter_time;
    int64_t iter_time;
};

static inline QCryptoBlockOptionsLUKS *qapi_QCryptoBlockCreateOptionsLUKS_base(const QCryptoBlockCreateOptionsLUKS *obj)
{
    return (QCryptoBlockOptionsLUKS *)obj;
}

void qapi_free_QCryptoBlockCreateOptionsLUKS(QCryptoBlockCreateOptionsLUKS *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(QCryptoBlockCreateOptionsLUKS, qapi_free_QCryptoBlockCreateOptionsLUKS)

struct QCryptoBlockOpenOptions {
    /* Members inherited from QCryptoBlockOptionsBase: */
    QCryptoBlockFormat format;
    /* Own members: */
    union { /* union tag is @format */
        QCryptoBlockOptionsQCow qcow;
        QCryptoBlockOptionsLUKS luks;
    } u;
};

static inline QCryptoBlockOptionsBase *qapi_QCryptoBlockOpenOptions_base(const QCryptoBlockOpenOptions *obj)
{
    return (QCryptoBlockOptionsBase *)obj;
}

void qapi_free_QCryptoBlockOpenOptions(QCryptoBlockOpenOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(QCryptoBlockOpenOptions, qapi_free_QCryptoBlockOpenOptions)

struct QCryptoBlockCreateOptions {
    /* Members inherited from QCryptoBlockOptionsBase: */
    QCryptoBlockFormat format;
    /* Own members: */
    union { /* union tag is @format */
        QCryptoBlockOptionsQCow qcow;
        QCryptoBlockCreateOptionsLUKS luks;
    } u;
};

static inline QCryptoBlockOptionsBase *qapi_QCryptoBlockCreateOptions_base(const QCryptoBlockCreateOptions *obj)
{
    return (QCryptoBlockOptionsBase *)obj;
}

void qapi_free_QCryptoBlockCreateOptions(QCryptoBlockCreateOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(QCryptoBlockCreateOptions, qapi_free_QCryptoBlockCreateOptions)

struct QCryptoBlockInfoBase {
    QCryptoBlockFormat format;
};

void qapi_free_QCryptoBlockInfoBase(QCryptoBlockInfoBase *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(QCryptoBlockInfoBase, qapi_free_QCryptoBlockInfoBase)

struct QCryptoBlockInfoLUKSSlot {
    bool active;
    bool has_iters;
    int64_t iters;
    bool has_stripes;
    int64_t stripes;
    int64_t key_offset;
};

void qapi_free_QCryptoBlockInfoLUKSSlot(QCryptoBlockInfoLUKSSlot *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(QCryptoBlockInfoLUKSSlot, qapi_free_QCryptoBlockInfoLUKSSlot)

struct QCryptoBlockInfoLUKSSlotList {
    QCryptoBlockInfoLUKSSlotList *next;
    QCryptoBlockInfoLUKSSlot *value;
};

void qapi_free_QCryptoBlockInfoLUKSSlotList(QCryptoBlockInfoLUKSSlotList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(QCryptoBlockInfoLUKSSlotList, qapi_free_QCryptoBlockInfoLUKSSlotList)

struct QCryptoBlockInfoLUKS {
    QCryptoCipherAlgorithm cipher_alg;
    QCryptoCipherMode cipher_mode;
    QCryptoIVGenAlgorithm ivgen_alg;
    bool has_ivgen_hash_alg;
    QCryptoHashAlgorithm ivgen_hash_alg;
    QCryptoHashAlgorithm hash_alg;
    int64_t payload_offset;
    int64_t master_key_iters;
    char *uuid;
    QCryptoBlockInfoLUKSSlotList *slots;
};

void qapi_free_QCryptoBlockInfoLUKS(QCryptoBlockInfoLUKS *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(QCryptoBlockInfoLUKS, qapi_free_QCryptoBlockInfoLUKS)

struct QCryptoBlockInfo {
    /* Members inherited from QCryptoBlockInfoBase: */
    QCryptoBlockFormat format;
    /* Own members: */
    union { /* union tag is @format */
        QCryptoBlockInfoLUKS luks;
    } u;
};

static inline QCryptoBlockInfoBase *qapi_QCryptoBlockInfo_base(const QCryptoBlockInfo *obj)
{
    return (QCryptoBlockInfoBase *)obj;
}

void qapi_free_QCryptoBlockInfo(QCryptoBlockInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(QCryptoBlockInfo, qapi_free_QCryptoBlockInfo)

struct QCryptoBlockAmendOptionsLUKS {
    QCryptoBlockLUKSKeyslotState state;
    bool has_new_secret;
    char *new_secret;
    bool has_old_secret;
    char *old_secret;
    bool has_keyslot;
    int64_t keyslot;
    bool has_iter_time;
    int64_t iter_time;
    bool has_secret;
    char *secret;
};

void qapi_free_QCryptoBlockAmendOptionsLUKS(QCryptoBlockAmendOptionsLUKS *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(QCryptoBlockAmendOptionsLUKS, qapi_free_QCryptoBlockAmendOptionsLUKS)

struct QCryptoBlockAmendOptions {
    /* Members inherited from QCryptoBlockOptionsBase: */
    QCryptoBlockFormat format;
    /* Own members: */
    union { /* union tag is @format */
        QCryptoBlockAmendOptionsLUKS luks;
    } u;
};

static inline QCryptoBlockOptionsBase *qapi_QCryptoBlockAmendOptions_base(const QCryptoBlockAmendOptions *obj)
{
    return (QCryptoBlockOptionsBase *)obj;
}

void qapi_free_QCryptoBlockAmendOptions(QCryptoBlockAmendOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(QCryptoBlockAmendOptions, qapi_free_QCryptoBlockAmendOptions)

#endif /* QAPI_TYPES_CRYPTO_H */
