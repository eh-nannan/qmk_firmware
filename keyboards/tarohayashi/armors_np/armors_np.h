// Copyright 2021 Hayashi (@w_vwbw)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

#define LAYOUT( \
      k00, k01, k02, k03, k04, \
    k10, k11, k12, k13, k14, k15, \
    k20, k21, k22, k23, k24, k25 \
) \
{ \
    { k00, k01, k02, k03, k04, KC_NO }, \
    { k10, k11, k12, k13, k14, k15 },  \
    { k20, k21, k22, k23, k24, k25 } \
}
