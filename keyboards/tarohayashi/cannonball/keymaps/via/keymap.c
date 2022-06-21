// Copyright 2021 Hayashi (@w_vwbw)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
enum custom_keycode {
  BASE = 0,
  LOWER,
  UPPER,
  LIGHT,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE] = LAYOUT(
               LSG(KC_S),  KC_HOME, KC_END,  KC_BSPC,
        LCTL(KC_0), KC_BTN1, KC_UP,   KC_BTN2,
               KC_LEFT, KC_DOWN, KC_RGHT, LT(LIGHT, KC_ENT),
        // LEVER
        XXXXXXX, RCS(KC_TAB), XXXXXXX, LCTL(KC_TAB), XXXXXXX,
        // ENCODERS
        LCTL(KC_KP_MINUS),LCTL(KC_KP_PLUS), KC_WH_U, KC_WH_D,  KC_WH_L, KC_WH_R
  ),
  [LOWER] = LAYOUT(
               XXXXXXX,  XXXXXXX, XXXXXXX,  XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX,   XXXXXXX,
               XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX

  ),
  [UPPER] = LAYOUT(
               XXXXXXX,  XXXXXXX, XXXXXXX,  XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX,   XXXXXXX,
               XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
  ),
  [LIGHT] = LAYOUT(
               RGB_HUI,  RGB_SAI, RGB_VAI, RGB_RMOD,
        RGB_TOG, XXXXXXX,  RGB_MOD,   XXXXXXX,
               RGB_HUD, RGB_SAD, RGB_VAD, LT(LIGHT, KC_ENT),
        XXXXXXX, RGB_SPI, XXXXXXX, RGB_SPD, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
  ),
};


keyevent_t encoder1_ccw = {
    .key = (keypos_t){.row = 2, .col = 0},
    .pressed = false
};

keyevent_t encoder1_cw = {
    .key = (keypos_t){.row = 0, .col = 0},
    .pressed = false
};

keyevent_t encoder2_ccw = {
    .key = (keypos_t){.row = 4, .col = 1},
    .pressed = false
};

keyevent_t encoder2_cw = {
    .key = (keypos_t){.row = 4, .col = 0},
    .pressed = false
};

keyevent_t encoder3_ccw = {
    .key = (keypos_t){.row = 4, .col = 4},
    .pressed = false
};

keyevent_t encoder3_cw = {
    .key = (keypos_t){.row = 4, .col = 3},
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
