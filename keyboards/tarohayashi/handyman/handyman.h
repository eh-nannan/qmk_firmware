// Copyright 2021 Hayashi (@w_vwbw)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

#define LAYOUT( \
    K00, K01, K02, K03, K04, \
    K10, K11, K12, K13, K14, \
    K20, K21, K22, K23, K24, \
    K30, K31, K32, K33, K34, \
    K40, K41, K42, K43, K44, \
	  LB1, LB0, LBT, LB3, LB2,  \
    R00, R01,  R10, R11,  R20, R21\
  ) \
  { \
    { K00, K01, K02, K03, K04, R00 }, \
    { K10, K11, K12, K13, K14, R01 }, \
    { K20, K21, K22, K23, K24, R10 }, \
    { K30, K31, K32, K33, K34, R11 }, \
    { K40, K41, K42, K43, K44, R21 }, \
    { LB0, LB1, LBT, LB2, LB3, R20 }, \
  }
