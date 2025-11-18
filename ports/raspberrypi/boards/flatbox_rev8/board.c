// This file is part of the CircuitPython project: https://circuitpython.org
//
// SPDX-FileCopyrightText: Copyright (c) 2021 Scott Shawcroft for Adafruit Industries
//
// SPDX-License-Identifier: MIT

#include "supervisor/board.h"

#include "shared-bindings/digitalio/DigitalInOut.h"
#include "shared-bindings/usb_host/Port.h"

// Use the MP_WEAK supervisor/shared/board.c versions of routines not defined here.

void board_init(void) {
    common_hal_usb_host_port_construct(&pin_GPIO20, &pin_GPIO21);
}
