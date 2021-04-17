// this is the style you want to emulate.
// This is the canonical layout file for the Quantum project. If you want to add another keyboard,

#include "chimera_ergo_mini.h"

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
enum chimera_ergo_mini_layers
{
	_ASER,
	_NMAP,
	_QWER,
	_NUM,
	_FUNC,
	_SYM,
	_STR,
	_LNUM,
	_MOUS,
	_EXT,
	_LASE,
	_TEST,
	_NAV,
};

enum custom_keycodes {
  KC_N000 = SAFE_RANGE,
  KC_SML0,
  KC_SML1,
  KC_LOL,
  KC_SAD,
  KC_KISS,
  KC_LOVE,
  KC_TNGE,
  KC_THUP,
  KC_THDN,
  KC_RUP,
  KC_PND,
  KC_SHRG,
  KC_OSCL,
  KC_AESV,
  KC_WMOV,
  KC_WSIZ,
  KC_COLS,
  KC_SNND,
  KC_CLRK



};

// Fillers to make layering more clear
#define KC_ KC_TRNS
#define KC_____ KC_TRNS
#define KC_XXXX KC_NO
#define KC_RSET RESET


//one shot mods
#define KC_OLSF OSM(MOD_LSFT)
#define KC_ORSF OSM(MOD_RSFT)
#define KC_OLCT OSM(MOD_LCTL)
#define KC_ORCT OSM(MOD_RCTL)
#define KC_OLAL OSM(MOD_LALT)
#define KC_ORAL OSM(MOD_RALT)
#define KC_OLGU OSM(MOD_LGUI)
#define KC_ORGU OSM(MOD_RGUI)

// modified mods
#define KC_OLCS OSM(MOD_LCTL|MOD_LSFT)
#define KC_OLAS OSM(MOD_LALT|MOD_LSFT)
#define KC_OLCA OSM(MOD_LCTL|MOD_LALT)
#define KC_OLME OSM(MOD_LCTL|MOD_LALT|MOD_LSFT)

// mod combos
#define KC_CTLZ LCTL(KC_Z)
#define KC_CTLX LCTL(KC_X)
#define KC_CTLC LCTL(KC_C)
#define KC_CTLV LCTL(KC_V)
#define KC_CTLA LCTL(KC_A)
#define KC_CTLO LCTL(KC_O)

#define KC_SECO LCTL(KC_SPC)
#define KC_SERO LSFT(KC_SPC)

#define KC_GUPU LGUI(KC_PGUP)
#define KC_GUPD LGUI(KC_PGDN)
#define KC_GUHO LGUI(KC_HOME)
#define KC_GUEN LGUI(KC_END)

#define KC_STAB LSFT(KC_TAB)

#define KC_LCAD LCA(KC_DEL)


// layer codes
#define KC_ASER TO(_ASER)

#define KC_QWER TO(_QWER)
#define KC_NMAP TO(_NMAP)

#define KC_GHEA TO(_GHEA)

#define KC_NAVT TO(_NAV)
#define KC_NAVO OSL(_NAV)

#define KC_NUMT TO(_NUM)
#define KC_NUMO OSL(_NUM)

#define KC_FNCT TO(_FUNC)
#define KC_FNCO OSL(_FUNC)

#define KC_SYMO OSL(_SYM)

#define KC_OEXT OSL(_EXT)

#define KC_LASO OSL(_LASE)

#define KC_LNUT TO(_LNUM)
#define KC_LNUO OSL(_LNUM)

#define KC_STRO OSL(_STR)
#define KC_MOUO OSL(_MOUS)

// for specific keys
#define KC_RTHB MT(MOD_RCTL,KC_F13)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_ASER] = KC_KEYMAP(

 F13,LNUT,ASER,CAPS, TAB,      TAB,ASER,NUMT, ESC,OLSF,
