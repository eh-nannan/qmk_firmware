// Copyright 2022 Taro Hayashi (@w_vwbw)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT( \
    k000, k001, k002, k003, k004, k005, k006, k007, k008, k009, k010, k011, k012, k013, k014, \
    k100, k101, k102, k103, k104, k105, k106, k107, k108, k109, k110, k111, k112, k113, k114, \
    k200, k201, k202, k203, k204, k205, k206, k207, k208, k209, k210, k211, k212, k213, k214, \
    k300, k301, k302, k303, k304, k305, k306, k307, k308, k309, k310, k311, k312, k313, k314, \
    r00, r01,    r10, r11,    r20, r21,    r30, r31    \
) { \
    { k000, k001, k002, k003, k004, k005, k006, k007 },  \
    { k100, k101, k102, k103, k104, k105, k106, k107 },  \
    { k200, k201, k202, k203, k204, k205, k206, k207 },  \
    { k300, k301, k302, k303, k304, k305, k306, k307 },  \
    { k008, k009, k010, k011, k012, k013, k014, KC_NO }, \
    { k108, k109, k110, k111, k112, k113, k114, KC_NO }, \
    { k208, k209, k210, k211, k212, k213, k214, KC_NO }, \
    { k308, k309, k310, k311, k312, k313, k314, KC_NO }, \
    { r01, r00, r11, r10, r21, r20, r31, r30 }           \
}
