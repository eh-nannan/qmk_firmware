// Copyright 2022 hayashi (@w_vwbw)
// SPDX-License-Identifier: GPL-2.0-or-later

#include "popntop_np.h"

// PHYSICAL DISTANCE(0-180)
const uint8_t l = 45;
// HALF OF KEY
const float u = (224 - l) / 41;

led_config_t g_led_config = {
  {
      // LEFT
      {      0, 1, 2, 3, 4, 5, 6, 7, NO_LED, NO_LED },
      { NO_LED,14,13,12,11,10, 9, 8, NO_LED, NO_LED },
      { NO_LED,15,16,17,18,19,20,21,22,      NO_LED },
      // RIGHT
      { NO_LED,36,35,34,33,32,31,30,29,28     },
      { NO_LED,37,38,39,40,41,42,43,44,NO_LED },
      {     54,53,52,51,50,49,48,47,46,45     },

  }, { // PHISICAL MAP
        // LEFT
        // BACKLIGHT
        { u, 53}, { 3.5*u, 53}, { 6*u, 53}, { 8*u, 53}, {10*u, 53}, {12*u, 53}, {14*u, 53}, {16*u, 53},
        {16.5*u, 32}, {14*u, 32}, {12*u, 32}, {10*u, 32}, { 8*u, 32}, { 6*u, 32}, { 3.25*u, 32},
        { 3*u, 11}, { 6*u, 11}, { 8*u, 11}, {10*u, 11}, {12*u, 11}, {14*u, 11}, {16*u, 11}, {18*u, 11},
        // UNDERGLOW
        {15*u, 21}, {11*u, 21}, { 7*u, 21}, { 3.5*u, 21},{ 3.5*u, 21},
        // RIGHT
        // BACKLIGHT
        {l+(39*u), 53}, {l+(36*u), 53}, {l+(34*u), 53}, {l+(32*u), 53}, {l+(30*u), 53}, {l+(28*u), 53}, {l+(26*u), 53}, {l+(24*u), 53},{l+(22*u), 53},
        {l+(22*u), 32}, {l+(24*u), 32}, {l+(26*u), 32}, {l+(28*u), 32}, {l+(30*u), 32}, {l+(32*u), 32}, {l+(34*u), 32}, {l+(37*u), 32},
        {l+(39.5*u), 11}, {l+(36.75*u), 11}, {l+(34*u), 11}, {l+(32*u), 11}, {l+(30*u), 11}, {l+(28*u), 11}, {l+(26*u), 11}, {l+(24*u), 11}, {l+(22*u), 11}, {l+(20*u), 11},
        // UNDERGLOW
        { l+(21*u), 21}, {l+(25*u), 21}, {l+(29*u), 21}, {l+(33*u), 21}, {l+(37*u), 21},

  }, { // \FLAGS
      // LEFT
      // BACKLIGHT
      LED_FLAG_MODIFIER, LED_FLAG_MODIFIER, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
                         LED_FLAG_MODIFIER, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_MODIFIER,
                         LED_FLAG_MODIFIER, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_MODIFIER, LED_FLAG_MODIFIER,
      // UNDERGLOW
      LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW,
      // RIGHT
      // BACKLIGHT
      LED_FLAG_MODIFIER, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
      LED_FLAG_MODIFIER, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_MODIFIER,
      LED_FLAG_MODIFIER, LED_FLAG_MODIFIER, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_MODIFIER, LED_FLAG_MODIFIER,
      // UNDERGLOW
      LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW

  }
};
