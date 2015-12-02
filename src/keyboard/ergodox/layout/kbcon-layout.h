/*
 * ergodox layout : KBCon
 * created by lotem
 */
ERGODOX_LAYOUT = {
  ERGODOX_LAYER( // L0
    // left hand
    _(_grave),      _(_1),          _(_2),          _(_3),          _(_4),          _(_5),          PUSH(3),
    _(_tab),        _(_Q),          _(_W),          _(_E),          _(_R),          _(_T),          _(_backslash),
    _(_esc),        _(_A),          _(_S),          _(_D),          _(_F),          _(_G),
    S2CAP(_shiftL), _(_Z),          _(_X),          _(_C),          _(_V),          _(_B),          _(_equal),
    _(_ctrlL),      _(_altL),       _(_guiL),       CHORD(2),       CHORD(1),
                                                                    S(_9),          S(_0),
                                                                                    _(_altL),
                                                    _(_ctrlL),      _(_tab),        _(_guiL),
    // right hand
    PUSH(4),        _(_6),          _(_7),          _(_8),          _(_9),          _(_0),          _(_backslash),
    _(_quote),      _(_Y),          _(_U),          _(_I),          _(_O),          _(_P),          _(_bs),
    /*_*/           _(_H),          _(_J),          _(_K),          _(_L),          _(_semicolon),  _(_enter),
    _(_dash),       _(_N),          _(_M),          _(_comma),      _(_period),     _(_slash),      S2CAP(_shiftR),
                                    CHORD(1),       CHORD(2),       _(_guiR),       _(_altR),       _(_ctrlR),
    _(_bracketL),   _(_bracketR),
    _(_altR),
    _(_guiR),       _(_bs),         _(_space)
  ),
  ERGODOX_LAYER( // L1
    // left hand
    __,             __,             __,             __,             __,             __,             __,
    __,             S(_1),          S(_2),          S(_3),          S(_4),          S(_5),          __,
    __,             S(_quote),      _(_quote),      S(_9),          S(_0),          S(_slash),
    __,             _(_backslash),  _(_grave),      S(_dash),       _(_dash),       _(_tab),        __,
    __,             __,            __,             __,              __,
                                                                                    __,             __,
                                                                                                    __,
                                                                    __,             __,             __,
    // right hand
    __,             __,             M(PREV_TRACK),  M(PLAY_PAUSE),  M(NEXT_TRACK),  __,             _(_insert),
    __,             S(_6),          S(_7),          S(_8),          S(_grave),      S(_backslash),  _(_del),
                    S(_semicolon),  S(_bracketL),   S(_bracketR),   _(_bracketL),   _(_bracketR),   __,
    __,             _(_bs),         _(_equal),      S(_comma),      S(_period),     S(_equal),      __,
                                    __,             __,             __,             __,             __,
    __,             __,
    __,
    __,             _(_del),        _(_enter)
  ),
  ERGODOX_LAYER( // L2
    // left hand
    BOOTLOADER,     _(_F1),         _(_F2),         _(_F3),         _(_F4),         _(_F5),         _(_F11),
    __,             _(_1_kp),       _(_2_kp),       _(_3_kp),       _(_4_kp),       _(_5_kp),       __,
    __,             _(_add_kp),     _(_sub_kp),     _(_mul_kp),     _(_div_kp),     _(_equal_kp),
    __,             _(_numLock_kp), _(_mute),       _(_volumeD),    _(_volumeU),    _(_tab),        __,
    __,             __,             __,             __,            __,
                                                                                    __,             __,
                                                                                                    __,
                                                                    __,             __,             __,
    // right hand
    _(_F12),        _(_F6),         _(_F7),         _(_F8),         _(_F9),         _(_F10),        __,
    __,             _(_6_kp),       _(_7_kp),       _(_8_kp),       _(_9_kp),       _(_0_kp),       __,
    /*_*/           _(_arrowL),     _(_arrowD),     _(_arrowU),     _(_arrowR),     _(_dec_del_kp), __,
    __,             _(_bs),         _(_home),       _(_pageU),      _(_pageD),      _(_end),        __,
                                    __,             __,             __,             __,             __,
    __,           __,
    __,
    __,           __,           __
  ),
  ERGODOX_LAYER( // L3
    // left hand
    __,             _(_1),          _(_2),          _(_3),          _(_4),          _(_5),          POP(3),
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
    __,           __,
    __,
    __,           __,           __
  ),
  ERGODOX_LAYER( // L4
    // left hand
    __,             _(_1),          _(_2),          _(_3),          _(_4),          _(_5),          __,
    __,             _(_Q),          _(_W),          _(_E),          _(_R),          _(_T),          __,
    __,             _(_A),          _(_S),          _(_D),          _(_F),          _(_G),
    __,             _(_Z),          _(_X),          _(_C),          _(_V),          _(_B),          __,
    __,             __,             __,             _(_grave),      _(_quote),
                                                                                    __,             __,
                                                                                                    __,
                                                                    _(_dash),       _(_equal),      __,
    // right hand
    POP(4),         _(_6),          _(_7),          _(_8),          _(_9),          _(_0),          __,
    __,             _(_Y),          _(_U),          _(_I),          _(_O),          _(_P),          __,
    /*_*/           _(_H),          _(_J),          _(_K),          _(_L),          _(_semicolon),  __,
    __,             _(_N),          _(_M),          _(_comma),      _(_period),     _(_slash),      __,
                                    _(_bracketL),   _(_bracketR),   __,             __,             __,
    __,             __,
    __,
    __,             _(_backslash),  _(_space)
  ),
};
