// Copyright 2021 Hayashi (@w_vwbw)
// SPDX-License-Identifier: GPL-2.0-or-later

#include "cannonball.h"

led_config_t g_led_config = {
  {    // KEY MATRIX MAP
       { NO_LED,         3,         2,         1,         0 },
       { NO_LED,    NO_LED,         4,    NO_LED,    NO_LED },
       { NO_LED,         8,         7,         6,         5 },
       { NO_LED,    NO_LED,    NO_LED,    NO_LED,    NO_LED },
       { NO_LED,    NO_LED,    NO_LED,    NO_LED,    NO_LED },
  }, { // PHISICAL MAP
       // BACKLIGHT
       {196, 53}, {140, 53}, { 84, 53}, { 28, 53},
       { 84, 32},
	     {196, 11}, {140, 11}, { 84, 11}, { 28, 11},
	     // UNDERGLOW
	     { 56, 45}, { 56, 19}, {168, 19},
  }, { // FLAGS
       // BACKLIGHT
       LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
       LED_FLAG_KEYLIGHT,
       LED_FLAG_MODIFIER, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
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
