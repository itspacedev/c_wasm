emcc hello_world.c -o index.html \
    -sEXPORTED_FUNCTIONS=_intSqrt,_addTwoNumbers,_returnString,_getStringLength \
    -sEXPORTED_RUNTIME_METHODS=ccall,cwrap,stringToNewUTF8,UTF8ToString
