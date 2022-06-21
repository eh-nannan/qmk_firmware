// Copyright 2022 Taro Hayashi (@w_vwbw)
// SPDX-License-Identifier: GPL-2.0-or-later

#include "onthe15.h"

const float r = 64 / 4;
const float c = 224 / 15;

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
       { 2*c, 3*r}, { 4*c, 3*r}, { 6*c, 3*r}, { 9*c, 3*r}, { 11*c, 3*r}, { 13*c, 3*r},
       { 13*c, 1*r}, { 11*c, 1*r}, { 9*c, 1*r}, { 6*c, 1*r}, { 4*c, 1*r}, { 2*c, 1*r},
       // OVERGLOW
       { 2*c, 3*r}, { 4*c, 3*r}, { 6*c, 3*r}, { 9*c, 3*r}, { 11*c, 3*r}, { 13*c, 3*r},
       { 13*c, 1*r}, { 11*c, 1*r}, { 9*c, 1*r}, { 6*c, 1*r}, { 4*c, 1*r}, { 2*c, 1*r},
       //
       {0.5*c, 3.5*r}, {1.5*c, 3.5*r}, {2.5*c, 3.5*r}, {3.5*c, 3.5*r}, {4.5*c, 3.5*r}, {5.5*c, 3.5*r}, {6.5*c, 3.5*r}, {7.5*c, 3.5*r},
       {8.5*c, 3.5*r}, {9.5*c, 3.5*r}, {10.5*c, 3.5*r}, {11.5*c, 3.5*r}, {12.5*c, 3.5*r}, {13.5*c, 3.5*r}, {14.5*c, 3.5*r},
       {0.5*c, 2.5*r}, {1.5*c, 2.5*r}, {2.5*c, 2.5*r}, {3.5*c, 2.5*r}, {4.5*c, 2.5*r}, {5.5*c, 2.5*r}, {6.5*c, 2.5*r}, {7.5*c, 2.5*r},
       {8.5*c, 2.5*r}, {9.5*c, 2.5*r}, {10.5*c, 2.5*r}, {11.5*c, 2.5*r}, {12.5*c, 2.5*r}, {13.5*c, 2.5*r}, {14.5*c, 2.5*r},
       {0.5*c, 1.5*r}, {1.5*c, 1.5*r}, {2.5*c, 1.5*r}, {3.5*c, 1.5*r}, {4.5*c, 1.5*r}, {5.5*c, 1.5*r}, {6.5*c, 1.5*r}, {7.5*c, 1.5*r},
       {8.5*c, 1.5*r}, {9.5*c, 1.5*r}, {10.5*c, 1.5*r}, {11.5*c, 1.5*r}, {12.5*c, 1.5*r}, {13.5*c, 1.5*r}, {14.5*c, 1.5*r},
       {0.5*c, 0.5*r}, {1.5*c, 0.5*r}, {2.5*c, 0.5*r}, {3.5*c, 0.5*r}, {4.5*c, 0.5*r}, {5.5*c, 0.5*r}, {6.5*c, 0.5*r}, {7.5*c, 0.5*r},
       {8.5*c, 0.5*r}, {9.5*c, 0.5*r}, {10.5*c, 0.5*r}, {11.5*c, 4.5*r}, {12.5*c, 0.5*r}, {13.5*c, 0.5*r}, {14.5*c, 0.5*r},

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
