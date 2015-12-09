/*
 * ergodox layout : KBCon
 * created by lotem
 */
ERGODOX_LAYOUT = {
  ERGODOX_LAYER( // L0: qwerty
    // left hand
    _(_grave),      _(_1),          _(_2),          _(_3),          _(_4),          _(_5),          PUSH(2),
    _(_tab),        _(_Q),          _(_W),          _(_E),          _(_R),          _(_T),          _(_equal),
    _(_esc),        _(_A),          _(_S),          _(_D),          _(_F),          _(_G),
    S2CAP(_shiftL), _(_Z),          _(_X),          _(_C),          _(_V),          _(_B),          _(_dash),
    _(_guiL),       _(_altL),       _(_ctrlL),      _(_grave),      CHORD(1),
                                                                                    _(_home),       _(_end),
                                                                                                    _(_pageU),
                                                                    _(_ctrlL),      _(_tab),        _(_pageD),
      // right hand
    PUSH(3),        _(_6),          _(_7),          _(_8),          _(_9),          _(_0),          _(_del),
    _(_backslash),  _(_Y),          _(_U),          _(_I),          _(_O),          _(_P),          _(_bs),
    /*_*/           _(_H),          _(_J),          _(_K),          _(_L),          _(_semicolon),  _(_enter),
    _(_quote),      _(_N),          _(_M),          _(_comma),      _(_period),     _(_slash),      S2CAP(_shiftR),
                                    CHORD(1),       _(_bracketL),   _(_bracketR),   _(_altR),       _(_guiR),
    _(_arrowL),     _(_arrowR),
    _(_arrowU),
    _(_arrowD),     _(_bs),         _(_space)
  ),
  ERGODOX_LAYER( // L1: symbols and function
    // left hand
    BOOTLOADER,     _(_F1),         _(_F2),         _(_F3),         _(_F4),         _(_F5),         _(_F11),
    M(PREV_TRACK),  S(_bracketL),   S(_bracketR),   _(_bracketL),   _(_bracketR),   S(_2),          __,
    M(PLAY_PAUSE),  _(_semicolon),  _(_slash),      _(_dash),       _(_0_kp),       S(_semicolon),
    M(NEXT_TRACK),  _(_6_kp),       _(_7_kp),       _(_8_kp),       _(_9_kp),       S(_equal),      __,
    __,             __,            __,             __,              __,
                                                                                    __,             __,
                                                                                                    __,
                                                                    __,             __,             __,
    // right hand
    _(_F12),        _(_F6),         _(_F7),         _(_F8),         _(_F9),         _(_F10),        _(_insert),
    __,             S(_backslash),  S(_dash),       S(_comma),      S(_period),     S(_4),          _(_volumeU),
                    _(_backslash),  _(_1_kp),       S(_9),          S(_0),          _(_equal),      _(_volumeD),
    __,             S(_8),          _(_2_kp),       _(_3_kp),       _(_4_kp),       _(_5_kp),       _(_mute),
                                    __,             __,             __,             __,             __,
    __,             __,
    __,
    __,             __,             __
  ),
  ERGODOX_LAYER( // L2: maltron
    // left hand
    __,             _(_1),          _(_2),          _(_3),          _(_4),          _(_5),          POPALL,
    __,             _(_Q),          _(_P),          _(_Y),          _(_C),          _(_B),          __,
    __,             _(_A),          _(_N),          _(_I),          _(_S),          _(_F),
    __,             _(_comma),      _(_period),     _(_J),          _(_G),          _(_slash),      __,
    __,             __,             __,             __,             __,
                                                                                    __,             __,
                                                                                                    __,
                                                                    _(_E),          _(_tab),        __,
    // right hand
    __,             _(_6),          _(_7),          _(_8),          _(_9),          _(_0),          __,
    __,             _(_V),          _(_M),          _(_U),          _(_Z),          _(_L),          __,
    /*_*/           _(_D),          _(_T),          _(_H),          _(_O),          _(_R),          __,
    __,             _(_semicolon),  _(_W),          _(_K),          _(_dash),       _(_X),          __,
                                    __,             __,             __,             __,             __,
    __,             __,
    __,
    __,             _(_bs),         _(_space)
  ),
  ERGODOX_LAYER( // L3: workman
    // left hand
    __,             _(_1),          _(_2),          _(_3),          _(_4),          _(_5),          __,
    __,             _(_Q),          _(_D),          _(_R),          _(_W),          _(_B),          __,
    __,             _(_A),          _(_S),          _(_H),          _(_T),          _(_G),
    __,             _(_Z),          _(_X),          _(_M),          _(_C),          _(_V),          __,
    __,             __,             __,             __,             __,
                                                                                    __,             __,
                                                                                                    __,
                                                                    __,             __,             __,
    // right hand
    POPALL,         _(_6),          _(_7),          _(_8),          _(_9),          _(_0),          __,
    __,             _(_J),          _(_F),          _(_U),          _(_P),          _(_semicolon),  __,
    /*_*/           _(_Y),          _(_N),          _(_E),          _(_O),          _(_I),          __,
    __,             _(_K),          _(_L),          _(_comma),      _(_period),     _(_slash),      __,
                                    __,             __,             __,             __,             __,
    __,           __,
    __,
    __,           __,           __
  ),
  ERGODOX_LAYER( // L4: norman
    // left hand
    __,             _(_1),          _(_2),          _(_3),          _(_4),          _(_5),          __,
    __,             _(_Q),          _(_W),          _(_D),          _(_F),          _(_K),          __,
    __,             _(_A),          _(_S),          _(_E),          _(_T),          _(_G),
    __,             _(_Z),          _(_X),          _(_C),          _(_V),          _(_B),          __,
    __,             __,             __,             __,             __,
                                                                                    __,             __,
                                                                                                    __,
                                                                    __,             __,             __,
    // right hand
    POPALL,         _(_6),          _(_7),          _(_8),          _(_9),          _(_0),          __,
    __,             _(_J),          _(_U),          _(_R),          _(_L),          _(_semicolon),  __,
    /*_*/           _(_Y),          _(_N),          _(_I),          _(_O),          _(_H),          __,
    __,             _(_P),          _(_M),          _(_comma),      _(_period),     _(_slash),      __,
                                    __,             __,             __,             __,             __,
    __,           __,
    __,
    __,           __,           __
  ),
};
