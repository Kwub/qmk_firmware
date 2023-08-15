/* Copyright 2023 Kwabena Aduse-Poku (Kwub)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID    0x6B77  // Kwub
#define PRODUCT_ID   0x0007
#define DEVICE_VER   0x0001
#define MANUFACTURER Kwub
#define PRODUCT      MHKB

/* key matrix size */
#define MATRIX_ROWS  4
#define MATRIX_COLS  12

/* key matrix pins */
#define MATRIX_ROW_PINS \
    { F6, F4, D5, B5 }
#define MATRIX_COL_PINS \
    { F7, F5, B4, B3, D7, B2, D1, D6, D2, D4, D3, B1 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* number of backlight levels */

#ifdef BACKLIGHT_PIN
#    define BACKLIGHT_LEVELS 3
#endif

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define TAPPING_TERM 100

#ifdef RGB_DI_PIN
#    define RGBLIGHT_ANIMATIONS
#    define RGBLED_NUM        0
#    define RGBLIGHT_HUE_STEP 8
#    define RGBLIGHT_SAT_STEP 8
#    define RGBLIGHT_VAL_STEP 8
#endif
