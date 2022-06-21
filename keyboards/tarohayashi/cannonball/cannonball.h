// Copyright 2021 Hayashi (@w_vwbw)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

#define LAYOUT( \
         K01, K02, K03, K04, \
    K10, K11, K12, K13,      \
         K21, K22, K23, K24, \
	  LB2, LB1, LBT, LB4, LB3,  \
    R01, R00,  R11, R10,  R20, R21\
  ) \
  { \
    { R00, K01, K02, K03, K04 }, \
    { K10, K11, K12, K13, KC_NO }, \
    { R01, K21, K22, K23, K24 }, \
    { LB4, LB3, LBT, LB2, LB1 }, \
    { R10, R11, KC_NO, R20, R21 }, \
  }
