/*
Copyright 2012 Jun Wako <wakojun@gmail.com>

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

#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */

#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    unknown
#define PRODUCT         Chimera Ergo Mini
#define DESCRIPTION     q.m.k. keyboard firmware for Chimera Ergo Mini

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 10

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* number of backlight levels */
//#define BACKLIGHT_LEVELS 3

//#define ONESHOT_TIMEOUT 500


/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

#define PREVENT_STUCK_MODIFIERS

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
//#define NO_ACTION_MACRO
//#define NO_ACTION_FUNCTION

#define TAPPING_TERM 200
#define ONESHOT_TIMEOUT 1000 /* Time (in ms) before the one shot key is released */

/*makes it possible to do rolling combos (zx) with keys that convert to other keys on hold*/
#define IGNORE_MOD_TAP_INTERRUPT

/* when switching layers, this will release all mods */
#define PREVENT_STUCK_MODIFIERS

//UART settings for communication with the RF microcontroller
#define SERIAL_UART_BAUD 1000000
#define SERIAL_UART_DATA UDR1
#define SERIAL_UART_UBRR (F_CPU / (16UL * SERIAL_UART_BAUD) - 1)
#define SERIAL_UART_TXD_READY (UCSR1A & _BV(UDRE1))
#define SERIAL_UART_RXD_PRESENT (UCSR1A & _BV(RXC1))
#define SERIAL_UART_INIT() do { \
    	/* baud rate */ \
    	UBRR1L = SERIAL_UART_UBRR; \
    	/* baud rate */ \
    	UBRR1H = SERIAL_UART_UBRR >> 8; \
    	/* enable TX and RX */ \
    	UCSR1B = _BV(TXEN1) | _BV(RXEN1); \
    	/* 8-bit data */ \
    	UCSR1C = _BV(UCSZ11) | _BV(UCSZ10); \
  	} while(0)

#endif
