// this is the style you want to emulate.
// This is the canonical layout file for the Quantum project. If you want to add another keyboard,

#include "kafi.h"

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
enum kafi_layers
{
	_ASER,
	_NUM,
	_SYM,
	_FUNC,
	_MOUS,
	_LNUM,
	_EXT,
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
	KC_CLRK,

};

//fillers to make layering clearer
#define KC_ KC_TRNS
#define KC_____ KC_TRNS
#define KC_XXXX KC_NO

//resets the keyboard
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
#define KC_OLHY OSM(MOD_LCTL|MOD_LALT|MOD_LGUI|MOD_LSFT)

// mod combos
#define KC_CTLZ LCTL(KC_Z)
#define KC_CTLX LCTL(KC_X)
#define KC_CTLC LCTL(KC_C)
#define KC_CTLV LCTL(KC_V)
#define KC_CTLA LCTL(KC_A)
#define KC_CTLO LCTL(KC_O)

//windows shortcut to close app
#define KC_ALF4 LALT(KC_F4)

//back tab
#define KC_STAB LSFT(KC_TAB)

//ctrl+alt+del
#define KC_LCAD LCA(KC_DEL)


// layer codes
#define KC_ASER TO(_ASER)
#define KC_NAVO OSL(_NAV)
#define KC_NUMO OSL(_NUM)
#define KC_SYMO OSL(_SYM)
#define KC_FNCO OSL(_FUNC)
#define KC_OEXT OSL(_EXT)
#define KC_LNUO OSL(_LNUM)
#define KC_MOUO OSL(_MOUS)

#define KC_NAVT TO(_NAV)
#define KC_NUMT TO(_NUM)
#define KC_LNUT TO(_LNUM)

#define KC_LMCA LM(_LASE, KC_LCTL)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_ASER] = KC_KEYMAP(
COMM,C   ,D   ,F   ,K   ,     V   ,H   ,T   ,L   ,DOT ,
A   ,S   ,E   ,R   ,Y   ,     BSPC,N   ,I   ,O   ,ENT ,
Q   ,W   ,G   ,B   ,J   ,     X   ,M   ,U   ,P   ,Z   ,
CAPS,LNUT,NUMO,NAVO,FNCO,     OLCT,SPC ,SYMO,NUMT,ESC
),

[_NAV] = KC_KEYMAP(
ENT ,STAB,ESC ,TAB ,DEL ,     STAB,PGUP,UP  ,PGDN,APP ,
OLGU,OLCT,OLSF,OLAL,BSPC,     BSPC,LEFT,DOWN,RGHT,ENT ,
CTLZ,CTLX,CTLC,CTLV,ASER,     TAB ,HOME,DEL ,END ,INS ,
____,____,NUMO,NAVO,FNCO,     F13 ,SPC ,SYMO,____,____
),

[_NUM] = KC_KEYMAP(
COMM,STAB,UP  ,TAB ,CIRC,     MINS,7   ,8   ,9   ,ASTR,
N000,LEFT,DOWN,RGHT,QUOT,     BSPC,4   ,5   ,6   ,ENT ,
OLGU,LPRN, EQL,RPRN,PERC,     PLUS,1   ,2   ,3   ,SLSH,
____,____,LNUO,NAVO,SYMO,     OLAL,0   ,DOT ,____,____
),

[_FUNC] = KC_KEYMAP(
DOT ,L   ,T   ,H   ,V   ,     OLAL,F7  ,F8  ,F9  ,F11 ,
SPC ,O   ,I   ,N   ,BSPC,     OLSF,F4  ,F5  ,F6  ,F10 ,
Z   ,P   ,U   ,M   ,X   ,     OLCT,F1  ,F2  ,F3  ,F12 ,
____,____,OEXT,NAVO,MOUO,     OLME,CAPS,OLGU,____,____
),

[_SYM] = KC_KEYMAP(
GT  ,MINS,DQUO,PLUS,SCLN,     GRV ,RBRC,RPRN,RCBR,PIPE,
LT  ,UNDS,QUOT,EQL ,COLN,     BSPC,LBRC,LPRN,LCBR,AMPR,
EXLM,ASTR, AT ,SLSH,QUES,     TILD, DLR,HASH,BSLS,PERC,
____,____,OLME,NAVO,OLHY,     OLCA,OLCS,NAVO,____,____
),

[_EXT] = KC_KEYMAP(
RSET,SLCK,VOLU,NLCK,WAKE,     LOVE,THUP,THDN,TNGE,XXXX,
WFAV,MPRV,VOLD,MNXT,PSCR,     SAD ,SML0,SML1,LOL ,XXXX,
PAUS,MSTP,MUTE,MPLY,SLEP,     KISS,PND , RUP,SHRG,XXXX,
____,____,NUMO,NAVO,FNCO,     XXXX,XXXX,XXXX,____,____
),

[_MOUS] = KC_KEYMAP(
F24 ,F17 ,F18 ,F19 ,PGUP,	  ACL0,WH_U,MS_U,WH_D,BTN3,
F20 ,F14 ,F15 ,F16 ,PGDN,	  ACL1,MS_L,MS_D,MS_R,BTN1,
ALF4,F21 ,F22 ,F23 ,F13 ,	  ACL2,WH_L,BTN2,WH_R,BTN4,
____,____,NUMO,NAVO,FNCO,     OLCT,BTN1,BTN2,____,____
),

[_LNUM] = KC_KEYMAP(
PLUS,7   ,8   ,9   ,RALT,     PMNS,P7  ,P8  ,P9  ,PAST,
0   ,4   ,5   ,6   ,BSPC,     P0  ,P4  ,P5  ,P6  ,PENT,
AT  ,1   ,2   ,3   ,HASH,     PPLS,P1  ,P2  ,P3  ,PSLS,
____,____,NUMO,NAVO,FNCO,     NLCK,P0  ,PDOT,____,____
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
        default:
            return true;
    }

};




const uint16_t PROGMEM fn_actions[] = {

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
