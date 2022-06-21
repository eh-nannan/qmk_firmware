// Copyright 2021 Hayashi (@w_vwbw)
// SPDX-License-Identifier: GPL-2.0-or-later

#include "armors.h"

led_config_t g_led_config = {
  {    // KEY MATRIX MAP
       {  4,  3,  2,  1,  0, NO_LED },
       {  5,  6,  7,  8,  9, 10 },
       { 16, 15, 14, 13, 12, 11 },
  }, { // PHISICAL MAP
       // BACKLIGHT
            { 186.7, 58.6}, { 149.4, 58.6}, { 112, 58.6}, { 74.7, 58.6}, { 37.3, 58.6},
       {   18.7, 37.3}, { 56, 37.3}, { 93.4, 37.3}, { 130.7, 37.3}, { 168, 37.3}, {205.4, 37.3},
       {205.4, 16}, { 168, 16}, { 130.7, 16}, { 93.4, 16}, { 56, 16}, { 18.7, 16},
	     // UNDERGLOW
	     { 37.3, 21.3}, { 112, 21.3}, { 18.7, 21.3},
  }, { // FLAGS
       // BACKLIGHT
                LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
       LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
       LED_FLAG_MODIFIER, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
	     // UNDERGLOW
       LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW
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