COMM, C  , D  , F  , K  ,      V  , H  , T  , L  , DOT,
 A  , S  , E  , R  , Y  ,     BSPC, N  , I  , O  , ENT,
 Q  , W  , G  , B  , J  ,      X  , M  , U  , P  , Z  ,
          NUMO,NAVO,FNCO,     OLCT, SPC,SYMO
),

[_NAV] = KC_KEYMAP(
____,____,____,____,____,     ____,____,____,____,____,
 ENT,STAB, ESC, TAB, DEL,     STAB,PGUP, UP ,PGDN, APP,
OLGU,OLCT,OLSF,OLAL,BSPC,     BSPC,LEFT,DOWN,RGHT, ENT,
CTLZ,CTLX,CTLC,CTLV,ASER,      TAB,HOME, DEL, END, INS,
          NUMO,NAVO,FNCO,     RTHB, SPC,SYMO
),

[_NUM] = KC_KEYMAP(
____,____,____,____,____,     ____,____,____,____,____,
COMM,STAB, UP , TAB,CIRC,     MINS, 7  , 8  , 9  ,ASTR,
N000,LEFT,DOWN,RGHT,QUOT,     BSPC, 4  , 5  , 6  , ENT,
XXXX,LPRN,PERC,RPRN,XXXX,     PLUS, 1  , 2  , 3  ,SLSH,
          LNUO,NAVO,SYMO,      DOT, 0  , EQL
),

[_FUNC] = KC_KEYMAP(
____,____,____,____,____,     ____,____,____,____,____,
 DOT, L  , T  , H  , V  ,     OLAL, F7 , F8 , F9 , F11,
 SPC, O  , I  , N  ,BSPC,     OLSF, F4 , F5 , F6 , F10,
 Z  , P  , U  , M  , X  ,     OLCT, F1 , F2 , F3 , F12,
          OEXT,NAVO,MOUO,     OLME,CAPS,OLGU
),

[_SYM] = KC_KEYMAP(
____,____,____,____,____,     ____,____,____,____,____,
 GT ,MINS,DQUO,PLUS,SCLN,      GRV,RBRC,RPRN,RCBR,PIPE,
 LT ,UNDS,QUOT, EQL,COLN,     BSPC,LBRC,LPRN,LCBR,AMPR,
EXLM,ASTR, AT ,SLSH,QUES,     TILD, DLR,HASH,BSLS,PERC,
          NUMO,NAVO,FNCO,     NAVT,STRO,NAVO
),

[_EXT] = KC_KEYMAP(
____,____,____,____,____,     ____,____,____,____,____,
RSET,VOLD,MUTE,VOLU,QWER,     XXXX,XXXX,XXXX,XXXX,XXXX,
MPLY,MPRV,PAUS,MNXT,MSTP,     XXXX,XXXX,XXXX,XXXX,XXXX,
NMAP,SLCK,QWER,PSCR,SLEP,     XXXX,XXXX,XXXX,XXXX,XXXX,
          NUMO,NAVO,FNCO,     XXXX,XXXX,XXXX
),

[_STR] = KC_KEYMAP(
____,____,____,____,____,     ____,____,____,____,____,
XXXX,XXXX,XXXX,XXXX,XXXX,     LOVE,THUP,THDN,TNGE,XXXX,
XXXX,XXXX,XXXX,XXXX,XXXX,      SAD,SML0,SML1, LOL,XXXX,
XXXX,XXXX,XXXX,XXXX,XXXX,     KISS, PND, RUP,SHRG,XXXX,
          NUMO,NAVO,FNCO,     ASER,LASO, ESC
),

[_MOUS] = KC_KEYMAP(
____,____,____,____,____,     ____,____,____,____,____,
XXXX,GUPU,XXXX,GUPD,SECO,     ACL0,WH_U,MS_U,WH_D,BTN3,
XXXX,XXXX,XXXX,XXXX,SERO,     ACL1,MS_L,MS_D,MS_R,BTN1,
XXXX,GUHO,XXXX,GUEN,XXXX,     ACL2,WH_L,BTN2,WH_R,BTN4,
          NUMO,NAVO,FNCO,     OLCT,BTN1,BTN2
),

