// Copyright 2021 Hayashi (@w_vwbw)
// SPDX-License-Identifier: GPL-2.0-or-later

#include "kombucha.h"

const float c = 224/18;
const float r = 64/20;

led_config_t g_led_config = {
  {    // KEY MATRIX MAP
       {2, 1, NO_LED, 0 },
       {3, 4, NO_LED, 5 },
       {8, 7, NO_LED, 6 },
       {9, 10, NO_LED, NO_LED },
  }, { // PHISICAL MAP
       // BACKLIGHT
        {  199, 60.8}, {74.6, 60.8}, {24.9, 54.4},
	    { 24.9, 41.6}, {74.6, 48}, {199, 48},
        {  199, 35.2}, {74.6, 35.2}, {24.9, 28.8},
        { 12.4,  9.6}, {87.1, 9.6},
	     // UNDERGLOW
	    {211.5, 19.2}, {149.3, 6.4}, {49.8, 3.2}, {24.9, 32}, {37.3, 57.6}, {136.8, 60.8},
  }, { // FLAGS
       // BACKLIGHT
       LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
       LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
       LED_FLAG_KEYLIGHT, LED_FLAG_MODIFIER, LED_FLAG_MODIFIER,
	     // UNDERGLOW
       LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW
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
