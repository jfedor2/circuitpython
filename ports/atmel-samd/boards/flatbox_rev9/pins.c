// This file is part of the CircuitPython project: https://circuitpython.org
//
// SPDX-FileCopyrightText: Copyright (c) 2017 Scott Shawcroft for Adafruit Industries
//
// SPDX-License-Identifier: MIT

#include "shared-bindings/board/__init__.h"

static const mp_rom_map_elem_t board_module_globals_table[] = {
    CIRCUITPYTHON_BOARD_DICT_STANDARD_ITEMS

    { MP_ROM_QSTR(MP_QSTR_OPT1), MP_ROM_PTR(&pin_PA00) },
    { MP_ROM_QSTR(MP_QSTR_OPT2), MP_ROM_PTR(&pin_PA01) },
    { MP_ROM_QSTR(MP_QSTR_OPT3), MP_ROM_PTR(&pin_PA02) },
    { MP_ROM_QSTR(MP_QSTR_OPT4), MP_ROM_PTR(&pin_PA03) },
    { MP_ROM_QSTR(MP_QSTR_OPT5), MP_ROM_PTR(&pin_PA04) },
    { MP_ROM_QSTR(MP_QSTR_OPT6), MP_ROM_PTR(&pin_PA05) },
    { MP_ROM_QSTR(MP_QSTR_LEFT), MP_ROM_PTR(&pin_PA06) },
    { MP_ROM_QSTR(MP_QSTR_DOWN), MP_ROM_PTR(&pin_PA07) },
    { MP_ROM_QSTR(MP_QSTR_RIGHT), MP_ROM_PTR(&pin_PA08) },
    { MP_ROM_QSTR(MP_QSTR_UP), MP_ROM_PTR(&pin_PA09) },
    { MP_ROM_QSTR(MP_QSTR_CROSS), MP_ROM_PTR(&pin_PA11) },
    { MP_ROM_QSTR(MP_QSTR_CIRCLE), MP_ROM_PTR(&pin_PA14) },
    { MP_ROM_QSTR(MP_QSTR_SQUARE), MP_ROM_PTR(&pin_PA10) },
    { MP_ROM_QSTR(MP_QSTR_TRIANGLE), MP_ROM_PTR(&pin_PA15) },
    { MP_ROM_QSTR(MP_QSTR_R1), MP_ROM_PTR(&pin_PA17) },
    { MP_ROM_QSTR(MP_QSTR_R2), MP_ROM_PTR(&pin_PA16) },
    { MP_ROM_QSTR(MP_QSTR_L1), MP_ROM_PTR(&pin_PA19) },
    { MP_ROM_QSTR(MP_QSTR_L2), MP_ROM_PTR(&pin_PA18) },

};
MP_DEFINE_CONST_DICT(board_module_globals, board_module_globals_table);
