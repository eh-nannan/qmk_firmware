// Copyright 2022 Taro Hayashi (@w_vwbw)
// SPDX-License-Identifier: GPL-2.0-or-later

#include "onthe15.h"

led_config_t g_led_config = {
  {    // KEY MATRIX MAP
       { 24, 25, 26, 27, 28, 29, 30, 31 },
       { 39, 40, 41, 42, 43, 44, 45, 46 },
       { 54, 55, 56, 57, 58, 59, 60, 61 },
       { 69, 70, 71, 72, 73, 74, 75, 76 },
       { 32, 33, 34, 35, 36, 37, 38, NO_LED },
       { 47, 48, 49, 50, 51, 52, 53, NO_LED },
       { 62, 63, 64, 65, 66, 67, 68, NO_LED },
       { 77, 78, 79, 80, 81, 82, 83, NO_LED },
       { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO },
  }, { // PHISICAL MAP
       // UNDERGLOW
       { 29.9, 48}, { 59.7, 48}, { 89.6, 48}, { 134.4, 48}, { 164.3, 48}, { 194.1, 48},
       { 194.1, 16}, { 164.3, 16}, { 134.4, 16}, { 89.6, 16}, { 59.7, 16}, { 29.9, 16},
       // OVERGLOW
       { 29.9, 48}, { 59.7, 48}, { 89.6, 48}, { 134.4, 48}, { 164.3, 48}, { 194.1, 48},
       { 194.1, 16}, { 164.3, 16}, { 134.4, 16}, { 89.6, 16}, { 59.7, 16}, { 29.9, 16},
       //
       {7.5, 56}, {22.4, 56}, {37.3, 56}, {52.3, 56}, {67.2, 56}, {82.1, 56}, {97.1, 56}, {112, 56},
       {126.9, 56}, {141.9, 56}, {17.5, 56}, {122.4, 56}, {137.3, 56}, {152.3, 56}, {167.2, 56},
       {7.5, 40}, {22.4, 40}, {37.3, 40}, {52.3, 40}, {67.2, 40}, {82.1, 40}, {97.1, 40}, {112, 40},
       {126.9, 40}, {141.9, 40}, {17.5, 40}, {122.4, 40}, {137.3, 40}, {152.3, 40}, {167.2, 40},
       {7.5, 24}, {22.4, 24}, {37.3, 24}, {52.3, 24}, {67.2, 24}, {82.1, 24}, {97.1, 24}, {112, 24},
       {126.9, 24}, {141.9, 24}, {17.5, 24}, {122.4, 24}, {137.3, 24}, {152.3, 24}, {167.2, 24},
       {7.5, 8}, {22.4, 8}, {37.3, 8}, {52.3, 8}, {67.2, 8}, {82.1, 8}, {97.1, 8}, {112, 8},
       {126.9, 8}, {141.9, 8}, {17.5, 8}, {122.4, 8}, {137.3, 8}, {152.3, 8}, {167.2, 8},

  }, { // FLAGS
       // UNDERGLOW
       LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW,
       LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW,
       // OVERGLOW
       LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW,
       LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW,
       // KEY MATRIX
       LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,
       LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,
       LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,
       LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,
       LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,
       LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,
       LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,
       LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT
  }
};

void suspend_power_down_kb(void)
{
    rgb_matrix_set_suspend_state(true);
}

void suspend_wakeup_init_kb(void)
{
    rgb_matrix_set_suspend_state(false);
}
