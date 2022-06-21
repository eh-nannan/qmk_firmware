// Copyright 2021 Hayashi (@w_vwbw)
// SPDX-License-Identifier: GPL-2.0-or-later

#include "handyman.h"

led_config_t g_led_config = {
  {    // KEY MATRIX MAP
       { 0, 1, 2, 3, 4, NO_LED},
       { 9, 8, 7, 6, 5, NO_LED},
       {10,NO_LED,11,NO_LED,12, NO_LED},
       {16,15,14,13,NO_LED, NO_LED},
       {17,18,19,20,21, NO_LED},
       {NO_LED,NO_LED,NO_LED,NO_LED,NO_LED, NO_LED},
  }, { // PHISICAL MAP
       // BACKLIGHT
        {  22.4, 61.4}, {  67.2, 61.4}, {   112, 61.4}, { 156.8, 61.4}, { 201.6, 61.4},
        { 201.6, 48.1}, { 156.8, 45.4}, {   112, 48.1}, {  67.2, 45.4}, {  22.4, 40.1},
	    {  22.4, 29.4},                 {   112, 37.4},                 { 201.6, 37.4},
        { 156.8,   24}, {   112, 26.7}, {  67.2,   24}, {  22.4, 18.7},
        {  22.4,    8}, {  67.2, 13.4}, { 100.8,  1.3}, { 145.6,    8}, { 201.6, 13.4},
	     // UNDERGLOW
	    { 156.8,  2.7}, {  67.2,  2.7}, {  22.4, 21.4}, {  22.4, 42.7}, { 179.2, 40.1}, { 190.4, 17.4},
  }, { // FLAGS
       // BACKLIGHT
       LED_FLAG_MODIFIER, LED_FLAG_MODIFIER, LED_FLAG_MODIFIER, LED_FLAG_MODIFIER, LED_FLAG_MODIFIER,
       LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
       LED_FLAG_KEYLIGHT,                    LED_FLAG_KEYLIGHT,                    LED_FLAG_KEYLIGHT,
       LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
       LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_MODIFIER, LED_FLAG_MODIFIER,LED_FLAG_MODIFIER,
	     // UNDERGLOW
       LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW,LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW
  }
};
