// This file is part of the CircuitPython project: https://circuitpython.org
//
// SPDX-FileCopyrightText: Copyright (c) 2017 Scott Shawcroft for Adafruit Industries
//
// SPDX-License-Identifier: MIT

#include "supervisor/board.h"
#include "common-hal/microcontroller/Pin.h"
#include "supervisor/shared/board.h"
#include "hal/include/hal_gpio.h"

// If both buttons are pressed on powerup, boot into safe mode.
bool board_requests_safe_mode(void) {
    gpio_set_pin_function(PIN_PA00, GPIO_PIN_FUNCTION_OFF);
    gpio_set_pin_direction(PIN_PA00, GPIO_DIRECTION_IN);
    gpio_set_pin_pull_mode(PIN_PA00, GPIO_PULL_UP);

    gpio_set_pin_function(PIN_PA18, GPIO_PIN_FUNCTION_OFF);
    gpio_set_pin_direction(PIN_PA18, GPIO_DIRECTION_IN);
    gpio_set_pin_pull_mode(PIN_PA18, GPIO_PULL_UP);
    bool safe_mode = !gpio_get_pin_level(PIN_PA00) && !gpio_get_pin_level(PIN_PA18);
    reset_pin_number(PIN_PA00);
    reset_pin_number(PIN_PA18);
    return safe_mode;
}

void reset_board(void) {
    board_reset_user_neopixels(&pin_PA15, 12);
}

// Use the MP_WEAK supervisor/shared/board.c versions of routines not defined here.
