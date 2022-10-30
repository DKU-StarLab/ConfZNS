/* AUTOMATICALLY GENERATED, DO NOT MODIFY */

/*
 * Schema-defined QAPI visitors
 *
 * Copyright IBM, Corp. 2011
 * Copyright (C) 2014-2018 Red Hat, Inc.
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1 or later.
 * See the COPYING.LIB file in the top-level directory.
 */

#include "qemu/osdep.h"
#include "qapi/error.h"
#include "qapi/qmp/qerror.h"
#include "qapi-visit-crypto.h"

bool visit_type_QCryptoTLSCredsEndpoint(Visitor *v, const char *name,
                 QCryptoTLSCredsEndpoint *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &QCryptoTLSCredsEndpoint_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_QCryptoSecretFormat(Visitor *v, const char *name,
                 QCryptoSecretFormat *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &QCryptoSecretFormat_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_QCryptoHashAlgorithm(Visitor *v, const char *name,
                 QCryptoHashAlgorithm *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &QCryptoHashAlgorithm_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_QCryptoCipherAlgorithm(Visitor *v, const char *name,
                 QCryptoCipherAlgorithm *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &QCryptoCipherAlgorithm_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_QCryptoCipherMode(Visitor *v, const char *name,
                 QCryptoCipherMode *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &QCryptoCipherMode_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_QCryptoIVGenAlgorithm(Visitor *v, const char *name,
                 QCryptoIVGenAlgorithm *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &QCryptoIVGenAlgorithm_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_QCryptoBlockFormat(Visitor *v, const char *name,
                 QCryptoBlockFormat *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &QCryptoBlockFormat_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_QCryptoBlockOptionsBase_members(Visitor *v, QCryptoBlockOptionsBase *obj, Error **errp)
{
    if (!visit_type_QCryptoBlockFormat(v, "format", &obj->format, errp)) {
        return false;
    }
    return true;
}

bool visit_type_QCryptoBlockOptionsBase(Visitor *v, const char *name,
                 QCryptoBlockOptionsBase **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(QCryptoBlockOptionsBase), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_QCryptoBlockOptionsBase_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_QCryptoBlockOptionsBase(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_QCryptoBlockOptionsQCow_members(Visitor *v, QCryptoBlockOptionsQCow *obj, Error **errp)
{
    if (visit_optional(v, "key-secret", &obj->has_key_secret)) {
        if (!visit_type_str(v, "key-secret", &obj->key_secret, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_QCryptoBlockOptionsQCow(Visitor *v, const char *name,
                 QCryptoBlockOptionsQCow **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(QCryptoBlockOptionsQCow), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_QCryptoBlockOptionsQCow_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_QCryptoBlockOptionsQCow(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_QCryptoBlockOptionsLUKS_members(Visitor *v, QCryptoBlockOptionsLUKS *obj, Error **errp)
{
    if (visit_optional(v, "key-secret", &obj->has_key_secret)) {
        if (!visit_type_str(v, "key-secret", &obj->key_secret, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_QCryptoBlockOptionsLUKS(Visitor *v, const char *name,
                 QCryptoBlockOptionsLUKS **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(QCryptoBlockOptionsLUKS), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_QCryptoBlockOptionsLUKS_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_QCryptoBlockOptionsLUKS(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_QCryptoBlockCreateOptionsLUKS_members(Visitor *v, QCryptoBlockCreateOptionsLUKS *obj, Error **errp)
{
    if (!visit_type_QCryptoBlockOptionsLUKS_members(v, (QCryptoBlockOptionsLUKS *)obj, errp)) {
        return false;
    }
    if (visit_optional(v, "cipher-alg", &obj->has_cipher_alg)) {
        if (!visit_type_QCryptoCipherAlgorithm(v, "cipher-alg", &obj->cipher_alg, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "cipher-mode", &obj->has_cipher_mode)) {
        if (!visit_type_QCryptoCipherMode(v, "cipher-mode", &obj->cipher_mode, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "ivgen-alg", &obj->has_ivgen_alg)) {
        if (!visit_type_QCryptoIVGenAlgorithm(v, "ivgen-alg", &obj->ivgen_alg, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "ivgen-hash-alg", &obj->has_ivgen_hash_alg)) {
        if (!visit_type_QCryptoHashAlgorithm(v, "ivgen-hash-alg", &obj->ivgen_hash_alg, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "hash-alg", &obj->has_hash_alg)) {
        if (!visit_type_QCryptoHashAlgorithm(v, "hash-alg", &obj->hash_alg, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "iter-time", &obj->has_iter_time)) {
        if (!visit_type_int(v, "iter-time", &obj->iter_time, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_QCryptoBlockCreateOptionsLUKS(Visitor *v, const char *name,
                 QCryptoBlockCreateOptionsLUKS **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(QCryptoBlockCreateOptionsLUKS), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_QCryptoBlockCreateOptionsLUKS_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_QCryptoBlockCreateOptionsLUKS(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_QCryptoBlockOpenOptions_members(Visitor *v, QCryptoBlockOpenOptions *obj, Error **errp)
{
    if (!visit_type_QCryptoBlockOptionsBase_members(v, (QCryptoBlockOptionsBase *)obj, errp)) {
        return false;
    }
    switch (obj->format) {
    case Q_CRYPTO_BLOCK_FORMAT_QCOW:
        return visit_type_QCryptoBlockOptionsQCow_members(v, &obj->u.qcow, errp);
    case Q_CRYPTO_BLOCK_FORMAT_LUKS:
        return visit_type_QCryptoBlockOptionsLUKS_members(v, &obj->u.luks, errp);
    default:
        abort();
    }
    return true;
}

bool visit_type_QCryptoBlockOpenOptions(Visitor *v, const char *name,
                 QCryptoBlockOpenOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(QCryptoBlockOpenOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_QCryptoBlockOpenOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_QCryptoBlockOpenOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_QCryptoBlockCreateOptions_members(Visitor *v, QCryptoBlockCreateOptions *obj, Error **errp)
{
    if (!visit_type_QCryptoBlockOptionsBase_members(v, (QCryptoBlockOptionsBase *)obj, errp)) {
        return false;
    }
    switch (obj->format) {
    case Q_CRYPTO_BLOCK_FORMAT_QCOW:
        return visit_type_QCryptoBlockOptionsQCow_members(v, &obj->u.qcow, errp);
    case Q_CRYPTO_BLOCK_FORMAT_LUKS:
        return visit_type_QCryptoBlockCreateOptionsLUKS_members(v, &obj->u.luks, errp);
    default:
        abort();
    }
    return true;
}

bool visit_type_QCryptoBlockCreateOptions(Visitor *v, const char *name,
                 QCryptoBlockCreateOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(QCryptoBlockCreateOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_QCryptoBlockCreateOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_QCryptoBlockCreateOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_QCryptoBlockInfoBase_members(Visitor *v, QCryptoBlockInfoBase *obj, Error **errp)
{
    if (!visit_type_QCryptoBlockFormat(v, "format", &obj->format, errp)) {
        return false;
    }
    return true;
}

bool visit_type_QCryptoBlockInfoBase(Visitor *v, const char *name,
                 QCryptoBlockInfoBase **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(QCryptoBlockInfoBase), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_QCryptoBlockInfoBase_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_QCryptoBlockInfoBase(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_QCryptoBlockInfoLUKSSlot_members(Visitor *v, QCryptoBlockInfoLUKSSlot *obj, Error **errp)
{
    if (!visit_type_bool(v, "active", &obj->active, errp)) {
        return false;
    }
    if (visit_optional(v, "iters", &obj->has_iters)) {
        if (!visit_type_int(v, "iters", &obj->iters, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "stripes", &obj->has_stripes)) {
        if (!visit_type_int(v, "stripes", &obj->stripes, errp)) {
            return false;
        }
    }
    if (!visit_type_int(v, "key-offset", &obj->key_offset, errp)) {
        return false;
    }
    return true;
}

bool visit_type_QCryptoBlockInfoLUKSSlot(Visitor *v, const char *name,
                 QCryptoBlockInfoLUKSSlot **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(QCryptoBlockInfoLUKSSlot), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_QCryptoBlockInfoLUKSSlot_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_QCryptoBlockInfoLUKSSlot(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_QCryptoBlockInfoLUKSSlotList(Visitor *v, const char *name,
                 QCryptoBlockInfoLUKSSlotList **obj, Error **errp)
{
    bool ok = false;
    QCryptoBlockInfoLUKSSlotList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (QCryptoBlockInfoLUKSSlotList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_QCryptoBlockInfoLUKSSlot(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_QCryptoBlockInfoLUKSSlotList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_QCryptoBlockInfoLUKS_members(Visitor *v, QCryptoBlockInfoLUKS *obj, Error **errp)
{
    if (!visit_type_QCryptoCipherAlgorithm(v, "cipher-alg", &obj->cipher_alg, errp)) {
        return false;
    }
    if (!visit_type_QCryptoCipherMode(v, "cipher-mode", &obj->cipher_mode, errp)) {
        return false;
    }
    if (!visit_type_QCryptoIVGenAlgorithm(v, "ivgen-alg", &obj->ivgen_alg, errp)) {
        return false;
    }
    if (visit_optional(v, "ivgen-hash-alg", &obj->has_ivgen_hash_alg)) {
        if (!visit_type_QCryptoHashAlgorithm(v, "ivgen-hash-alg", &obj->ivgen_hash_alg, errp)) {
            return false;
        }
    }
    if (!visit_type_QCryptoHashAlgorithm(v, "hash-alg", &obj->hash_alg, errp)) {
        return false;
    }
    if (!visit_type_int(v, "payload-offset", &obj->payload_offset, errp)) {
        return false;
    }
    if (!visit_type_int(v, "master-key-iters", &obj->master_key_iters, errp)) {
        return false;
    }
    if (!visit_type_str(v, "uuid", &obj->uuid, errp)) {
        return false;
    }
    if (!visit_type_QCryptoBlockInfoLUKSSlotList(v, "slots", &obj->slots, errp)) {
        return false;
    }
    return true;
}

bool visit_type_QCryptoBlockInfoLUKS(Visitor *v, const char *name,
                 QCryptoBlockInfoLUKS **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(QCryptoBlockInfoLUKS), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_QCryptoBlockInfoLUKS_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_QCryptoBlockInfoLUKS(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_QCryptoBlockInfo_members(Visitor *v, QCryptoBlockInfo *obj, Error **errp)
{
    if (!visit_type_QCryptoBlockInfoBase_members(v, (QCryptoBlockInfoBase *)obj, errp)) {
        return false;
    }
    switch (obj->format) {
    case Q_CRYPTO_BLOCK_FORMAT_LUKS:
        return visit_type_QCryptoBlockInfoLUKS_members(v, &obj->u.luks, errp);
    case Q_CRYPTO_BLOCK_FORMAT_QCOW:
        break;
    default:
        abort();
    }
    return true;
}

bool visit_type_QCryptoBlockInfo(Visitor *v, const char *name,
                 QCryptoBlockInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(QCryptoBlockInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_QCryptoBlockInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_QCryptoBlockInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_QCryptoBlockLUKSKeyslotState(Visitor *v, const char *name,
                 QCryptoBlockLUKSKeyslotState *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &QCryptoBlockLUKSKeyslotState_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_QCryptoBlockAmendOptionsLUKS_members(Visitor *v, QCryptoBlockAmendOptionsLUKS *obj, Error **errp)
{
    if (!visit_type_QCryptoBlockLUKSKeyslotState(v, "state", &obj->state, errp)) {
        return false;
    }
    if (visit_optional(v, "new-secret", &obj->has_new_secret)) {
        if (!visit_type_str(v, "new-secret", &obj->new_secret, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "old-secret", &obj->has_old_secret)) {
        if (!visit_type_str(v, "old-secret", &obj->old_secret, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "keyslot", &obj->has_keyslot)) {
        if (!visit_type_int(v, "keyslot", &obj->keyslot, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "iter-time", &obj->has_iter_time)) {
        if (!visit_type_int(v, "iter-time", &obj->iter_time, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "secret", &obj->has_secret)) {
        if (!visit_type_str(v, "secret", &obj->secret, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_QCryptoBlockAmendOptionsLUKS(Visitor *v, const char *name,
                 QCryptoBlockAmendOptionsLUKS **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(QCryptoBlockAmendOptionsLUKS), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_QCryptoBlockAmendOptionsLUKS_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_QCryptoBlockAmendOptionsLUKS(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_QCryptoBlockAmendOptions_members(Visitor *v, QCryptoBlockAmendOptions *obj, Error **errp)
{
    if (!visit_type_QCryptoBlockOptionsBase_members(v, (QCryptoBlockOptionsBase *)obj, errp)) {
        return false;
    }
    switch (obj->format) {
    case Q_CRYPTO_BLOCK_FORMAT_LUKS:
        return visit_type_QCryptoBlockAmendOptionsLUKS_members(v, &obj->u.luks, errp);
    case Q_CRYPTO_BLOCK_FORMAT_QCOW:
        break;
    default:
        abort();
    }
    return true;
}

bool visit_type_QCryptoBlockAmendOptions(Visitor *v, const char *name,
                 QCryptoBlockAmendOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(QCryptoBlockAmendOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_QCryptoBlockAmendOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_QCryptoBlockAmendOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_visit_crypto_c;
