// Copyright 2021 Hayashi (@w_vwbw)
// SPDX-License-Identifier: GPL-2.0-or-later

#include "shotgun.h"

led_config_t g_led_config = {
  {    // KEY MATRIX MAP
       {      4,         3,         2,         1,         0 },
       {      5,         6,         7,         8,         9 },
       {     14,        13,        12,        11,        10 },
       {     15,        16,    NO_LED,        17,    NO_LED },
  }, { // PHISICAL MAP
       // BACKLIGHT
       {202, 56}, {157, 56}, {112, 56}, { 67, 56}, { 22, 56},
       { 22, 40}, { 67, 40}, {112, 40}, {157, 40}, {202, 40},
	     {202, 24}, {157, 24}, {112, 24}, { 67, 24}, { 22, 24},
       { 22,  8},       { 90,  8},      {157,  8},
	     // UNDERGLOW
       {179, 32}, {179, 16}, {112, 16},  { 45, 16}, { 45, 32},
  }, { // FLAGS
       // BACKLIGHT
       LED_FLAG_MODIFIER, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_MODIFIER,
       LED_FLAG_MODIFIER, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_MODIFIER,
       LED_FLAG_MODIFIER, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_MODIFIER,
       LED_FLAG_MODIFIER,          LED_FLAG_KEYLIGHT,           LED_FLAG_KEYLIGHT,
	     // UNDERGLOW
       LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW
  }
};
