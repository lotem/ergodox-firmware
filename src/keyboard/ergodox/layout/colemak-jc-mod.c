/* ----------------------------------------------------------------------------
* ergoDOX layout : COLEMAK JC Sticky Keys Mod
*     created by Ryan Prince
* Description: This layout is designed for programming with a focus on
*     minimizing/elimnating the need to take the hands out of home-row position
*     to reach other keys. Layer sticky keys are used to reduce the average
*     number of keystrokes required to access keys in other layers. Some
*     redundancy of navigation and spacing keys is added to the left hand to
*     allow for greater one-handed access when using a mouse with the right
*     hand.
*   The alpha key layout is COLEMAK with sticky layer keys on the thumb
*     switches for a symbol layer and a ten-key/function
*     layer.
*   Modifiers are symetric on each hand with the exception of the Alt
*     key because my primary machine is a Mac which utilizes command and ctrl
*     for chorded shortcuts more frequenty than ctrl and alt. The layer sticky
*     keys compliment standard modifier sticky keys (for shift, ctrl, command,
*     alt) to allow fast touch typing with minimal chording in favor of
*     sequential keying (preferably on alternate hands) for multi-key shortcuts
*     as chording introduces strain and fatigue and takes your hands out of
*     home row position increasing the likelihood of mistyping.
*   Sticky keys for standard modifiers are used as an operating system setting
*     for the benefit of key state visualization, though this can interfere
*     with the kbfun_shift_press_release() behavior which implicitly adds the
*     shift down modifier to output symbols that require it without knowledge
*     of the virtual sticky state maintained by the operating system.
*   The ErgoDox Layout Configurator layout that best approximates the layout
*     defined in this file is available here:
*     https://www.massdrop.com/ext/ergodox/?referer=EAZJPJ&hash=f26761358ba99e21ae937173da512849
*     The differences are mainly the use of layer toggles instead of sticky
*     layer keys and many of the symbols add the kbfun_shift_press_release()
*     which is not accessible for all keys in the cofigurator (as of
*     2013-04-10).
* -----------------------------------------------------------------------------
* Copyright (c) 2012 Ben Blazak <benblazak.dev@gmail.com>,
*    2013 Ryan Prince <judascleric@gmail.com>
* Released under The MIT License (MIT) (see "license.md")
* Project located at <https://github.com/benblazak/ergodox-firmware>
* -------------------------------------------------------------------------- */
#include <stdint.h>
#include <stddef.h>
#include <avr/pgmspace.h>
#include "../../../lib/data-types/misc.h"
#include "../../../lib/usb/usage-page/keyboard--short-names.h"
#include "../../../lib/key-functions/public.h"
#include "../matrix.h"
#include "../layout.h"
// FUNCTIONS ------------------------------------------------------------------
void kbfun_layer_pop_all(void) {
  kbfun_layer_pop_1();
  kbfun_layer_pop_2();
  kbfun_layer_pop_3();
  kbfun_layer_pop_4();
  kbfun_layer_pop_5();
  kbfun_layer_pop_6();
  kbfun_layer_pop_7();
  kbfun_layer_pop_8();
  kbfun_layer_pop_9();
  kbfun_layer_pop_10();
}

// DEFINITIONS ----------------------------------------------------------------
#define  kprrel   &kbfun_press_release
#define  kprpst   &kbfun_press_release_preserve_sticky
#define  mprrel   &kbfun_mediakey_press_release
#define  ktrans   &kbfun_transparent
#define  lpush1   &kbfun_layer_push_1
#define  lpush2   &kbfun_layer_push_2
#define  lsticky1   &kbfun_layer_sticky_1
#define  lsticky2   &kbfun_layer_sticky_2
#define  lpop     &kbfun_layer_pop_all
#define  lpop1    &kbfun_layer_pop_1
#define  lpop2    &kbfun_layer_pop_2
#define  dbtldr   &kbfun_jump_to_bootloader
#define  sshprre  &kbfun_shift_press_release
// ----------------------------------------------------------------------------

