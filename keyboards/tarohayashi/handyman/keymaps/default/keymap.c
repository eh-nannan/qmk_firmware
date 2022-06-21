// Copyright 2021 Hayashi (@w_vwbw)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum custom_keycodes{
  SEND_01 = SAFE_RANGE,
           SEND_02, SEND_03, SEND_04, SEND_05, SEND_06, SEND_07, SEND_08, SEND_09, SEND_10,
  SEND_11, SEND_12, SEND_13, SEND_14, SEND_15, SEND_16, SEND_17, SEND_18, SEND_19, SEND_20,
  SEND_21, SEND_22, SEND_23, SEND_24, SEND_25, SEND_26, SEND_27, SEND_28, SEND_29, SEND_30,
  SEND_31, SEND_32, SEND_33, SEND_34, SEND_35, SEND_36, SEND_37, SEND_38, SEND_39, SEND_40,
  SEND_41, SEND_42, SEND_43, SEND_44, SEND_45, SEND_46, SEND_47, SEND_48, SEND_49, SEND_50
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT( /* NONE */
        SEND_01, SEND_02, SEND_03, SEND_04, SEND_05,
        SEND_06, SEND_07, SEND_08, SEND_09, SEND_10,
        SEND_11, SEND_12, SEND_13, SEND_14, SEND_15,
        SEND_16, SEND_17, SEND_18, SEND_19, SEND_20,
        SEND_21, SEND_22, SEND_23, SEND_24, SEND_25,
        SEND_50, SEND_26, SEND_27, SEND_28, SEND_50,
        KC_A, KC_I, KC_C, KC_P, KC_E, KC_H
  ),
};

keyevent_t encoder1_ccw = {
    .key = (keypos_t){.row = 1, .col = 5},
    .pressed = false
};

keyevent_t encoder1_cw = {
    .key = (keypos_t){.row = 0, .col = 5},
    .pressed = false
};

keyevent_t encoder2_ccw = {
    .key = (keypos_t){.row = 3, .col = 5},
    .pressed = false
};

keyevent_t encoder2_cw = {
    .key = (keypos_t){.row = 2, .col = 5},
    .pressed = false
};

keyevent_t encoder3_ccw = {
    .key = (keypos_t){.row = 5, .col = 5},
    .pressed = false
};

keyevent_t encoder3_cw = {
    .key = (keypos_t){.row = 4, .col = 5},
    .pressed = false
};


void matrix_scan_user(void) {
    if (IS_PRESSED(encoder1_ccw)) {
        encoder1_ccw.pressed = false;
        encoder1_ccw.time = (timer_read() | 1);
        action_exec(encoder1_ccw);
    }

    if (IS_PRESSED(encoder1_cw)) {
        encoder1_cw.pressed = false;
        encoder1_cw.time = (timer_read() | 1);
        action_exec(encoder1_cw);
    }

    if (IS_PRESSED(encoder2_ccw)) {
        encoder2_ccw.pressed = false;
        encoder2_ccw.time = (timer_read() | 1);
        action_exec(encoder2_ccw);
    }

    if (IS_PRESSED(encoder2_cw)) {
        encoder2_cw.pressed = false;
        encoder2_cw.time = (timer_read() | 1);
        action_exec(encoder2_cw);
    }

    if (IS_PRESSED(encoder3_ccw)) {
        encoder3_ccw.pressed = false;
        encoder3_ccw.time = (timer_read() | 1);
        action_exec(encoder3_ccw);
    }

    if (IS_PRESSED(encoder3_cw)) {
        encoder3_cw.pressed = false;
        encoder3_cw.time = (timer_read() | 1);
        action_exec(encoder3_cw);
    }
}

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            encoder1_cw.pressed = true;
            encoder1_cw.time = (timer_read() | 1);
            action_exec(encoder1_cw);
        } else {
            encoder1_ccw.pressed = true;
            encoder1_ccw.time = (timer_read() | 1);
            action_exec(encoder1_ccw);
        }
    } else if (index == 1) {
        if (clockwise) {
            encoder2_cw.pressed = true;
            encoder2_cw.time = (timer_read() | 1);
            action_exec(encoder2_cw);
        } else {
            encoder2_ccw.pressed = true;
            encoder2_ccw.time = (timer_read() | 1);
            action_exec(encoder2_ccw);
        }
    } else if (index == 2) {
        if (clockwise) {
            encoder3_cw.pressed = true;
            encoder3_cw.time = (timer_read() | 1);
            action_exec(encoder3_cw);
        } else {
            encoder3_ccw.pressed = true;
            encoder3_ccw.time = (timer_read() | 1);
            action_exec(encoder3_ccw);
        }
    }

    return true;
}



bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case SEND_01: if (record->event.pressed) SEND_STRING("01 "); break;
    case SEND_02: if (record->event.pressed) SEND_STRING("02 "); break;
    case SEND_03: if (record->event.pressed) SEND_STRING("03 "); break;
    case SEND_04: if (record->event.pressed) SEND_STRING("04 "); break;
    case SEND_05: if (record->event.pressed) SEND_STRING("05 "); break;
    case SEND_06: if (record->event.pressed) SEND_STRING("06 "); break;
    case SEND_07: if (record->event.pressed) SEND_STRING("07 "); break;
    case SEND_08: if (record->event.pressed) SEND_STRING("08 "); break;
    case SEND_09: if (record->event.pressed) SEND_STRING("09 "); break;
    case SEND_10: if (record->event.pressed) SEND_STRING("10 "); break;
    case SEND_11: if (record->event.pressed) SEND_STRING("11 "); break;
    case SEND_12: if (record->event.pressed) SEND_STRING("12 "); break;
    case SEND_13: if (record->event.pressed) SEND_STRING("13 "); break;
    case SEND_14: if (record->event.pressed) SEND_STRING("14 "); break;
    case SEND_15: if (record->event.pressed) SEND_STRING("15 "); break;
    case SEND_16: if (record->event.pressed) SEND_STRING("16 "); break;
    case SEND_17: if (record->event.pressed) SEND_STRING("17 "); break;
    case SEND_18: if (record->event.pressed) SEND_STRING("18 "); break;
    case SEND_19: if (record->event.pressed) SEND_STRING("19 "); break;
    case SEND_20: if (record->event.pressed) SEND_STRING("20 "); break;
    case SEND_21: if (record->event.pressed) SEND_STRING("21 "); break;
    case SEND_22: if (record->event.pressed) SEND_STRING("22 "); break;
    case SEND_23: if (record->event.pressed) SEND_STRING("23 "); break;
    case SEND_24: if (record->event.pressed) SEND_STRING("24 "); break;
    case SEND_25: if (record->event.pressed) SEND_STRING("25 "); break;
    case SEND_26: if (record->event.pressed) SEND_STRING("26 "); break;
    case SEND_27: if (record->event.pressed) SEND_STRING("27 "); break;
    case SEND_28: if (record->event.pressed) SEND_STRING("28 "); break;
    case SEND_29: if (record->event.pressed) SEND_STRING("29 "); break;
    case SEND_30: if (record->event.pressed) SEND_STRING("30 "); break;
    case SEND_31: if (record->event.pressed) SEND_STRING("31 "); break;
    case SEND_32: if (record->event.pressed) SEND_STRING("32 "); break;
    case SEND_33: if (record->event.pressed) SEND_STRING("33 "); break;
    case SEND_34: if (record->event.pressed) SEND_STRING("34 "); break;
    case SEND_35: if (record->event.pressed) SEND_STRING("35 "); break;
    case SEND_36: if (record->event.pressed) SEND_STRING("36 "); break;
    case SEND_37: if (record->event.pressed) SEND_STRING("37 "); break;
    case SEND_38: if (record->event.pressed) SEND_STRING("38 "); break;
    case SEND_39: if (record->event.pressed) SEND_STRING("39 "); break;
    case SEND_40: if (record->event.pressed) SEND_STRING("40 "); break;
    case SEND_41: if (record->event.pressed) SEND_STRING("41 "); break;
    case SEND_42: if (record->event.pressed) SEND_STRING("42 "); break;
    case SEND_43: if (record->event.pressed) SEND_STRING("43 "); break;
    case SEND_44: if (record->event.pressed) SEND_STRING("44 "); break;
    case SEND_45: if (record->event.pressed) SEND_STRING("45 "); break;
    case SEND_46: if (record->event.pressed) SEND_STRING("46 "); break;
    case SEND_47: if (record->event.pressed) SEND_STRING("47 "); break;
    case SEND_48: if (record->event.pressed) SEND_STRING("48 "); break;
    case SEND_49: if (record->event.pressed) SEND_STRING("49 "); break;
    case SEND_50: if (record->event.pressed) SEND_STRING("50 "); break;
  }
  return true;
}
