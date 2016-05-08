// This is the canonical layout file for the Quantum project. If you want to add another keyboard,
// this is the style you want to emulate.

#include "invective.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = KEYMAP( /* Base */
  KC_ESC, KC_1,    KC_2,   KC_3,    KC_4,    KC_5,              KC_6,    KC_7,   KC_8,     KC_9,    KC_0,    KC_DEL, \
  KC_TAB, KC_Q,    KC_W,   KC_E,    KC_R,    KC_T,              KC_Y,    KC_U,   KC_I,     KC_O,    KC_P,    KC_LBRC, \
  KC_CAPS,KC_A,    KC_S,   KC_D,    KC_F,    KC_G,              KC_H,    KC_J,   KC_K,     KC_L,    KC_SCLN, KC_QUOT, \
  KC_LSFT,KC_Z,    KC_X,   KC_C,    KC_V,    KC_B,     KC_ENT,  KC_N,    KC_M,   KC_COMM,  KC_DOT,  KC_SLSH, KC_RSFT, \
  KC_NO,  KC_PAUS, KC_GRV, KC_LALT, KC_LCTL, KC_LGUI,  KC_BSPC, KC_SPC,  KC_CAPS, KC_MINS, KC_RBRC, KC_EQL,  KC_BSLS
),
};

const uint16_t PROGMEM fn_actions[] = {

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
          if (record->event.pressed) {
            register_code(KC_RSFT);
          } else {
            unregister_code(KC_RSFT);
          }
        break;
      }
    return MACRO_NONE;
};
