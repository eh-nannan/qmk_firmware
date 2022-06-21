// Copyright 2021 Hayashi (@w_vwbw)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

#define LAYOUT( \
   k00, k01,      k03, \
   k10, k11, k12, k13, \
   k20, k21,      k23, \
   k30, k31,           \
   ro1, ro2            \
 ) \
 { \
   { k00, k01, KC_NO, k03 }, \
   { k10, k11, k12, k13 }, \
   { k20, k21, KC_NO, k23 }, \
   { k30, k31, ro1, ro2 }, \
 }
