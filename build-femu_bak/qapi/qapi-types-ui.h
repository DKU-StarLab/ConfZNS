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

#ifndef QAPI_TYPES_UI_H
#define QAPI_TYPES_UI_H

#include "qapi/qapi-builtin-types.h"
#include "qapi-types-sockets.h"

typedef struct q_obj_set_password_arg q_obj_set_password_arg;

typedef struct q_obj_expire_password_arg q_obj_expire_password_arg;

typedef struct q_obj_screendump_arg q_obj_screendump_arg;

#if defined(CONFIG_SPICE)
typedef struct SpiceBasicInfo SpiceBasicInfo;
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
typedef struct SpiceServerInfo SpiceServerInfo;
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
typedef struct SpiceChannel SpiceChannel;
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
typedef enum SpiceQueryMouseMode {
    SPICE_QUERY_MOUSE_MODE_CLIENT,
    SPICE_QUERY_MOUSE_MODE_SERVER,
    SPICE_QUERY_MOUSE_MODE_UNKNOWN,
    SPICE_QUERY_MOUSE_MODE__MAX,
} SpiceQueryMouseMode;

#define SpiceQueryMouseMode_str(val) \
    qapi_enum_lookup(&SpiceQueryMouseMode_lookup, (val))

extern const QEnumLookup SpiceQueryMouseMode_lookup;
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
typedef struct SpiceChannelList SpiceChannelList;
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
typedef struct SpiceInfo SpiceInfo;
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
typedef struct q_obj_SPICE_CONNECTED_arg q_obj_SPICE_CONNECTED_arg;
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
typedef struct q_obj_SPICE_INITIALIZED_arg q_obj_SPICE_INITIALIZED_arg;
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
typedef struct q_obj_SPICE_DISCONNECTED_arg q_obj_SPICE_DISCONNECTED_arg;
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_VNC)
typedef struct VncBasicInfo VncBasicInfo;
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
typedef struct VncServerInfo VncServerInfo;
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
typedef struct VncClientInfo VncClientInfo;
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
typedef struct VncClientInfoList VncClientInfoList;
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
typedef struct VncInfo VncInfo;
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
typedef enum VncPrimaryAuth {
    VNC_PRIMARY_AUTH_NONE,
    VNC_PRIMARY_AUTH_VNC,
    VNC_PRIMARY_AUTH_RA2,
    VNC_PRIMARY_AUTH_RA2NE,
    VNC_PRIMARY_AUTH_TIGHT,
    VNC_PRIMARY_AUTH_ULTRA,
    VNC_PRIMARY_AUTH_TLS,
    VNC_PRIMARY_AUTH_VENCRYPT,
    VNC_PRIMARY_AUTH_SASL,
    VNC_PRIMARY_AUTH__MAX,
} VncPrimaryAuth;

#define VncPrimaryAuth_str(val) \
    qapi_enum_lookup(&VncPrimaryAuth_lookup, (val))

extern const QEnumLookup VncPrimaryAuth_lookup;
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
typedef enum VncVencryptSubAuth {
    VNC_VENCRYPT_SUB_AUTH_PLAIN,
    VNC_VENCRYPT_SUB_AUTH_TLS_NONE,
    VNC_VENCRYPT_SUB_AUTH_X509_NONE,
    VNC_VENCRYPT_SUB_AUTH_TLS_VNC,
    VNC_VENCRYPT_SUB_AUTH_X509_VNC,
    VNC_VENCRYPT_SUB_AUTH_TLS_PLAIN,
    VNC_VENCRYPT_SUB_AUTH_X509_PLAIN,
    VNC_VENCRYPT_SUB_AUTH_TLS_SASL,
    VNC_VENCRYPT_SUB_AUTH_X509_SASL,
    VNC_VENCRYPT_SUB_AUTH__MAX,
} VncVencryptSubAuth;

#define VncVencryptSubAuth_str(val) \
    qapi_enum_lookup(&VncVencryptSubAuth_lookup, (val))

