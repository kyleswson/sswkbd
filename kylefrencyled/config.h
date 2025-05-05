#ifndef CONFIG_H
#define CONFIG_H

#define MASTER_LEFT
#define SPLIT_USB_DETECT

/* key matrix size */
#define MATRIX_ROWS 10
#define MATRIX_COLS 9

/* key matrix pins */
#define MATRIX_ROW_PINS { F4, F5, F6, F7, B1 }
#define MATRIX_COL_PINS { B3, B2, B6, B5, B4, E6, D7, C6, D4 }
#define MATRIX_ROW_PINS_RIGHT { F4, F5, F6, F7, B1 }
#define MATRIX_COL_PINS_RIGHT { D4, C6, D7, E6, B4, B5, B6, B2, B3 }
// #define USE_I2C
#define SOFT_SERIAL_PIN D3

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Encoders */
#define ENCODERS_PAD_A_RIGHT { D5 }
#define ENCODERS_PAD_B_RIGHT { B0 }
#define ENCODER_RESOLUTIONS { 4 }

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#undef LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#undef LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

#define SPLIT_OLED_ENABLE
#define OLED_TIMEOUT 300000

#define SPLIT_MODS_ENABLE
#define SPLIT_LED_STATE_ENABLE
#define SPLIT_LAYER_STATE_ENABLE

#define CMK 1
#define NUM 2
#define SYM 3
#define FNC 4

#endif