// LAYOUT ---------------------------------------------------------------------
const uint8_t PROGMEM _kb_layout[KB_LAYERS][KB_ROWS][KB_COLUMNS] = {
// LAYER 0
KB_MATRIX_LAYER(
	// unused
	0,
	// left hand
	_grave,	_1,	_2,	_3,	_4,	_5,	_bracketL,
	_ctrlL,	_Q,	_W,	_F,	_P,	_G,	_equal,
	_shiftL,	_A,	_R,	_S,	_T,	_D,
	_guiL,	_Z,	_X,	_C,	_V,	_B,	0,
	_home,	_end,	_pageU,	_pageD,	1,
	_tab,	_space,
	0,	0,	_enter,
	_esc,	2,	_altL,
	// right hand
	_bracketR,	_6,	_7,	_8,	_9,	_0,	_backslash,
	_dash,	_J,	_L,	_U,	_Y,	_semicolon,	_ctrlR,
	_H,	_N,	_E,	_I,	_O,	_shiftR,
	2,	_K,	_M,	_comma,	_period,	_slash,	_guiR,
	1,	_arrowD,	_arrowU,	_arrowL,	_arrowR,
	_insert,	_del,
	0,	0,	0,
	_bs,	_enter,	_space
),
// LAYER 1
KB_MATRIX_LAYER(
	// unused
	0,
	// left hand
	0,	0,	0,	0,	0,	0,	0,
	0,	_1,	_2,	_3,	_4,	_5,	0,
	0,	_quote,	0x34,	0x2F,	0x30,	_equal,
	0,	0x31,	_backslash,	_dash,	_bs,	_tab,	0,
	_arrowL,	_arrowR,	_arrowU,	_arrowD,	0,
	0,	0,
	0,	0,	0,
	0,	0,	0,
	// right hand
	0,	0,	MEDIAKEY_PREV_TRACK,	MEDIAKEY_PLAY_PAUSE,	MEDIAKEY_NEXT_TRACK,	0,	0,
	0,	_6,	_7,	_mul_kp,	_sub_kp,	_grave,	0,
	_add_kp,	_9,	_0,	_bracketL,	_bracketR,	0,
	0,	_grave,	_arrowD,	_arrowU,	_arrowL,	_arrowR,	0,
	0,	0,	0,	0,	0,
	0,	0,
	0,	0,	0,
	0,	0,	0
),
// LAYER 2
KB_MATRIX_LAYER(
	// unused
	0,
	// left hand
	0,	0,	0,	0,	0,	0,	0,
	0,	_F9,	_F10,	_F11,	_F12,	_volumeU,	0,
	0,	_F5,	_F6,	_F7,	_F8,	_volumeD,
	0,	_F1,	_F2,	_F3,	_F4,	_mute,	0,
	0,	0,	0,	0,	0,
	0,	0,
	0,	0,	0,
	0,	0,	0,
	// right hand
	0,	0,	_numLock_kp,	_mul_kp,	_div_kp,	_5,	0,
	0,	_sub_kp,	_7_kp,	_8_kp,	_9_kp,	_add_kp,	0,
	_equal_kp,	_4_kp,	_5_kp,	_6_kp,	_0_kp,	0,
	0,	_comma,	_1_kp,	_2_kp,	_3_kp,	_dec_del_kp,	0,
	0,	0,	0,	0,	0,
	0,	0,
	0,	0,	0,
	0,	0,	0
),
};
// ----------------------------------------------------------------------------