[_QWER] = KC_KEYMAP(
____,____,____,____,____,     ____,____,____,____,____,
 Q  , W  , E  , R  , T  ,      Y  , U  , I  , O  , P  ,
 A  , S  , D  , F  , G  ,      H  , J  , K  , L  , ENT,
 Z  , X  , C  , V  , B  ,      N  , M  ,COMM, DOT,SLSH,
          NUMO,NAVO,FNCO,     OLCT, SPC,SYMO
),


[_LNUM] = KC_KEYMAP(
____,____,____,____,____,     ____,____,____,____,____,
 DOT,  1 ,  2 ,  3 ,SLSH,     PMNS, P7 , P8 , P9 ,PAST,
  0 ,  4 ,  5 ,  6 ,BSPC,      P0 , P4 , P5 , P6 ,PENT,
OLGU,  7 ,  8 ,  9 ,RALT,     PPLS, P1 , P2 , P3 ,PSLS,
          NUMO,NAVO,FNCO,     PDOT, P0 ,NLCK
),

[_LASE] = KC_KEYMAP(
____,____,____,____,____,     ____,____,____,____,____,
 DOT, L  , T  , H  , V  ,      K  , F  , D  , C  ,COMM,
 SPC, O  , I  , N  ,BSPC,      Y  , R  , E  , S  , A  ,
 Q  , P  , U  , M  , Z  ,      J  , B  , G  , W  , X  ,
          NUMO,NAVO,FNCO,     OLCT, SPC,SYMO
),

[_TEST] = KC_KEYMAP(
 1  , 2  , 3  , 4  , 5  ,      6  , 7  , 8  , 9  , 0  ,
 Q  , W  , E  , R  , T  ,      Y  , U  , I  , O  , P  ,
 A  , S  , D  , F  , G  ,      H  , J  , K  , L  ,SCLN,
 Z  , X  , C  , V  , B  ,      N  , M  ,COMM, DOT,SLSH,
          LPRN,QUOT,RPRN,     LBRC,BSLS,RBRC
),

