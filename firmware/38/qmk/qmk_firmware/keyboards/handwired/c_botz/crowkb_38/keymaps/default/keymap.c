    // Copyright 2023 QMK
    // SPDX-License-Identifier: GPL-2.0-or-later

    #include QMK_KEYBOARD_H

    #define GUITAB LGUI_T(KC_TAB)
    #define SFTENT RSFT_T(KC_ENT)
    #define LT2DEL LT(2, KC_DEL)
    #define CTLESC LCTL_T(KC_ESC)
    #define ALTBSL RALT_T(KC_BSLS)

    enum {
        ASTAMP = 0,
        LTCIRC = 1,
        GRVTLD = 2
    };

    tap_dance_action_t tap_dance_actions[] = {
    [ASTAMP] = ACTION_TAP_DANCE_DOUBLE(KC_ASTR, KC_AMPR),
    [LTCIRC] = ACTION_TAP_DANCE_DOUBLE(KC_LT, KC_CIRC),
    [GRVTLD] = ACTION_TAP_DANCE_DOUBLE(KC_GRV, KC_TILD),
    };

    const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
        [0] = LAYOUT(
    //         ,--------------------------------------------.                    ,-------------------------------------------.
                    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        CTLESC,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                          KC_H,   KC_J,    KC_K,    KC_L, KC_SCLN, ALTBSL,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
                    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,
    //         |--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                                                             KC_MUTE,    XXXXXXX,
    //                                    | -------+--------+--------|  |--------+--------+--------|
                                            GUITAB,  KC_SPC,   MO(1),     LT2DEL,  SFTENT, KC_BSPC
                                        //`------------------------'   `--------------------------'
        ),
        [1] = LAYOUT(
    //         ,--------------------------------------------.                    ,-------------------------------------------.
                KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                      KC_MINS, KC_LCBR, KC_RCBR, TD(ASTAMP), KC_PLUS,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_LGUI,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_UNDS, KC_LPRN, KC_RPRN, KC_QUOT, KC_DQT,  TD(GRVTLD),
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
                    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,                       KC_EQL, KC_LBRC, KC_RBRC, TD(LTCIRC), KC_RABK,
    //         |--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                                                              _______,    _______,
    //                                    | -------+--------+--------|  |--------+--------+--------|
                                            _______, _______, _______,     KC_DOT, _______, _______
                                        //`------------------------'   `--------------------------'
        ),
        [2] = LAYOUT(
    //         ,--------------------------------------------.                    ,-------------------------------------------.
                XXXXXXX,   KC_F1,   KC_F2,   KC_F3,   KC_F4,                      KC_PSCR, KC_PAUS, XXXXXXX, XXXXXXX,   TG(3),
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        XXXXXXX, XXXXXXX,   KC_F5,   KC_F6,   KC_F7,   KC_F8,                      KC_PGUP, KC_HOME,   KC_UP,  KC_END, XXXXXXX, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
                XXXXXXX,   KC_F9,  KC_F10,  KC_F11,  KC_F12,                      KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX, 
    //         |--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                                                              _______,    _______,
    //                                    | -------+--------+--------|  |--------+--------+--------|
                                            _______, _______, _______,    _______, _______, _______
                                        //`------------------------'   `--------------------------'
        ),
        [3] = LAYOUT(
    //         ,--------------------------------------------.                    ,-------------------------------------------.
                    KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   TG(3),
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        XXXXXXX, KC_LSFT,    KC_A,    KC_S,    KC_D,    KC_F,                         KC_L,    KC_P,    KC_I, XXXXXXX, XXXXXXX, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
                KC_LCTL,    KC_Z,    KC_X,    KC_C,    KC_B,                         KC_N,    KC_M,    KC_V, XXXXXXX, XXXXXXX, 
    //         |--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                                                              _______,    _______,
    //                                    | -------+--------+--------|  |--------+--------+--------|
                                            KC_LALT,  KC_SPC,  KC_ESC,    XXXXXXX, XXXXXXX, XXXXXXX
                                        //`------------------------'   `--------------------------'
        )
    };

    #if defined(ENCODER_MAP_ENABLE)
    const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
        [0] = { ENCODER_CCW_CW(KC_VOLU, KC_VOLD), ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN) },
        [1] = { ENCODER_CCW_CW(KC_VOLU, KC_VOLD), ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN) },
        [2] = { ENCODER_CCW_CW(KC_VOLU, KC_VOLD), ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN) },
        [3] = { ENCODER_CCW_CW(KC_VOLU, KC_VOLD), ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN) },
    };
    #endif

    #ifdef OLED_ENABLE
    static void oled_render_layer_state(void) {
        oled_write_ln_P(PSTR("Layer"), false);
        switch (get_highest_layer(layer_state)) {
            case 0:
                oled_write_ln_P(PSTR("Def"), false);
                break;
            case 1:
                oled_write_ln_P(PSTR("Symb"), false);
                break;
            case 2:
                oled_write_ln_P(PSTR("Syst"), false);
                break;
            case 3:
                oled_write_ln_P(PSTR("Game"), false);
                break;    
        }
        // Host Keyboard LED Status
        led_t led_state = host_keyboard_led_state();
        oled_write_ln_P(led_state.num_lock ? PSTR("NUM") : PSTR("    "), false);
        oled_write_ln_P(led_state.caps_lock ? PSTR("CAPS") : PSTR("    "), false);
        oled_write_ln_P(led_state.scroll_lock ? PSTR("SCR") : PSTR("    "), false);
    }

    static void render_logo(void) {
        static const char PROGMEM qmk_logo[] = {
            0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F, 0x90, 0x91, 0x92, 0x93, 0x94,
            0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF, 0xB0, 0xB1, 0xB2, 0xB3, 0xB4,
            0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7, 0xC8, 0xC9, 0xCA, 0xCB, 0xCC, 0xCD, 0xCE, 0xCF, 0xD0, 0xD1, 0xD2, 0xD3, 0xD4, 0x00
        };

        oled_write_P(qmk_logo, false);
    }

    oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (!is_keyboard_left()){
        return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
    } else {
        return OLED_ROTATION_270;
    } 
    return rotation;
    }

    bool oled_task_user(void) {
        if (is_keyboard_left()) {
            oled_render_layer_state();  // Renders the current keyboard state (layer, lock, caps, scroll, etc)
        } else {
        render_logo();  // Turns on scrolling
        }
        return false;
    }
    #endif

