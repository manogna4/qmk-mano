/*
Copyright 2017 Danny Nguyen <danny@hexwire.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef CONFIG_USER_H
#define CONFIG_USER_H

#include "config_common.h"

/* Use I2C or Serial, not both */

#define USE_SERIAL
// #define USE_I2C

// #define UNICODE_ENABLE

/* Select hand configuration */

#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

#define TAPPING_TERM 200

#define ONESHOT_TAP_TOGGLE 1000  /* Tapping this number of times holds the key until tapped this number of times again. this is for osm(mod) */
#define ONESHOT_TIMEOUT 1000  /* Time (in ms) before the one shot key is released */

#define TAPPING_TOGGLE 3 /*number of times to tap a key to lock the layer for TT(layer)*/

#define IGNORE_MOD_TAP_INTERRUPT /*makes it possible to do rolling combos (zx) with keys that convert to other keys on hold*/
#define PREVENT_STUCK_MODIFIERS /* when switching layers, this will release all mods */

#undef RGBLED_NUM
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 12
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8

#endif