extern const QEnumLookup VncVencryptSubAuth_lookup;
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
typedef struct VncServerInfo2 VncServerInfo2;
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
typedef struct VncServerInfo2List VncServerInfo2List;
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
typedef struct VncInfo2 VncInfo2;
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
typedef struct VncInfo2List VncInfo2List;
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
typedef struct q_obj_change_vnc_password_arg q_obj_change_vnc_password_arg;
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
typedef struct q_obj_VNC_CONNECTED_arg q_obj_VNC_CONNECTED_arg;
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
typedef struct q_obj_VNC_INITIALIZED_arg q_obj_VNC_INITIALIZED_arg;
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
typedef struct q_obj_VNC_DISCONNECTED_arg q_obj_VNC_DISCONNECTED_arg;
#endif /* defined(CONFIG_VNC) */

typedef struct MouseInfo MouseInfo;

typedef struct MouseInfoList MouseInfoList;

typedef enum QKeyCode {
    Q_KEY_CODE_UNMAPPED,
    Q_KEY_CODE_SHIFT,
    Q_KEY_CODE_SHIFT_R,
    Q_KEY_CODE_ALT,
    Q_KEY_CODE_ALT_R,
    Q_KEY_CODE_CTRL,
    Q_KEY_CODE_CTRL_R,
    Q_KEY_CODE_MENU,
    Q_KEY_CODE_ESC,
    Q_KEY_CODE_1,
    Q_KEY_CODE_2,
    Q_KEY_CODE_3,
    Q_KEY_CODE_4,
    Q_KEY_CODE_5,
    Q_KEY_CODE_6,
    Q_KEY_CODE_7,
    Q_KEY_CODE_8,
    Q_KEY_CODE_9,
    Q_KEY_CODE_0,
    Q_KEY_CODE_MINUS,
    Q_KEY_CODE_EQUAL,
    Q_KEY_CODE_BACKSPACE,
    Q_KEY_CODE_TAB,
    Q_KEY_CODE_Q,
    Q_KEY_CODE_W,
    Q_KEY_CODE_E,
    Q_KEY_CODE_R,
    Q_KEY_CODE_T,
    Q_KEY_CODE_Y,
    Q_KEY_CODE_U,
    Q_KEY_CODE_I,
    Q_KEY_CODE_O,
    Q_KEY_CODE_P,
    Q_KEY_CODE_BRACKET_LEFT,
    Q_KEY_CODE_BRACKET_RIGHT,
    Q_KEY_CODE_RET,
    Q_KEY_CODE_A,
    Q_KEY_CODE_S,
    Q_KEY_CODE_D,
    Q_KEY_CODE_F,
    Q_KEY_CODE_G,
    Q_KEY_CODE_H,
    Q_KEY_CODE_J,
    Q_KEY_CODE_K,
    Q_KEY_CODE_L,
    Q_KEY_CODE_SEMICOLON,
    Q_KEY_CODE_APOSTROPHE,
    Q_KEY_CODE_GRAVE_ACCENT,
    Q_KEY_CODE_BACKSLASH,
    Q_KEY_CODE_Z,
    Q_KEY_CODE_X,
    Q_KEY_CODE_C,
    Q_KEY_CODE_V,
    Q_KEY_CODE_B,
    Q_KEY_CODE_N,
    Q_KEY_CODE_M,
    Q_KEY_CODE_COMMA,
    Q_KEY_CODE_DOT,
    Q_KEY_CODE_SLASH,
    Q_KEY_CODE_ASTERISK,
    Q_KEY_CODE_SPC,
    Q_KEY_CODE_CAPS_LOCK,
    Q_KEY_CODE_F1,
    Q_KEY_CODE_F2,
    Q_KEY_CODE_F3,
    Q_KEY_CODE_F4,
    Q_KEY_CODE_F5,
    Q_KEY_CODE_F6,
    Q_KEY_CODE_F7,
    Q_KEY_CODE_F8,
    Q_KEY_CODE_F9,
    Q_KEY_CODE_F10,
    Q_KEY_CODE_NUM_LOCK,
    Q_KEY_CODE_SCROLL_LOCK,
    Q_KEY_CODE_KP_DIVIDE,
    Q_KEY_CODE_KP_MULTIPLY,
    Q_KEY_CODE_KP_SUBTRACT,
    Q_KEY_CODE_KP_ADD,
    Q_KEY_CODE_KP_ENTER,
    Q_KEY_CODE_KP_DECIMAL,
    Q_KEY_CODE_SYSRQ,
    Q_KEY_CODE_KP_0,
    Q_KEY_CODE_KP_1,
    Q_KEY_CODE_KP_2,
    Q_KEY_CODE_KP_3,
    Q_KEY_CODE_KP_4,
    Q_KEY_CODE_KP_5,
    Q_KEY_CODE_KP_6,
    Q_KEY_CODE_KP_7,
    Q_KEY_CODE_KP_8,
    Q_KEY_CODE_KP_9,
    Q_KEY_CODE_LESS,
    Q_KEY_CODE_F11,
    Q_KEY_CODE_F12,
    Q_KEY_CODE_PRINT,
    Q_KEY_CODE_HOME,
    Q_KEY_CODE_PGUP,
    Q_KEY_CODE_PGDN,
    Q_KEY_CODE_END,
    Q_KEY_CODE_LEFT,
    Q_KEY_CODE_UP,
    Q_KEY_CODE_DOWN,
    Q_KEY_CODE_RIGHT,
    Q_KEY_CODE_INSERT,
    Q_KEY_CODE_DELETE,
    Q_KEY_CODE_STOP,
    Q_KEY_CODE_AGAIN,
    Q_KEY_CODE_PROPS,
    Q_KEY_CODE_UNDO,
    Q_KEY_CODE_FRONT,
    Q_KEY_CODE_COPY,
    Q_KEY_CODE_OPEN,
    Q_KEY_CODE_PASTE,
    Q_KEY_CODE_FIND,
    Q_KEY_CODE_CUT,
    Q_KEY_CODE_LF,
    Q_KEY_CODE_HELP,
    Q_KEY_CODE_META_L,
    Q_KEY_CODE_META_R,
    Q_KEY_CODE_COMPOSE,
    Q_KEY_CODE_PAUSE,
    Q_KEY_CODE_RO,
    Q_KEY_CODE_HIRAGANA,
    Q_KEY_CODE_HENKAN,
    Q_KEY_CODE_YEN,
    Q_KEY_CODE_MUHENKAN,
    Q_KEY_CODE_KATAKANAHIRAGANA,
    Q_KEY_CODE_KP_COMMA,
    Q_KEY_CODE_KP_EQUALS,
    Q_KEY_CODE_POWER,
    Q_KEY_CODE_SLEEP,
    Q_KEY_CODE_WAKE,
    Q_KEY_CODE_AUDIONEXT,
    Q_KEY_CODE_AUDIOPREV,
    Q_KEY_CODE_AUDIOSTOP,
    Q_KEY_CODE_AUDIOPLAY,
    Q_KEY_CODE_AUDIOMUTE,
    Q_KEY_CODE_VOLUMEUP,
    Q_KEY_CODE_VOLUMEDOWN,
    Q_KEY_CODE_MEDIASELECT,
    Q_KEY_CODE_MAIL,
    Q_KEY_CODE_CALCULATOR,
    Q_KEY_CODE_COMPUTER,
    Q_KEY_CODE_AC_HOME,
    Q_KEY_CODE_AC_BACK,
    Q_KEY_CODE_AC_FORWARD,
    Q_KEY_CODE_AC_REFRESH,
    Q_KEY_CODE_AC_BOOKMARKS,
    Q_KEY_CODE__MAX,
} QKeyCode;

