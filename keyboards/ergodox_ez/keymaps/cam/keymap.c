#include "ergodox_ez.h"
#include "debug.h"
#include "action_layer.h"

#define BASE 0 // default layer
#define MDIA 1 // media keys

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Keymap 0: Basic layer
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |   =    |   1  |   2  |   3  |   4  |   5  | ESC  |           | ESC  |   6  |   7  |   8  |   9  |   0  |   -    |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * | Tab    |   Q  |   W  |   E  |   R  |   T  |  \   |           |  [   |   Y  |   U  |   I  |   O  |   P  |   ]    |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |Ctrl/Esc|   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |   ;  |   '"   |
 * |--------+------+------+------+------+------| Hyper|           | ~L1  |------+------+------+------+------+--------|
 * | LShift |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |   /  | RShift |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   | Mute |  `~  |  \   | Left | Right|                                       | Left | Down |  Up  | Right|Ply/Pse|
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        | LAlt | LCtl |       | RCtl | RAlt |
 *                                 ,------|------|------|       |------+-------------.
 *                                 |      |      | Home |       | PgUp |      |      |
 *                                 | Enter| LGUI |------|       |------| Tab  |Space |
 *                                 |      |      | End  |       | PgDn |      |      |
 *                                 `--------------------'       `--------------------'
 */
// If it accepts an argument (i.e, is a function), it doesn't need KC_.
// Otherwise, it needs KC_*
[BASE] = KEYMAP(  // layer 0 : default
        // left hand
        KC_EQL        , KC_1   , KC_2    , KC_3    , KC_4    , KC_5 , KC_ESC       ,
        KC_TAB        , KC_Q   , KC_W    , KC_E    , KC_R    , KC_T , KC_BSLS      ,
        CTL_T(KC_ESC) , KC_A   , KC_S    , KC_D    , KC_F    , KC_G ,
        KC_LSPO       , KC_Z   , KC_X    , KC_C    , KC_V    , KC_B , ALL_T(KC_NO) ,
        KC_MUTE       , KC_GRV , KC_BSLS , KC_LEFT , KC_RGHT ,
                                                        KC_LALT     , KC_LCTL      ,
                                                                      KC_HOME      ,
                                              KC_ENT , GUI_T(KC_NO) , KC_END       ,
        // right hand
        KC_ESC        , KC_6    , KC_7     , KC_8    , KC_9     , KC_0    , KC_MINS ,
        KC_LBRC       , KC_Y    , KC_U     , KC_I    , KC_O     , KC_P    , KC_RBRC ,
                        KC_H    , KC_J     , KC_K    , KC_L     , KC_SCLN , KC_QUOT ,
        MO(MDIA)      , KC_N    , KC_M     , KC_COMM , KC_DOT   , KC_SLSH , KC_RSPC ,
                        KC_LEFT ,  KC_DOWN , KC_UP   , KC_RIGHT , KC_MPLY ,
        KC_RCTL , KC_RALT,
        KC_PGUP ,
        KC_PGDN , KC_BSPC , KC_SPC
    ),
/* Keymap 1: Media Layer
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
   |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |           |      |Vol Up|VolDwn|      |      |      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
   |        |      |      |      |      |      |------|           |------| F13  |      |      |      |      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
   |        |      |      |      |      |      |      |           |      |      |      |      |      |   \  |        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     |      |      |      |      |      |                                       |      |      |      |      |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      |      |      |
 *                                 |      |      |------|       |------|      |      |
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
// MDIA
[MDIA] = KEYMAP(
       // left hand
       KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS ,
       KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS ,
       KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS ,
       KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS ,
       KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS ,
                                                         KC_TRNS , KC_TRNS ,
                                                                   KC_TRNS ,
                                               KC_TRNS , KC_TRNS , KC_TRNS ,
       // right hand
       KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS ,
       KC_TRNS , KC_VOLD , KC_VOLU , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS ,
                 KC_F13  , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS ,
       KC_TRNS , KC_MPRV , KC_MNXT , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS ,
                           KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS ,
       KC_TRNS , KC_TRNS ,
       KC_TRNS ,
       KC_TRNS , KC_TRNS , KC_TRNS
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

// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {

};

// Runs constantly in the background, in a loop.
void matrix_scan_user(void) {

    uint8_t layer = biton32(layer_state);

    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
      // TODO: Make this relevant to the ErgoDox EZ.
        case 1:
            ergodox_right_led_1_on();
            break;
        case 2:
            ergodox_right_led_2_on();
            break;
        case 3:
            ergodox_right_led_3_on();
            break;
        default:
            // none
            break;
    }

};
