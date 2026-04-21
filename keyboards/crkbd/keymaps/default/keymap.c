#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif

#define KC_COPY LCTL(KC_C)
#define KC_CUT LCTL(KC_X)
#define KC_PSTE LCTL(KC_V)

#define KC_UNDO LCTL(KC_Z)
#define KC_AGIN LCTL(KC_Y)

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM =
    LAYOUT_split_3x6_3_ex2(
        '*', 'L', 'L', 'L', 'L', 'L', '*',   '*', 'R', 'R', 'R', 'R', 'R', '*',
        '*', 'L', 'L', 'L', 'L', 'L', '*',   '*', 'R', 'R', 'R', 'R', 'R', '*',
        '*', 'L', 'L', 'L', 'L', 'L',             'R', 'R', 'R', 'R', 'R', '*',
                            '*', '*', '*',   '*', '*', '*'
    );

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3_ex2(
        KC_LALT, KC_Q, KC_W, KC_F, KC_P, KC_B, KC_LGUI, KC_RGUI, KC_J, KC_L, KC_U, KC_Y, KC_QUOT, KC_RALT,
        KC_LCTL, LGUI_T(KC_A), LALT_T(KC_R), LCTL_T(KC_S), LSFT_T(KC_T), KC_G, KC_LSFT, KC_RSFT, KC_M, RSFT_T(KC_N), RCTL_T(KC_E), RALT_T(KC_I), RGUI_T(KC_O), KC_RCTL,
        KC_LSFT, KC_Z, KC_X, KC_C, KC_D, KC_V, KC_K, KC_H, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
        LT(1,KC_ESC), LT(2,KC_SPC), LT(3,KC_TAB), LT(4,KC_ENT), LT(5,KC_BSPC), LT(6,KC_DEL)
    ),

    [1] = LAYOUT_split_3x6_3_ex2(
        KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, RM_TOGG, RM_NEXT, KC_NO, KC_NO, KC_NO, KC_TRNS,
        KC_TRNS, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO, KC_TRNS, KC_TRNS, KC_PWR, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, KC_TRNS,
        KC_TRNS, KC_NO, KC_RALT, DF(0), DF(1), KC_NO, KC_SLEP, KC_NO, RM_VALD, RM_VALU, KC_NO, KC_TRNS,
        KC_NO, KC_NO, KC_NO, KC_MSTP, KC_MPLY, KC_MUTE
    ),

    [2] = LAYOUT_split_3x6_3_ex2(
        KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_AGIN, KC_PSTE, KC_COPY, KC_CUT, KC_UNDO, KC_TRNS,
        KC_TRNS, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO, KC_TRNS, KC_TRNS, KC_CAPS, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_TRNS,
        KC_TRNS, KC_NO, KC_RALT, DF(0), DF(2), KC_NO, KC_INS, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_TRNS,
        KC_NO, KC_NO, KC_NO, KC_ENT, KC_BSPC, KC_DEL
    ),

    [3] = LAYOUT_split_3x6_3_ex2(
        KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_AGIN, KC_PSTE, KC_COPY, KC_CUT, KC_UNDO, KC_TRNS,
        KC_TRNS, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO, KC_TRNS, KC_TRNS, KC_NO, MS_WHLL, MS_DOWN, MS_UP, MS_RGHT, KC_TRNS,
        KC_TRNS, KC_NO, KC_RALT, DF(0), DF(3), KC_NO, KC_NO, MS_WHLL, MS_WHLD, MS_WHLU, MS_WHLR, KC_TRNS,
        KC_NO, KC_NO, KC_NO, MS_BTN2, MS_BTN1, MS_BTN3
    ),

    [4] = LAYOUT_split_3x6_3_ex2(
        KC_TRNS, KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS,
        KC_TRNS, KC_COLN, KC_DLR, KC_PERC, KC_CIRC, KC_PLUS, KC_TRNS, KC_TRNS, KC_NO, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_TRNS,
        KC_TRNS, KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_PIPE, KC_NO, DF(4), DF(0), KC_RALT, KC_NO, KC_TRNS,
        KC_LPRN, KC_RPRN, KC_UNDS, KC_NO, KC_NO, KC_NO
    ),

    [5] = LAYOUT_split_3x6_3_ex2(
        KC_TRNS, KC_LBRC, KC_7, KC_8, KC_9, KC_RBRC, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS,
        KC_TRNS, KC_SCLN, KC_4, KC_5, KC_6, KC_EQL, KC_TRNS, KC_TRNS, KC_NO, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_TRNS,
        KC_TRNS, KC_GRV, KC_1, KC_2, KC_3, KC_BSLS, KC_NO, DF(5), DF(0), KC_RALT, KC_NO, KC_TRNS,
        KC_DOT, KC_0, KC_MINS, KC_NO, KC_NO, KC_NO
    ),

    [6] = LAYOUT_split_3x6_3_ex2(
        KC_TRNS, KC_F12, KC_F6, KC_F7, KC_F8, KC_PSCR, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS,
        KC_TRNS, KC_F11, KC_F4, KC_F5, KC_F6, KC_SCRL, KC_TRNS, KC_TRNS, KC_NO, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_TRNS,
        KC_TRNS, KC_F10, KC_F1, KC_F2, KC_F3, KC_PAUS, KC_NO, DF(6), DF(0), KC_RALT, KC_NO, KC_TRNS,
        KC_RGUI, KC_SPC, KC_TAB, KC_NO, KC_NO, KC_NO
    )
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LALT_T(KC_R):
            return 300;
        case RALT_T(KC_I):
            return 300;
        case LGUI_T(KC_A):
            return 1000;
        case RGUI_T(KC_O):
            return 1000;
        default:
            return TAPPING_TERM; // Default 200ms
    }
}

#ifdef OTHER_KEYMAP_C
#    include OTHER_KEYMAP_C
#endif // OTHER_KEYMAP_C