#define QKeyCode_str(val) \
    qapi_enum_lookup(&QKeyCode_lookup, (val))

extern const QEnumLookup QKeyCode_lookup;

typedef struct q_obj_int_wrapper q_obj_int_wrapper;

typedef struct q_obj_QKeyCode_wrapper q_obj_QKeyCode_wrapper;

typedef enum KeyValueKind {
    KEY_VALUE_KIND_NUMBER,
    KEY_VALUE_KIND_QCODE,
    KEY_VALUE_KIND__MAX,
} KeyValueKind;

#define KeyValueKind_str(val) \
    qapi_enum_lookup(&KeyValueKind_lookup, (val))

extern const QEnumLookup KeyValueKind_lookup;

typedef struct KeyValue KeyValue;

typedef struct KeyValueList KeyValueList;

typedef struct q_obj_send_key_arg q_obj_send_key_arg;

typedef enum InputButton {
    INPUT_BUTTON_LEFT,
    INPUT_BUTTON_MIDDLE,
    INPUT_BUTTON_RIGHT,
    INPUT_BUTTON_WHEEL_UP,
    INPUT_BUTTON_WHEEL_DOWN,
    INPUT_BUTTON_SIDE,
    INPUT_BUTTON_EXTRA,
    INPUT_BUTTON__MAX,
} InputButton;