[_NMAP] = KC_KEYMAP(
____,____,____,____,____,     ____,____,____,____,____,
COMM, C  , A  , D  , K  ,      V  , H  , T  , L  , DOT,
 F  , S  , E  , R  , Y  ,     BSPC, N  , I  , O  , ENT,
 Q  , W  , G  , B  , J  ,      X  , M  , U  , P  , Z  ,
 		  NUMO,NAVO,FNCO,     OLCT, SPC,SYMO
),

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {

        case KC_NAVO:
            if (record->event.pressed) {
                return true;//these actions are defined elsewhere
            } else {
                clear_mods();return true;break;
            }
        case KC_OSCL:
            if (record->event.pressed) {
                clear_mods();
                clear_weak_mods();
                clear_oneshot_mods();
                clear_oneshot_layer_state(ONESHOT_OTHER_KEY_PRESSED);
                return true;
            }
		case KC_CLRK:
            if (record->event.pressed) {
                clear_keyboard();
                return true;
            }
        case KC_N000:
            if (record->event.pressed) {
                //this is done because using a shifted key code immedeately before SEND_STRING("000");
                //preserves the shift and produces ')))' instead of '000'
                clear_weak_mods();
                SEND_STRING("000");
                return true;
            }
        case KC_COLS:
        // chained one shot left shift
           if (record->event.pressed) {
               if (get_oneshot_mods()) {
                   static uint8_t vmods2 = 0;
                   vmods2 = (get_oneshot_mods() | MOD_LSFT);
                   clear_oneshot_mods();
                   set_oneshot_mods(vmods2);
               }
           else {
               set_oneshot_mods(MOD_LSFT);
               }
           return true;
           }
        case KC_SML0:
            if (record->event.pressed) {SEND_STRING(":-)"); return true;}
        case KC_SML1:
            if (record->event.pressed) {SEND_STRING(":-D"); return true;}
        case KC_LOL:
            if (record->event.pressed) {SEND_STRING(">_<"); return true;}
        case KC_SAD:
            if (record->event.pressed) {SEND_STRING(":-("); return true;}
        case KC_LOVE:
            if (record->event.pressed) {SEND_STRING(":-*"); return true;}
        case KC_KISS:
            if (record->event.pressed) {SEND_STRING(":-*"); return true;}
        case KC_TNGE:
            if (record->event.pressed) {SEND_STRING(":-P"); return true;}
        case KC_THUP:
            if (record->event.pressed) {SEND_STRING("(y)"); return true;}
        case KC_THDN:
            if (record->event.pressed) {SEND_STRING("(n)"); return true;}
        case KC_SHRG:
            if (record->event.pressed) {SEND_STRING("¯\\_(ツ)_/¯"); return true;}
        case KC_PND://THE POUND SYMBOL
            if (record->event.pressed) {
                register_code(KC_RALT);
                register_code(KC_P0);unregister_code(KC_P0);
                register_code(KC_P1);unregister_code(KC_P1);
                register_code(KC_P6);unregister_code(KC_P6);
                register_code(KC_P3);unregister_code(KC_P3);
                unregister_code(KC_RALT);
                return true;}
        case KC_RUP://THE INDIAN RUPEE SYMBOL TO-DO
            if (record->event.pressed) {
                register_code(KC_RALT);
                register_code(KC_P8);unregister_code(KC_P8);
                register_code(KC_P3);unregister_code(KC_P3);
                register_code(KC_P7);unregister_code(KC_P7);
                register_code(KC_P7);unregister_code(KC_P7);
                unregister_code(KC_RALT);
                return true;
            }
        case KC_AESV://PASTE VALUES IN EXCEL
            if (record->event.pressed) {
                register_code(KC_LALT);
                register_code(KC_E);unregister_code(KC_E);
                unregister_code(KC_LALT);
                register_code(KC_S);unregister_code(KC_S);
                register_code(KC_V);unregister_code(KC_V);
                register_code(KC_ENT);unregister_code(KC_ENT);

                return true;
            }
        case KC_WMOV://MOVE WINDOWS
            if (record->event.pressed) {
                register_code(KC_LALT);
                register_code(KC_SPC);unregister_code(KC_SPC);
                unregister_code(KC_LALT);
                register_code(KC_M);unregister_code(KC_M);
                return true;
            }
        case KC_WSIZ://RESIZE WINDOWS
            if (record->event.pressed) {
                register_code(KC_LALT);
                register_code(KC_SPC);unregister_code(KC_SPC);
                unregister_code(KC_LALT);
                register_code(KC_S);unregister_code(KC_S);
                return true;
            }
        case KC_SNND://END SENTENCE AND BEGIN NEW
            if (record->event.pressed) {
                SEND_STRING(". ");
                //ACTION_MODS_ONESHOT(KC_LSFT);
                return true;
            }
        default:
            return true;
    }

};



void matrix_scan_user(void) {
    uint8_t layer = biton32(layer_state);
    switch (layer) {
    	case _ASER:
    	    set_led_green;
    	    break;
        case _NAV:
	    	set_led_blue;
	    	break;
        case _NUM:
            set_led_white;
            break;
        case _SYM:
            set_led_yellow;
            break;
        case _FUNC:
	    	set_led_magenta;
	    	break;
        case _MOUS:
	    	set_led_cyan;
	    	break;
       default:
            set_led_red;
            break;
    }
};


const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  switch(id) {
    /* include some kind of library or header */
    case 0:
      if (record->event.pressed) {
        SEND_STRING("#include <>");
        return MACRO( T(LEFT), END);
      }
      break;
  }
  return MACRO_NONE;
};

const uint16_t PROGMEM fn_actions[] = {
};
