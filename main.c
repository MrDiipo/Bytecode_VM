#include <stdlib.h>
#include "common.h"
#include "chunk.h"
#include "debug.h"
#define SIZE 6

int sum(const int*, int);


int main(int argc, const char* argv[]) {
    Chunk chunk;
    initChunk(&chunk);
    writeChunk(&chunk, OP_RETURN);
    disassembleChunk(&chunk, "test chunk");
    freeChunk(&chunk);
    return 0;
}

int sum(const int* arr, int n) {
    auto long total = 0;
    printf("The size of the first element of the array is %zd bytes\n", sizeof arr);

    for(long i = 0; i < n; i++) {
        printf("The size of the %d th element of the array is %zd bytes\n", i, sizeof i);
        total += arr[i];
    }
    return total;
}