// PRESS ----------------------------------------------------------------------
const void_funptr_t PROGMEM _kb_layout_press[KB_LAYERS][KB_ROWS][KB_COLUMNS] = {
// LAYER 0
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	lpop,
	kprrel,	kprrel,	kprrel,	kprrel,	lsticky1,
	kprrel,	kprrel,
	NULL,	NULL,	kprrel,
	kprrel,	lsticky2,	kprrel,
	// right hand
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
	lsticky2,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
	lsticky1,	kprrel,	kprrel,	kprrel,	kprrel,
	kprrel,	kprrel,
	lpop,	NULL,	NULL,
	kprrel,	kprrel,	kprrel
),
// LAYER 1
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,
	ktrans,	sshprre,	sshprre,	sshprre,	sshprre,	sshprre,	ktrans,
	ktrans,	kprrel,	sshprre,	sshprre,	sshprre,	kprrel,
	ktrans,	sshprre,	kprrel,	sshprre,	kprrel,	kprrel,	ktrans,
	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,
	ktrans,	ktrans,
	NULL,	NULL,	ktrans,
	ktrans,	ktrans,	ktrans,
	// right hand
	ktrans,	ktrans,	mprrel,	mprrel,	mprrel,	ktrans,	ktrans,
	ktrans,	sshprre,	sshprre,	kprrel,	kprrel,	kprrel,	ktrans,
	kprrel,	sshprre,	sshprre,	kprrel,	kprrel,	ktrans,
	ktrans,	sshprre,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,
	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,
	ktrans,	ktrans,
	ktrans,	NULL,	NULL,
	ktrans,	ktrans,	ktrans
),
// LAYER 2
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,
	ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,
	ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
	ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,
	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,
	ktrans,	ktrans,
	NULL,	NULL,	ktrans,
	ktrans,	ktrans,	ktrans,
	// right hand
	dbtldr,	kprrel,	kprrel,	kprrel,	kprrel,	sshprre,	ktrans,
	ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,
	ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,
	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,
	ktrans,	ktrans,
	ktrans,	NULL,	NULL,
	ktrans,	ktrans,	ktrans
),
};
// ----------------------------------------------------------------------------

// RELEASE --------------------------------------------------------------------
const void_funptr_t PROGMEM _kb_layout_release[KB_LAYERS][KB_ROWS][KB_COLUMNS] = {
// LAYER 0
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	NULL,
	kprrel,	kprrel,	kprrel,	kprrel,	lsticky1,
	kprrel,	kprrel,
	NULL,	NULL,	kprrel,
	kprrel,	lsticky2,	kprrel,
	// right hand
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
	lsticky2,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
	lsticky1,	kprrel,	kprrel,	kprrel,	kprrel,
	kprrel,	kprrel,
	NULL,	NULL,	NULL,
	kprrel,	kprrel,	kprrel
),
// LAYER 1
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,
	ktrans,	sshprre,	sshprre,	sshprre,	sshprre,	sshprre,	ktrans,
	ktrans,	kprrel,	sshprre,	sshprre,	sshprre,	kprrel,
	kprrel,	sshprre,	kprrel,	sshprre,	kprrel,	kprrel,	ktrans,
	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,
	ktrans,	ktrans,
	NULL,	NULL,	ktrans,
	ktrans,	ktrans,	ktrans,
	// right hand
	ktrans,	ktrans,	mprrel,	mprrel,	mprrel,	ktrans,	ktrans,
	ktrans,	sshprre,	sshprre,	kprrel,	kprrel,	kprrel,	ktrans,
	kprrel,	sshprre,	sshprre,	kprrel,	kprrel,	ktrans,
	ktrans,	sshprre,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,
	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,
	ktrans,	ktrans,
	ktrans,	NULL,	NULL,
	ktrans,	ktrans,	ktrans
),
// LAYER 2
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,
	ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,
	ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,
	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,
	ktrans,	ktrans,
	NULL,	NULL,	ktrans,
	kprrel,	ktrans,	ktrans,
	// right hand
	NULL,	kprrel,	kprrel,	kprrel,	kprrel,	sshprre,	ktrans,
	ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,
	ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,
	ktrans,	ktrans,
	ktrans,	NULL,	NULL,
	ktrans,	ktrans,	ktrans
),
};
// ----------------------------------------------------------------------------
