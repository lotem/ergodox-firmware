/*
 * ergodox layout : KBCon
 * created by lotem
 */
ERGODOX_LAYOUT = {
  ERGODOX_LAYER( // L0: typewriter
    // left hand
    _(_esc),        _(_1),          _(_2),          _(_3),          _(_4),          _(_5),          _(_grave),
    _(_tab),        _(_Q),          _(_W),          _(_E),          _(_R),          _(_T),          _(_bracketL),
    _(_ctrlL),      _(_A),          _(_S),          _(_D),          _(_F),          _(_G),
    S2CAP(_shiftL), _(_Z),          _(_X),          _(_C),          _(_V),          _(_B),          _(_dash),
    _(_ctrlL),      _(_altL),       _(_guiL),       S2CAP(_shiftL), CHORD(1),
                                                                                    S2CAP(_shiftL), _(_guiL),
                                                                                                    _(_altL),
                                                                    _(_enter),      _(_tab),        _(_ctrlL),
    // right hand
    _(_backslash),  _(_6),          _(_7),          _(_8),          _(_9),          _(_0),          _(_enter),
    _(_bracketR),   _(_Y),          _(_U),          _(_I),          _(_O),          _(_P),          _(_bs),
    /*_*/           _(_H),          _(_J),          _(_K),          _(_L),          _(_semicolon),  _(_quote),
    _(_equal),      _(_N),          _(_M),          _(_comma),      _(_period),     _(_slash),      S2CAP(_shiftR),
                                    CHORD(1),       S2CAP(_shiftR), _(_guiR),       _(_altR),       _(_ctrlR),
    _(_guiR),       S2CAP(_shiftR),
    _(_altR),
    _(_ctrlR),      _(_bs),         _(_space)
  ),
  ERGODOX_LAYER( // L1: symbols and function
    // left hand
    _(_insert),     _(_F1),         _(_F2),         _(_F3),         _(_F4),         _(_F5),         _(_F11),
    M(PREV_TRACK),  _(_equal),      S(_equal),      _(_bracketL),   _(_bracketR),   _(_grave),      __,
    M(PLAY_PAUSE),  S(_2),          _(_backslash),  S(_9),          S(_0),          S(_7),
    M(NEXT_TRACK),  S(_5),          S(_8),          S(_bracketL),   S(_bracketR),   S(_backslash),  __,
    __,             __,             __,             __,             CHORD(9),
                                                                                    __,             __,
                                                                                                    __,
                                                                    __,             __,             __,
    // right hand
    _(_F12),        _(_F6),         _(_F7),         _(_F8),         _(_F9),         _(_F10),        _(_del),
    __,             S(_6),          _(_bs),         _(_tab),        S(_3),          S(_1),          _(_volumeU),
    /*_*/           _(_arrowL),     _(_arrowD),     _(_arrowU),     _(_arrowR),     _(_quote),      _(_mute),
    __,             S(_grave),      S(_dash),       S(_4),          _(_dash),       S(_quote),      _(_volumeD),
                                    CHORD(9),       __,             __,             __,             __,
    __,             __,
    __,
    __,      _(_del),        _(_enter)
  ),
  ERGODOX_LAYER( // L2: Maltron
    // left hand
    __,             _(_1),          _(_2),          _(_3),          _(_4),          _(_5),          __,
    __,             _(_Q),          _(_P),          _(_Y),          _(_C),          _(_B),          __,
    __,             _(_A),          _(_N),          _(_I),          _(_S),          _(_F),
    __,             _(_comma),      _(_period),     _(_J),          _(_G),          _(_slash),      __,
    __,             __,             __,             __,             __,
                                                                                    __,             __,
                                                                                                    __,
                                                                    _(_E),          __,             __,
    // right hand
    __,             _(_6),          _(_7),          _(_8),          _(_9),          _(_0),          __,
    __,             _(_V),          _(_M),          _(_U),          _(_Z),          _(_L),          __,
    /*_*/           _(_D),          _(_T),          _(_H),          _(_O),          _(_R),          __,
    __,             _(_semicolon),  _(_W),          _(_K),          _(_dash),       _(_X),          __,
                                    __,             __,             __,             __,             __,
    __,             __,
    __,
    __,             __,             __
  ),
  ERGODOX_LAYER( // L3: Dvorak
    // left hand
    __,             _(_1),          _(_2),          _(_3),          _(_4),          _(_5),          __,
    __,             _(_quote),      _(_comma),      _(_period),     _(_P),          _(_Y),          __,
    __,             _(_A),          _(_O),          _(_E),          _(_U),          _(_I),
    __,             _(_semicolon),  _(_Q),          _(_J),          _(_K),          _(_X),          __,
    __,             __,             __,             __,             __,
                                                                                    __,             __,
                                                                                                    __,
                                                                    __,             __,             __,
    // right hand
    __,             _(_6),          _(_7),          _(_8),          _(_9),          _(_0),          __,
    __,             _(_F),          _(_G),          _(_C),          _(_R),          _(_L),          _(_slash),
    /*_*/           _(_D),          _(_H),          _(_T),          _(_N),          _(_S),          _(_dash),
    __,             _(_B),          _(_M),          _(_W),          _(_V),          _(_Z),          __,
                                    __,             __,             __,             __,             __,
    __,             __,
    __,
    __,             __,             __
  ),
  ERGODOX_LAYER( // L4: Colemak
    // left hand
    __,             _(_1),          _(_2),          _(_3),          _(_4),          _(_5),          __,
    __,             _(_Q),          _(_W),          _(_F),          _(_P),          _(_G),          __,
    __,             _(_A),          _(_R),          _(_S),          _(_T),          _(_D),
    __,             _(_Z),          _(_X),          _(_C),          _(_V),          _(_B),          __,
    __,             __,             __,             __,             __,
                                                                                    __,             __,
                                                                                                    __,
                                                                    __,             __,             __,
    // right hand
    __,             _(_6),          _(_7),          _(_8),          _(_9),          _(_0),          __,
    __,             _(_J),          _(_L),          _(_U),          _(_Y),          _(_semicolon),  __,
    /*_*/           _(_H),          _(_N),          _(_E),          _(_I),          _(_O),          __,
    __,             _(_K),          _(_M),          _(_comma),      _(_period),     _(_slash),      __,
                                    __,             __,             __,             __,             __,
    __,             __,
    __,
    __,             __,             __
  ),
  ERGODOX_LAYER( // L5: Minimak
    // left hand
    __,             _(_1),          _(_2),          _(_3),          _(_4),          _(_5),          __,
    __,             _(_Q),          _(_W),          _(_D),          _(_F),          _(_K),          __,
    __,             _(_A),          _(_S),          _(_T),          _(_R),          _(_G),
    __,             _(_Z),          _(_X),          _(_C),          _(_V),          _(_B),          __,
    __,             __,             __,             __,             __,
                                                                                    __,             __,
                                                                                                    __,
                                                                    __,             __,             __,
    // right hand
    __,             _(_6),          _(_7),          _(_8),          _(_9),          _(_0),          __,
    __,             _(_Y),          _(_U),          _(_I),          _(_L),          _(_semicolon),  __,
    /*_*/           _(_H),          _(_N),          _(_E),          _(_O),          _(_P),          __,
    __,             _(_J),          _(_M),          _(_comma),      _(_period),     _(_slash),      __,
                                    __,             __,             __,             __,             __,
    __,             __,
    __,
    __,             __,             __
  ),
  ERGODOX_LAYER( // L6: KBCon
    // left hand
    __,             _(_1),          _(_2),          _(_3),          _(_4),          _(_5),          __,
    __,             _(_Q),          _(_W),          _(_D),          _(_R),          _(_F),          __,
    __,             _(_A),          _(_S),          _(_E),          _(_T),          _(_G),
    __,             _(_Z),          _(_X),          _(_C),          _(_V),          _(_B),          __,
    __,             __,             __,             __,             __,
                                                                                    __,             __,
                                                                                                    __,
                                                                    __,             __,             __,
    // right hand
    __,             _(_6),          _(_7),          _(_8),          _(_9),          _(_0),          __,
    __,             _(_Y),          _(_U),          _(_K),          _(_L),          _(_P),          __,
    /*_*/           _(_H),          _(_N),          _(_I),          _(_O),          _(_semicolon),  __,
    __,             _(_J),          _(_M),          _(_comma),      _(_period),     _(_slash),      __,
                                    __,             __,             __,             __,             __,
    __,             __,
    __,
    __,             __,             __
  ),
  ERGODOX_LAYER( // L7: Combo Pinyin
    // left hand
    __,             __,             __,             __,             __,             __,             __,
    __,             __,             __,             __,             __,             __,             __,
    __,             __,             __,             __,             __,             __,
    __,             __,             __,             __,             __,             __,             __,
    __,             __,             __,             __,             __,
                                                                                    __,             __,
                                                                                                    __,
                                                                    _(_semicolon),  __,             __,
    // right hand
    __,             __,             __,             __,             __,             __,             __,
    __,             __,             __,             __,             __,             __,             __,
    /*_*/           __,             __,             __,             __,             __,             __,
    __,             __,             __,             __,             __,             __,             __,
                                    __,             __,             __,             __,             __,
    __,             __,
    __,
    __,             __,             __
  ),
  ERGODOX_LAYER( // L8: unused
    // left hand
    __,             __,             __,             __,             __,             __,             __,
    __,             __,             __,             __,             __,             __,             __,
    __,             __,             __,             __,             __,             __,
    __,             __,             __,             __,             __,             __,             __,
    __,             __,             __,             __,             __,
                                                                                    __,             __,
                                                                                                    __,
                                                                    __,             __,             __,
    // right hand
    __,             __,             __,             __,             __,             __,             __,
    __,             __,             __,             __,             __,             __,             __,
    /*_*/           __,             __,             __,             __,             __,             __,
    __,             __,             __,             __,             __,             __,             __,
                                    __,             __,             __,             __,             __,
    __,             __,
    __,
    __,             __,             __
  ),
  ERGODOX_LAYER( // L9: layout switcher
    // left hand
    POPALL,         PUSH(2),        PUSH(3),        PUSH(4),        PUSH(5),        PUSH(6),        PUSH(7),
    UNUSED,         UNUSED,         UNUSED,         UNUSED,         UNUSED,         UNUSED,         UNUSED,
    UNUSED,         UNUSED,         UNUSED,         UNUSED,         UNUSED,         UNUSED,
    UNUSED,         UNUSED,         UNUSED,         UNUSED,         UNUSED,         UNUSED,         UNUSED,
    UNUSED,         UNUSED,         UNUSED,         UNUSED,         UNUSED,
                                                                                    UNUSED,         UNUSED,
                                                                                                    UNUSED,
                                                                    UNUSED,         UNUSED,         UNUSED,
    // right hand
    BOOTLOADER,     UNUSED,         UNUSED,         UNUSED,         UNUSED,         POPALL,         PUSH(7),
    UNUSED,         UNUSED,         UNUSED,         UNUSED,         UNUSED,         UNUSED,         UNUSED,
    /*_*/           _(_home),       _(_pageD),      _(_pageU),      _(_end),        UNUSED,         UNUSED,
    UNUSED,         UNUSED,         UNUSED,         UNUSED,         UNUSED,         UNUSED,         UNUSED,
                                    UNUSED,         UNUSED,         UNUSED,         UNUSED,         UNUSED,
    UNUSED,         UNUSED,
    UNUSED,
    UNUSED,         UNUSED,         UNUSED
  ),
};
