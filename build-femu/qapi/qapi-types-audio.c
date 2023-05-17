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

#include "qemu/osdep.h"
#include "qapi/dealloc-visitor.h"
#include "qapi-types-audio.h"
#include "qapi-visit-audio.h"

void qapi_free_AudiodevPerDirectionOptions(AudiodevPerDirectionOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_AudiodevPerDirectionOptions(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_AudiodevGenericOptions(AudiodevGenericOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_AudiodevGenericOptions(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_AudiodevAlsaPerDirectionOptions(AudiodevAlsaPerDirectionOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_AudiodevAlsaPerDirectionOptions(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_AudiodevAlsaOptions(AudiodevAlsaOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_AudiodevAlsaOptions(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_AudiodevCoreaudioPerDirectionOptions(AudiodevCoreaudioPerDirectionOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_AudiodevCoreaudioPerDirectionOptions(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_AudiodevCoreaudioOptions(AudiodevCoreaudioOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_AudiodevCoreaudioOptions(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_AudiodevDsoundOptions(AudiodevDsoundOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_AudiodevDsoundOptions(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_AudiodevJackPerDirectionOptions(AudiodevJackPerDirectionOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_AudiodevJackPerDirectionOptions(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_AudiodevJackOptions(AudiodevJackOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_AudiodevJackOptions(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_AudiodevOssPerDirectionOptions(AudiodevOssPerDirectionOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_AudiodevOssPerDirectionOptions(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_AudiodevOssOptions(AudiodevOssOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_AudiodevOssOptions(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_AudiodevPaPerDirectionOptions(AudiodevPaPerDirectionOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_AudiodevPaPerDirectionOptions(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_AudiodevPaOptions(AudiodevPaOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_AudiodevPaOptions(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_AudiodevSdlPerDirectionOptions(AudiodevSdlPerDirectionOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_AudiodevSdlPerDirectionOptions(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_AudiodevSdlOptions(AudiodevSdlOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_AudiodevSdlOptions(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_AudiodevWavOptions(AudiodevWavOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_AudiodevWavOptions(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup AudioFormat_lookup = {
    .array = (const char *const[]) {
        [AUDIO_FORMAT_U8] = "u8",
        [AUDIO_FORMAT_S8] = "s8",
        [AUDIO_FORMAT_U16] = "u16",
        [AUDIO_FORMAT_S16] = "s16",
        [AUDIO_FORMAT_U32] = "u32",
        [AUDIO_FORMAT_S32] = "s32",
        [AUDIO_FORMAT_F32] = "f32",
    },
    .size = AUDIO_FORMAT__MAX
};

const QEnumLookup AudiodevDriver_lookup = {
    .array = (const char *const[]) {
        [AUDIODEV_DRIVER_NONE] = "none",
        [AUDIODEV_DRIVER_ALSA] = "alsa",
        [AUDIODEV_DRIVER_COREAUDIO] = "coreaudio",
        [AUDIODEV_DRIVER_DBUS] = "dbus",
        [AUDIODEV_DRIVER_DSOUND] = "dsound",
        [AUDIODEV_DRIVER_JACK] = "jack",
        [AUDIODEV_DRIVER_OSS] = "oss",
        [AUDIODEV_DRIVER_PA] = "pa",
        [AUDIODEV_DRIVER_SDL] = "sdl",
        [AUDIODEV_DRIVER_SPICE] = "spice",
        [AUDIODEV_DRIVER_WAV] = "wav",
    },
    .size = AUDIODEV_DRIVER__MAX
};

void qapi_free_Audiodev(Audiodev *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_Audiodev(v, NULL, &obj, NULL);
    visit_free(v);
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_types_audio_c;
