#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif

#define KC_COPY LCTL(KC_C)
#define KC_CUT LCTL(KC_X)
#define KC_PSTE LCTL(KC_V)

#define KC_UNDO LCTL(KC_Z)
#define KC_AGIN LCTL(KC_Y)

// const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM =
//     LAYOUT_split_3x6_3_ex2(
//         '*', 'L', 'L', 'L', 'L', 'L', '*',   '*', 'R', 'R', 'R', 'R', 'R', '*',
//         '*', 'L', 'L', 'L', 'L', 'L', '*',   '*', 'R', 'R', 'R', 'R', 'R', '*',
//         '*', 'L', 'L', 'L', 'L', 'L',             'R', 'R', 'R', 'R', 'R', '*',
//                             '*', '*', '*',   '*', '*', '*'
//     );

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3_ex2(
        KC_LALT, KC_Q, KC_W, KC_F, KC_P, KC_B, KC_LGUI, KC_RGUI, KC_J, KC_L, KC_U, KC_Y, KC_QUOT, DF(7),
        CW_TOGG, KC_A, KC_R, LCTL_T(KC_S), LSFT_T(KC_T), KC_G, KC_LSFT, KC_RSFT, KC_M, RSFT_T(KC_N), RCTL_T(KC_E), KC_I, KC_O, KC_RSFT,
        KC_LCTL, LGUI_T(KC_Z), LALT_T(KC_X), KC_C, KC_D, KC_V, KC_K, KC_H, KC_COMM, RALT_T(KC_DOT), RGUI_T(KC_SLSH), KC_RCTL,
        LT(1,KC_ESC), LT(2,KC_SPC), LT(3,KC_TAB), LT(4,KC_ENT), LT(5,KC_BSPC), LT(6,KC_DEL)
    ),

    [1] = LAYOUT_split_3x6_3_ex2(
        QK_RBT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, RM_TOGG, RM_NEXT, KC_NO, KC_NO, KC_NO, KC_TRNS,
        QK_BOOT, KC_NO, KC_NO, KC_LCTL, KC_LSFT, KC_NO, KC_TRNS, KC_TRNS, KC_PWR, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, KC_TRNS,
        KC_TRNS, KC_LGUI, KC_LALT, DF(0), DF(1), KC_NO, KC_SLEP, KC_NO, RM_VALD, RM_VALU, KC_NO, KC_TRNS,
        KC_NO, KC_NO, KC_NO, KC_MSTP, KC_MPLY, KC_MUTE
    ),

    [2] = LAYOUT_split_3x6_3_ex2(
        KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_AGIN, KC_PSTE, KC_COPY, KC_CUT, KC_UNDO, KC_TRNS,
        KC_TRNS, KC_NO, KC_NO, KC_LCTL, KC_LSFT, KC_NO, KC_TRNS, KC_TRNS, KC_CAPS, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_TRNS,
        KC_TRNS, KC_LGUI, KC_LALT, DF(0), DF(2), KC_NO, KC_INS, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_TRNS,
        KC_NO, KC_NO, KC_NO, KC_ENT, KC_BSPC, KC_DEL
    ),

    [3] = LAYOUT_split_3x6_3_ex2(
        KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_AGIN, KC_PSTE, KC_COPY, KC_CUT, KC_UNDO, KC_TRNS,
        KC_TRNS, KC_NO, KC_NO, KC_LCTL, KC_LSFT, KC_NO, KC_TRNS, KC_TRNS, KC_NO, MS_LEFT, MS_DOWN, MS_UP, MS_RGHT, KC_TRNS,
        KC_TRNS, KC_LGUI, KC_LALT, DF(0), DF(3), KC_NO, KC_NO, MS_WHLL, MS_WHLD, MS_WHLU, MS_WHLR, KC_TRNS,
        KC_NO, KC_NO, KC_NO, MS_BTN2, MS_BTN1, MS_BTN3
    ),

    [4] = LAYOUT_split_3x6_3_ex2(
        KC_TRNS, KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS,
        KC_TRNS, KC_COLN, KC_DLR, KC_PERC, KC_CIRC, KC_PLUS, KC_TRNS, KC_TRNS, KC_NO, KC_LSFT, KC_LCTL, KC_NO, KC_NO, KC_TRNS,
        KC_TRNS, KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_PIPE, KC_NO, DF(4), DF(0), KC_RALT, KC_RGUI, KC_TRNS,
        KC_LPRN, KC_RPRN, KC_UNDS, KC_NO, KC_NO, KC_NO
    ),

    [5] = LAYOUT_split_3x6_3_ex2(
        KC_TRNS, KC_LBRC, KC_7, KC_8, KC_9, KC_RBRC, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS,
        KC_TRNS, KC_SCLN, KC_4, KC_5, KC_6, KC_EQL, KC_TRNS, KC_TRNS, KC_NO, KC_LSFT, KC_LCTL, KC_NO, KC_NO, KC_TRNS,
        KC_TRNS, KC_GRV, KC_1, KC_2, KC_3, KC_BSLS, KC_NO, DF(5), DF(0), KC_RALT, KC_RGUI, KC_TRNS,
        KC_DOT, KC_0, KC_MINS, KC_NO, KC_NO, KC_NO
    ),

    [6] = LAYOUT_split_3x6_3_ex2(
        KC_TRNS, KC_F12, KC_F7, KC_F8, KC_F9, KC_PSCR, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, QK_RBT,
        KC_TRNS, KC_F11, KC_F4, KC_F5, KC_F6, KC_SCRL, KC_TRNS, KC_TRNS, KC_NO, KC_LSFT, KC_LCTL, KC_NO, KC_NO, QK_BOOT,
        KC_TRNS, KC_F10, KC_F1, KC_F2, KC_F3, KC_PAUS, KC_NO, DF(6), DF(0), KC_RALT, KC_RGUI, KC_TRNS,
        KC_RGUI, KC_SPC, KC_TAB, KC_NO, KC_NO, KC_NO
    ),

    [7] = LAYOUT_split_3x6_3_ex2(
        KC_LALT, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_LGUI, KC_RGUI, KC_Y, KC_U, KC_I, KC_O, KC_P, DF(0),
        KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_LSFT, KC_RSFT, KC_H, KC_J, KC_K, KC_L, KC_QUOT, KC_RCTL,
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
        KC_ESC, KC_SPC, KC_TAB, KC_ENT, KC_BSPC, KC_DEL
    )
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LALT_T(KC_R):
            return 300;
        case RALT_T(KC_I):
            return 300;
        case LGUI_T(KC_A):
            return 800;
        case RGUI_T(KC_O):
            return 800;
        default:
            return TAPPING_TERM; // Default 200ms
    }
}

void keyboard_post_init_user(void) {
    rgb_matrix_enable();
    rgb_matrix_mode(RGB_MATRIX_SOLID_COLOR);
    rgb_matrix_sethsv(HSV_YELLOW);
}

layer_state_t default_layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
        case 7: // Gaming Layer DF(7)
            rgb_matrix_sethsv_noeeprom(HSV_BLUE);
            break;
        case 0: // Normal Layer DF(0)
            rgb_matrix_sethsv_noeeprom(HSV_YELLOW);
            break;
        default:
            break;
    }
    return state;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(0, KC_A): // Layer 0, Tap = 'a', Hold = Ctrl + Shift + 'b'
            if (!record->tap.count && record->event.pressed) {
                register_code16(KC_LCTL);
                register_code16(KC_LSFT);
                register_code16(KC_B); // Replace KC_B with desired second key
                return false; // Prevent default tap processing
            }
            return true; // Allow normal tap processing
    }
    return true;
}

#ifdef OTHER_KEYMAP_C
#    include OTHER_KEYMAP_C
#endif // OTHER_KEYMAP_C
