#pragma once

#include <stdio.h>
#include <malloc.h>
#include <wchar.h>
#include <Windows.h>
#include <strsafe.h>
#include <ntddmou.h>
#include <ntddkbd.h>
#include <Hidclass.h>
#include <hidsdi.h>

#include "list.h"
#include "usb-hid-usage.h"
#include "timer.h"

typedef struct _REGISTERED_DEVICE REGISTERED_DEVICE, *PREGISTERED_DEVICE;

typedef struct _REGISTERED_KEYBOARD_DEVICE_INFO REGISTERED_KEYBOARD_DEVICE_INFO,
    *PREGISTERED_KEYBOARD_DEVICE_INFO;

typedef struct _REGISTERED_MOUSE_DEVICE_INFO REGISTERED_MOUSE_DEVICE_INFO,
    *PREGISTERED_MOUSE_DEVICE_INFO;

typedef struct _BUTTON_CAP_STATE BUTTON_CAP_STATE, *PBUTTON_CAP_STATE;

typedef struct _REGISTERED_HID_DEVICE_INFO REGISTERED_HID_DEVICE_INFO,
    *PREGISTERED_HID_DEVICE_INFO;

#include "window.h"
#include "config.h"
#include "vkey.h"
#include "registered.h"
#include "devicelist.h"
#include "keyboard.h"
#include "mouse.h"
#include "hid.h"

DECLSPEC_NORETURN
VOID
FailFast (
    _In_ UINT ExitCode
    );

VOID
ProcessWmInput (
    _In_ PRAWINPUT Data
    );

VOID
PrintLogTimeStamp(
    VOID
    );