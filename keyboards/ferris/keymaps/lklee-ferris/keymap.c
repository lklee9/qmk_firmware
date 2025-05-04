// this is the style you want to emulate.
// This is the canonical layout file for the Quantum project. If you want to add another keyboard,

#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.

enum ferris_layers {
  _ABC,
  _EX,
  _SY,
  _FN,
  _GM,
};


#define KC_OSMG OSM(MOD_LGUI)
#define KC_OSMA OSM(MOD_LALT)
#define KC_OSMC OSM(MOD_LCTL)
#define KC_OSMS OSM(MOD_LSFT)
#define KC_CTDN LCTL(KC_DOWN)
#define KC_CTUP LCTL(KC_UP)
#define KC_ALLT LALT(KC_LEFT)
#define KC_ALRT LALT(KC_RIGHT)

#define KC_CTLZ LCTL(KC_Z)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /*
  [_APT] = LAYOUT(
    KC_W,    KC_G,    KC_D,    KC_F,    KC_B,            KC_Q,    KC_L,    KC_U,    KC_O,    KC_Y,
    KC_R,    KC_S,    KC_T,    KC_H,    KC_K,            KC_J,    KC_N,    KC_E,    KC_A,    KC_I,
    KC_X,    KC_C,    KC_M,    KC_P,    KC_V,            KC_Z,    KC_COMM, KC_DOT,  KC_QUOT, KC_SLSH,
                                  MO(_EX), KC_LSFT, KC_SPC,  MO(_SY)
  ),
  */
/*   [_SY] = LAYOUT(
    KC_TILD, KC_LBRC, KC_LCBR, KC_LPRN, KC_UNDS,         KC_MINS, KC_7,    KC_8,    KC_9,    KC_GRV,
    KC_OSMS, KC_OSMG, KC_OSMA, KC_OSMC, KC_QUOT,         KC_0,    KC_4,    KC_5,    KC_6,    KC_DOT,
    KC_PIPE, KC_RBRC, KC_RCBR, KC_RPRN, KC_PLUS,         KC_EQL,  KC_1,    KC_2,    KC_3,    KC_BSLS,
                                  MO(_FN), KC_LSFT, KC_ENT,  KC_TRNS
  ),
  [_EX] = LAYOUT(
    KC_TAB,  KC_HOME, KC_UP,   KC_END,  KC_PGUP,         KC_CTUP, KC_WWW_BACK, KC_WWW_SEARCH, KC_WWW_FORWARD, TO(_GM),
    KC_BSPC, KC_LEFT, KC_DOWN, KC_RGHT, KC_DEL,          KC_ESC, KC_OSMC, KC_OSMA, KC_OSMG, KC_OSMS,
    LCTL(KC_Z), LCTL(KC_X), LCTL(KC_C), LCTL(KC_V), KC_PGDN,
                                                         KC_CTDN, KC_ALLT, KC_TRNS, KC_ALRT,KC_LGUI,
                                  KC_TRNS, KC_LSFT, KC_ENT,  MO(_FN)
  ),
  [_FN] = LAYOUT(
    KC_TILD, KC_LBRC, KC_LCBR, KC_LPRN, KC_UNDS,         KC_F12,  KC_F7,   KC_F8,   KC_F9,   QK_BOOT,
    KC_OSMS, KC_OSMG, KC_OSMA, KC_OSMC, KC_SCLN,         KC_F11,  KC_F4,   KC_F5,   KC_F6,   KC_DOT,
    KC_PIPE, KC_RBRC, KC_RCBR, KC_RPRN, KC_PLUS,         KC_F10,  KC_F1,   KC_F2,   KC_F3,   QK_RBT,
                                  KC_TRNS, KC_LSFT, KC_ENT,  KC_TRNS
  ) */
  [_ABC] = LAYOUT(
    KC_Q,            KC_P,            KC_L,            KC_C,            KC_J,            KC_X,            KC_F,            KC_O,            KC_U,            KC_MINS,
    KC_R,            KC_N,            KC_T,            KC_S,            KC_G,            KC_Y,            KC_H,            KC_E,            KC_I,            KC_A,
    LSFT_T(KC_Z),    LGUI_T(KC_B),    LCTL_T(KC_M),    LALT_T(KC_W),    KC_V,            KC_K,            LALT_T(KC_D),    LCTL_T(KC_SCLN), LGUI_T(KC_COMM), LSFT_T(KC_DOT),
                                                       LCTL_T(KC_ESC),  LT(_SY, KC_SPC), LSFT_T(KC_TAB),  LALT_T(KC_ENT)
  ),
  [_SY] = LAYOUT(
    KC_HOME,         KC_UP,           KC_END,          KC_BSPC,         KC_DEL,          KC_BSLS,         KC_7,            KC_8,            KC_9,            KC_EQL,
    KC_LEFT,         KC_DOWN,         KC_RGHT,         KC_LPRN,         KC_RPRN,         KC_SLSH,         KC_4,            KC_5,            KC_6,            KC_QUOT,
    LSFT_T(KC_BSPC), LGUI_T(KC_DOT),  LCTL_T(KC_DEL),  LALT_T(KC_LBRC), KC_RBRC,         KC_0,            LALT_T(KC_1),    LCTL_T(KC_2),    LGUI_T(KC_3),    LSFT_T(KC_GRV),
                                                       LCTL_T(KC_ESC),  KC_TRNS,         LSFT_T(KC_TAB),  LT(_FN, KC_ENT)
  ),
  [_FN] = LAYOUT(
    KC_HOME,         KC_UP,           KC_END,          KC_LCBR,         KC_RCBR,         KC_F12,          KC_F7,           KC_F8,           KC_F9,           QK_BOOT,
    KC_LEFT,         KC_DOWN,         KC_RGHT,         KC_LPRN,         KC_RPRN,         KC_F11,          KC_F4,           KC_F5,           KC_F6,           TO(_GM),
    LSFT_T(KC_BSPC), LGUI_T(KC_DOT),  LCTL_T(KC_DEL),  LALT_T(KC_LBRC), KC_RBRC,         KC_0,            LALT_T(KC_F1),   LCTL_T(KC_F2),   LGUI_T(KC_F3),   LSFT_T(KC_GRV),
                                                       LCTL_T(KC_ESC),  KC_TRNS,         LSFT_T(KC_TAB),  KC_TRNS
  ),
  [_GM] = LAYOUT(
    KC_Q,            KC_P,            KC_L,            KC_C,            KC_J,            KC_X,            KC_F,            KC_O,            KC_U,            TO(0),
    KC_R,            KC_N,            KC_T,            KC_S,            KC_G,            KC_Y,            KC_H,            KC_E,            KC_I,            KC_A,
    LSFT_T(KC_Z),    LGUI_T(KC_B),    LCTL_T(KC_M),    LALT_T(KC_W),    KC_V,            KC_K,            LALT_T(KC_D),    LCTL_T(KC_SCLN), LGUI_T(KC_COMM), LSFT_T(KC_DOT),
                                                       KC_ESC,  KC_SPC, KC_TAB,  KC_ENT
  ),
};
