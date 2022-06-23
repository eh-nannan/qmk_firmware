// Copyright 2021 Hayashi (@w_vwbw)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layerID {
  BASE = 0,
  LOWER,
  UPPER,
  LIGHT,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT(
            LT(LIGHT, KC_F5), KC_F7, KC_F8, KC_F10, KC_BSPC,
          KC_1,  KC_2,  KC_3,  KC_4,  KC_5, KC_GRV,
          KC_6,  KC_7,  KC_8,  KC_9,  KC_0, KC_LSFT
     ),
     [LOWER] = LAYOUT(
              XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
    ),
    [UPPER] = LAYOUT(
              XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
      ),
    [LIGHT] = LAYOUT(
         LT(LIGHT, KC_F5),RGB_RMOD,XXXXXXX,XXXXXXX,RGB_MOD,
      XXXXXXX,RGB_HUI,RGB_SAI,RGB_VAI,RGB_SPI,XXXXXXX,
      RGB_TOG,RGB_HUD,RGB_SAD,RGB_VAD,RGB_SPD,XXXXXXX
    ),
  };

/*
void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  debug_matrix=true;
  debug_keyboard=true;
  //debug_mouse=true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    uprintf("count: %u, tick %u\n", g_last_hit_tracker.count, g_last_hit_tracker.tick[g_last_hit_tracker.count-1]);
  return true;
}
*/
