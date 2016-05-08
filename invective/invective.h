#ifndef INVECTIVE_H
#define INVECTIVE_H

#include "matrix.h"
#include "keymap_common.h"
#ifdef BACKLIGHT_ENABLE
	#include "backlight.h"
#endif
#include <avr/io.h>
#include <stddef.h>

// This a shortcut to help you visually see your layout.
// The following is an example using the Planck MIT layout
// The first section contains all of the arguements
// The second converts the arguments into a two-dimensional array
#define KEYMAP( \
  k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, \
  k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, \
  k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, \
  k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, k3c, \
  k40, k41, k42, k43, k44, k45, k46, k47, k48, k49, k4a, k4b, k4c \
) \
{ \
	{ k00, k01, k02, k03, k04, k05, KC_NO, k06, k07, k08, k09, k0a, k0b}, \
	{ k10, k11, k12, k13, k14, k15, KC_NO, k16, k17, k18, k19, k1a, k1b}, \
	{ k20, k21, k22, k23, k24, k25, KC_NO, k26, k27, k28, k29, k2a, k2b}, \
	{ k30, k31, k32, k33, k34, k35,   k36, k37, k38, k39, k3a, k3b, k3c }, \
	{ k40, k41, k42, k43, k44, k45,   k46, k47, k48, k49, k4a, k4b, k4c } \
}

void matrix_init_user(void);
void matrix_scan_user(void);
void process_action_user(keyrecord_t *record);
void led_set_user(uint8_t usb_led);

#endif
