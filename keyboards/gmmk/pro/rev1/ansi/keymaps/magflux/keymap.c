#include QMK_KEYBOARD_H

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // The FN key by default maps to a momentary toggle to layer 1 to provide access to the RESET key (to put the board into bootloader mode). Without
  // this mapping, you have to open the case to hit the button on the bottom of the PCB (near the USB cable attachment) while plugging in the USB
  // cable to get the board into bootloader mode - definitely not fun when you're working on your QMK builds. Remove this and put it back to KC_RGUI
  // if that's your preference.
  //
  // To put the keyboard in bootloader mode, use FN+backslash. If you accidentally put it into bootloader, you can just unplug the USB cable and
  // it'll be back to normal when you plug it back in.
  //
  // This keyboard defaults to 6KRO instead of NKRO for compatibility reasons (some KVMs and BIOSes are incompatible with NKRO).
  // Since this is, among other things, a "gaming" keyboard, a key combination to enable NKRO on the fly is provided for convenience.
  // Press Fn+N to toggle between 6KRO and NKRO. This setting is persisted to the EEPROM and thus persists between restarts.
  [0] = LAYOUT(
    KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,           KC_MUTE,
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,          KC_HOME,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,          KC_PGUP,
    MO(1),   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,           KC_PGDN,
    KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT, KC_UP,   KC_END,
    KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                             KC_RALT, KC_RGUI, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
  ),

  [1] = LAYOUT(
    KC_SLEP, _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_INS,           _______,
    _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
    _______, RGB_MOD,  RGB_HUI, RGB_SAI, RESET,   _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
    _______, RGB_RMOD, RGB_HUD, RGB_SAD, _______, _______, _______, _______, _______, RGB_TOG, _______, _______,          _______,          _______,
    KC_CAPS,           _______, _______, _______, _______, _______, NK_TOGG, KC_MSTP, KC_MPRV, KC_MNXT, KC_MPLY,          _______, RGB_VAI, _______,
    _______, _______,  _______,                            _______,                            _______, _______, _______, RGB_SPD, RGB_VAD, RGB_SPI
  ),
};
// clang-format on

bool encoder_update_user(uint8_t index, bool clockwise) {
  if (clockwise) {
    tap_code(KC_VOLU);
  }
  else {
    tap_code(KC_VOLD);
  }

  return true;
}

bool rgb_matrix_indicators_user(void) {
 led_t led_state = host_keyboard_led_state();

  // Change side LEDs, start at index of 82 and end at 97
  if (led_state.caps_lock) {
    rgb_matrix_set_color(67, 0xFF, 0xFF, 0xFF);
    rgb_matrix_set_color(68, 0xFF, 0xFF, 0xFF);
    rgb_matrix_set_color(70, 0xFF, 0xFF, 0xFF);
    rgb_matrix_set_color(71, 0xFF, 0xFF, 0xFF);
    rgb_matrix_set_color(73, 0xFF, 0xFF, 0xFF);
    rgb_matrix_set_color(74, 0xFF, 0xFF, 0xFF);
    rgb_matrix_set_color(76, 0xFF, 0xFF, 0xFF);
    rgb_matrix_set_color(77, 0xFF, 0xFF, 0xFF);
    rgb_matrix_set_color(80, 0xFF, 0xFF, 0xFF);
    rgb_matrix_set_color(81, 0xFF, 0xFF, 0xFF);
    rgb_matrix_set_color(83, 0xFF, 0xFF, 0xFF);
    rgb_matrix_set_color(84, 0xFF, 0xFF, 0xFF);
    rgb_matrix_set_color(87, 0xFF, 0xFF, 0xFF);
    rgb_matrix_set_color(88, 0xFF, 0xFF, 0xFF);
    rgb_matrix_set_color(91, 0xFF, 0xFF, 0xFF);
    rgb_matrix_set_color(92, 0xFF, 0xFF, 0xFF);
  }

  return true;
}
