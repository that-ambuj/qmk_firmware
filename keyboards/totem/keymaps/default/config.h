#pragma once

/* The way how "handedness" is decided (which half is which),
see https://docs.qmk.fm/#/feature_split_keyboard?id=setting-handedness
for more options.
*/

// #define MASTER_LEFT
// #define MASTER_RIGHT

#define EE_HANDS

#define DYNAMIC_KEYMAP_LAYER_COUNT 5

#define TAPPING_TERM 160
#define PERMISSIVE_HOLD_PER_KEY
#define RETRO_TAPPING

// Neutralize long hold of Alt and GUI keys
#define DUMMY_MOD_NEUTRALIZER_KEYCODE KC_RIGHT_CTRL

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define TAPPING_FORCE_HOLD

// Auto Shift
#define NO_AUTO_SHIFT_ALPHA
#define AUTO_SHIFT_TIMEOUT TAPPING_TERM
#define AUTO_SHIFT_NO_SETUP

#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE
#define NO_ACTION_ONESHOT

