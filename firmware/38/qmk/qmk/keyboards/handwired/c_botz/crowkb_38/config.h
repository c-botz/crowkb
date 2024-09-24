// Copyright 2024 Ethan Wright (@c-botz)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define MASTER_LEFT

#define OLED_FONT_H "lib/glcdfont.c"

#define ENCODERS_PAD_A { B6 }
#define ENCODERS_PAD_B { F7 }

#define ENCODERS_PAD_A_RIGHT { B6 }
#define ENCODERS_PAD_B_RIGHT { F7 }

#define TAPPING_TERM 200

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
