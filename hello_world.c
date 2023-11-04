#include <math.h>
#include <string.h>
#include <stdlib.h>
#include "emscripten.h"

int intSqrt(int x) {
    return sqrt(x);
}

int addTwoNumbers(int a, int b) {
    return a + b;
}

EMSCRIPTEN_KEEPALIVE
char* returnString() {
    char *cstr = "This is the Wallet (type string)";
    return cstr;
};

EMSCRIPTEN_KEEPALIVE
int getStringLength(char *s) {
    return strlen(s);
}
