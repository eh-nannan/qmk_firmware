// Copyright 2021 Hayashi (@w_vwbw)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
enum custom_keycode {
  CLIPSTUDIO = 0,
  PHOTOSHOP,
  KICAD,
  LIGHT,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [CLIPSTUDIO] = LAYOUT(
          G(KC_S), G(KC_C), G(KC_V), G(KC_X), KC_BSPC,
        LSFT(KC_F7), LCTL(KC_M), LCTL(KC_T),  LCTL(KC_D), KC_M,
        KC_X, KC_F13, LCTL(KC_Z), KC_F14, LCTL(KC_0),
        KC_O, KC_S, KC_Y, KC_I, KC_F15,
        LCTL(KC_H), LT(LIGHT, KC_U), LALT_T(KC_E), LCTL_T(KC_B), LSFT_T(KC_P),
        // LEVER
        XXXXXXX, KC_T, KC_G, KC_J, XXXXXXX,
        // ENCODER
        LCTL(KC_KP_PLUS), LCTL(KC_KP_MINUS),   KC_LBRC,KC_RBRC,  KC_MINS, KC_QUOT
  ),
  [PHOTOSHOP] = LAYOUT(
        G(KC_S), G(KC_C), G(KC_V), G(KC_X), KC_BSPC,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        // LEVER
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        // ENCODER
        XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX
  ),
  [KICAD] = LAYOUT(
        G(KC_S), G(KC_C), G(KC_V), G(KC_X), KC_BSPC,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        // LEVER
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        // ENCODER
        XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX
  ),
  [LIGHT] = LAYOUT(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, XXXXXXX,
        XXXXXXX, XXXXXXX, RGB_MOD, RGB_TOG, RGB_RMOD,
        // LEVER
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        // ENCODER
        XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX
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