#define InputButton_str(val) \
    qapi_enum_lookup(&InputButton_lookup, (val))

extern const QEnumLookup InputButton_lookup;

typedef enum InputAxis {
    INPUT_AXIS_X,
    INPUT_AXIS_Y,
    INPUT_AXIS__MAX,
} InputAxis;

#define InputAxis_str(val) \
    qapi_enum_lookup(&InputAxis_lookup, (val))

extern const QEnumLookup InputAxis_lookup;

typedef struct InputKeyEvent InputKeyEvent;

typedef struct InputBtnEvent InputBtnEvent;

typedef struct InputMoveEvent InputMoveEvent;

typedef struct q_obj_InputKeyEvent_wrapper q_obj_InputKeyEvent_wrapper;

typedef struct q_obj_InputBtnEvent_wrapper q_obj_InputBtnEvent_wrapper;

typedef struct q_obj_InputMoveEvent_wrapper q_obj_InputMoveEvent_wrapper;

typedef enum InputEventKind {
    INPUT_EVENT_KIND_KEY,
    INPUT_EVENT_KIND_BTN,
    INPUT_EVENT_KIND_REL,
    INPUT_EVENT_KIND_ABS,
    INPUT_EVENT_KIND__MAX,
} InputEventKind;

#define InputEventKind_str(val) \
    qapi_enum_lookup(&InputEventKind_lookup, (val))

extern const QEnumLookup InputEventKind_lookup;

typedef struct InputEvent InputEvent;

typedef struct InputEventList InputEventList;

typedef struct q_obj_input_send_event_arg q_obj_input_send_event_arg;

typedef enum GrabToggleKeys {
    GRAB_TOGGLE_KEYS_CTRL_CTRL,
    GRAB_TOGGLE_KEYS_ALT_ALT,
    GRAB_TOGGLE_KEYS_SHIFT_SHIFT,
    GRAB_TOGGLE_KEYS_META_META,
    GRAB_TOGGLE_KEYS_SCROLLLOCK,
    GRAB_TOGGLE_KEYS_CTRL_SCROLLLOCK,
    GRAB_TOGGLE_KEYS__MAX,
} GrabToggleKeys;

#define GrabToggleKeys_str(val) \
    qapi_enum_lookup(&GrabToggleKeys_lookup, (val))

extern const QEnumLookup GrabToggleKeys_lookup;

typedef struct DisplayGTK DisplayGTK;

typedef struct DisplayEGLHeadless DisplayEGLHeadless;

typedef enum DisplayGLMode {
    DISPLAYGL_MODE_OFF,
    DISPLAYGL_MODE_ON,
    DISPLAYGL_MODE_CORE,
    DISPLAYGL_MODE_ES,
    DISPLAYGL_MODE__MAX,
} DisplayGLMode;

#define DisplayGLMode_str(val) \
    qapi_enum_lookup(&DisplayGLMode_lookup, (val))

extern const QEnumLookup DisplayGLMode_lookup;

typedef struct DisplayCurses DisplayCurses;

