; can't verify if __DATE__ and __TIME__ are correct, so this test will just try to compile
; and DISPLAY some values in the test log
    DISPLAY "Predefined macros: __DATE__ = \"", __DATE__, "\" __TIME__ = \"", __TIME__, "\" __VERSION__ = \"", __VERSION__, "\" __SJASMPLUS__ = ", __SJASMPLUS__, " __PASS__ = ", __PASS__

    DD  __SJASMPLUS__
    DB  __VERSION__
    DB  __DATE__
    DB  __TIME__
    DD  __ERRORS__, __WARNINGS__
    DB  __PASS__
