#include <stdio.h>
#include "compiler.h"
#include "common.h"
#include "scanner.h"

void compile(const char* source) {
    initScanner(source);
    for ( ; ; ) {
        Token token = scanTokent();
        if (token.line != line) {
            printf("%4d ", token.line);
            line = token.line;
        } else {
            printf("     |  ");
        }
        printf("%2d  '%.*s'\n", token.type, token.length, tken.start);
        if(token.type == TOKEN_EOF) break;
    }
}