typedef enum DisplayType {
    DISPLAY_TYPE_DEFAULT,
    DISPLAY_TYPE_NONE,
    DISPLAY_TYPE_GTK,
    DISPLAY_TYPE_SDL,
    DISPLAY_TYPE_EGL_HEADLESS,
    DISPLAY_TYPE_CURSES,
    DISPLAY_TYPE_COCOA,
    DISPLAY_TYPE_SPICE_APP,
    DISPLAY_TYPE__MAX,
} DisplayType;

#define DisplayType_str(val) \
    qapi_enum_lookup(&DisplayType_lookup, (val))

extern const QEnumLookup DisplayType_lookup;

typedef struct q_obj_DisplayOptions_base q_obj_DisplayOptions_base;

typedef struct DisplayOptions DisplayOptions;

struct q_obj_set_password_arg {
    char *protocol;
    char *password;
    bool has_connected;
    char *connected;
};

struct q_obj_expire_password_arg {
    char *protocol;
    char *time;
};

struct q_obj_screendump_arg {
    char *filename;
    bool has_device;
    char *device;
    bool has_head;
    int64_t head;
};

#if defined(CONFIG_SPICE)
struct SpiceBasicInfo {
    char *host;
    char *port;
    NetworkAddressFamily family;
};
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
void qapi_free_SpiceBasicInfo(SpiceBasicInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(SpiceBasicInfo, qapi_free_SpiceBasicInfo)
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
struct SpiceServerInfo {
    /* Members inherited from SpiceBasicInfo: */
    char *host;
    char *port;
    NetworkAddressFamily family;
    /* Own members: */
    bool has_auth;
    char *auth;
};
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
static inline SpiceBasicInfo *qapi_SpiceServerInfo_base(const SpiceServerInfo *obj)
{
    return (SpiceBasicInfo *)obj;
}

void qapi_free_SpiceServerInfo(SpiceServerInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(SpiceServerInfo, qapi_free_SpiceServerInfo)
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
struct SpiceChannel {
    /* Members inherited from SpiceBasicInfo: */
    char *host;
    char *port;
    NetworkAddressFamily family;
    /* Own members: */
    int64_t connection_id;
    int64_t channel_type;
    int64_t channel_id;
    bool tls;
};
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
static inline SpiceBasicInfo *qapi_SpiceChannel_base(const SpiceChannel *obj)
{
    return (SpiceBasicInfo *)obj;
}

void qapi_free_SpiceChannel(SpiceChannel *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(SpiceChannel, qapi_free_SpiceChannel)
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
struct SpiceChannelList {
    SpiceChannelList *next;
    SpiceChannel *value;
};

void qapi_free_SpiceChannelList(SpiceChannelList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(SpiceChannelList, qapi_free_SpiceChannelList)
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
struct SpiceInfo {
    bool enabled;
    bool migrated;
    bool has_host;
    char *host;
    bool has_port;
    int64_t port;
    bool has_tls_port;
    int64_t tls_port;
    bool has_auth;
    char *auth;
    bool has_compiled_version;
    char *compiled_version;
    SpiceQueryMouseMode mouse_mode;
    bool has_channels;
    SpiceChannelList *channels;
};
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
void qapi_free_SpiceInfo(SpiceInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(SpiceInfo, qapi_free_SpiceInfo)
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
struct q_obj_SPICE_CONNECTED_arg {
    SpiceBasicInfo *server;
    SpiceBasicInfo *client;
};
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
struct q_obj_SPICE_INITIALIZED_arg {
    SpiceServerInfo *server;
    SpiceChannel *client;
};
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
struct q_obj_SPICE_DISCONNECTED_arg {
    SpiceBasicInfo *server;
    SpiceBasicInfo *client;
};
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_VNC)
struct VncBasicInfo {
    char *host;
    char *service;
    NetworkAddressFamily family;
    bool websocket;
};
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
void qapi_free_VncBasicInfo(VncBasicInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(VncBasicInfo, qapi_free_VncBasicInfo)
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
struct VncServerInfo {
    /* Members inherited from VncBasicInfo: */
    char *host;
    char *service;
    NetworkAddressFamily family;
    bool websocket;
    /* Own members: */
    bool has_auth;
    char *auth;
};
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
static inline VncBasicInfo *qapi_VncServerInfo_base(const VncServerInfo *obj)
{
    return (VncBasicInfo *)obj;
}

void qapi_free_VncServerInfo(VncServerInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(VncServerInfo, qapi_free_VncServerInfo)
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
struct VncClientInfo {
    /* Members inherited from VncBasicInfo: */
    char *host;
    char *service;
    NetworkAddressFamily family;
    bool websocket;
    /* Own members: */
    bool has_x509_dname;
    char *x509_dname;
    bool has_sasl_username;
    char *sasl_username;
};
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
static inline VncBasicInfo *qapi_VncClientInfo_base(const VncClientInfo *obj)
{
    return (VncBasicInfo *)obj;
}

void qapi_free_VncClientInfo(VncClientInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(VncClientInfo, qapi_free_VncClientInfo)
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
struct VncClientInfoList {
    VncClientInfoList *next;
    VncClientInfo *value;
};

void qapi_free_VncClientInfoList(VncClientInfoList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(VncClientInfoList, qapi_free_VncClientInfoList)
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
struct VncInfo {
    bool enabled;
    bool has_host;
    char *host;
    bool has_family;
    NetworkAddressFamily family;
    bool has_service;
    char *service;
    bool has_auth;
    char *auth;
    bool has_clients;
    VncClientInfoList *clients;
};
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
void qapi_free_VncInfo(VncInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(VncInfo, qapi_free_VncInfo)
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
struct VncServerInfo2 {
    /* Members inherited from VncBasicInfo: */
    char *host;
    char *service;
    NetworkAddressFamily family;
    bool websocket;
    /* Own members: */
    VncPrimaryAuth auth;
    bool has_vencrypt;
    VncVencryptSubAuth vencrypt;
};
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
static inline VncBasicInfo *qapi_VncServerInfo2_base(const VncServerInfo2 *obj)
{
    return (VncBasicInfo *)obj;
}

void qapi_free_VncServerInfo2(VncServerInfo2 *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(VncServerInfo2, qapi_free_VncServerInfo2)
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
struct VncServerInfo2List {
    VncServerInfo2List *next;
    VncServerInfo2 *value;
};

void qapi_free_VncServerInfo2List(VncServerInfo2List *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(VncServerInfo2List, qapi_free_VncServerInfo2List)
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
struct VncInfo2 {
    char *id;
    VncServerInfo2List *server;
    VncClientInfoList *clients;
    VncPrimaryAuth auth;
    bool has_vencrypt;
    VncVencryptSubAuth vencrypt;
    bool has_display;
    char *display;
};
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
void qapi_free_VncInfo2(VncInfo2 *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(VncInfo2, qapi_free_VncInfo2)
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
struct VncInfo2List {
    VncInfo2List *next;
    VncInfo2 *value;
};

void qapi_free_VncInfo2List(VncInfo2List *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(VncInfo2List, qapi_free_VncInfo2List)
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
struct q_obj_change_vnc_password_arg {
    char *password;
};
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
struct q_obj_VNC_CONNECTED_arg {
    VncServerInfo *server;
    VncBasicInfo *client;
};
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
struct q_obj_VNC_INITIALIZED_arg {
    VncServerInfo *server;
    VncClientInfo *client;
};
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
struct q_obj_VNC_DISCONNECTED_arg {
    VncServerInfo *server;
    VncClientInfo *client;
};
#endif /* defined(CONFIG_VNC) */

struct MouseInfo {
    char *name;
    int64_t index;
    bool current;
    bool absolute;
};

void qapi_free_MouseInfo(MouseInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(MouseInfo, qapi_free_MouseInfo)

struct MouseInfoList {
    MouseInfoList *next;
    MouseInfo *value;
};

void qapi_free_MouseInfoList(MouseInfoList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(MouseInfoList, qapi_free_MouseInfoList)

struct q_obj_int_wrapper {
    int64_t data;
};

struct q_obj_QKeyCode_wrapper {
    QKeyCode data;
};

struct KeyValue {
    KeyValueKind type;
    union { /* union tag is @type */
        q_obj_int_wrapper number;
        q_obj_QKeyCode_wrapper qcode;
    } u;
};

void qapi_free_KeyValue(KeyValue *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(KeyValue, qapi_free_KeyValue)

struct KeyValueList {
    KeyValueList *next;
    KeyValue *value;
};

void qapi_free_KeyValueList(KeyValueList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(KeyValueList, qapi_free_KeyValueList)

struct q_obj_send_key_arg {
    KeyValueList *keys;
    bool has_hold_time;
    int64_t hold_time;
};

struct InputKeyEvent {
    KeyValue *key;
    bool down;
};

void qapi_free_InputKeyEvent(InputKeyEvent *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(InputKeyEvent, qapi_free_InputKeyEvent)

struct InputBtnEvent {
    InputButton button;
    bool down;
};

void qapi_free_InputBtnEvent(InputBtnEvent *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(InputBtnEvent, qapi_free_InputBtnEvent)

struct InputMoveEvent {
    InputAxis axis;
    int64_t value;
};

void qapi_free_InputMoveEvent(InputMoveEvent *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(InputMoveEvent, qapi_free_InputMoveEvent)

struct q_obj_InputKeyEvent_wrapper {
    InputKeyEvent *data;
};

struct q_obj_InputBtnEvent_wrapper {
    InputBtnEvent *data;
};

struct q_obj_InputMoveEvent_wrapper {
    InputMoveEvent *data;
};

struct InputEvent {
    InputEventKind type;
    union { /* union tag is @type */
        q_obj_InputKeyEvent_wrapper key;
        q_obj_InputBtnEvent_wrapper btn;
        q_obj_InputMoveEvent_wrapper rel;
        q_obj_InputMoveEvent_wrapper abs;
    } u;
};

void qapi_free_InputEvent(InputEvent *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(InputEvent, qapi_free_InputEvent)

struct InputEventList {
    InputEventList *next;
    InputEvent *value;
};

void qapi_free_InputEventList(InputEventList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(InputEventList, qapi_free_InputEventList)

struct q_obj_input_send_event_arg {
    bool has_device;
    char *device;
    bool has_head;
    int64_t head;
    InputEventList *events;
};

struct DisplayGTK {
    bool has_grab_on_hover;
    bool grab_on_hover;
    bool has_zoom_to_fit;
    bool zoom_to_fit;
};

void qapi_free_DisplayGTK(DisplayGTK *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(DisplayGTK, qapi_free_DisplayGTK)

struct DisplayEGLHeadless {
    bool has_rendernode;
    char *rendernode;
};

void qapi_free_DisplayEGLHeadless(DisplayEGLHeadless *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(DisplayEGLHeadless, qapi_free_DisplayEGLHeadless)

struct DisplayCurses {
    bool has_charset;
    char *charset;
};

void qapi_free_DisplayCurses(DisplayCurses *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(DisplayCurses, qapi_free_DisplayCurses)

struct q_obj_DisplayOptions_base {
    DisplayType type;
    bool has_full_screen;
    bool full_screen;
    bool has_window_close;
    bool window_close;
    bool has_show_cursor;
    bool show_cursor;
    bool has_gl;
    DisplayGLMode gl;
};

struct DisplayOptions {
    DisplayType type;
    bool has_full_screen;
    bool full_screen;
    bool has_window_close;
    bool window_close;
    bool has_show_cursor;
    bool show_cursor;
    bool has_gl;
    DisplayGLMode gl;
    union { /* union tag is @type */
        DisplayGTK gtk;
        DisplayCurses curses;
        DisplayEGLHeadless egl_headless;
    } u;
};

void qapi_free_DisplayOptions(DisplayOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(DisplayOptions, qapi_free_DisplayOptions)

#endif /* QAPI_TYPES_UI_H */
