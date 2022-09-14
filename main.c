#include <stdlib.h>
#include "common.h"


int main(int argc, const char* argv[]) {
    printf("Hello, World!\n");
    for (int i = 1; i <= 10; ++i) {
        printf("%d ", 1 + (rand() % 6)); // display random die value
    }
    return 0;
}
