
#include <stdio.h>
#include <string.h>

#include <stdlib.h>
#include "common.h"
#include "chunk.h"
#include "debug.h"
#include "vm.h"
#define SIZE 6

static void repl(){
    char line[1024];
    for (; ;) {
        printf(">  ");

        if (!fgets(line, sizeof (line), stdin)) {
            printf("\n");
            break;
        }
        interpret(line);
    }
}

static char* readFile(const char* path) {
    FILE* file = fopen(path, "rb");

    fseek(file, 0L, SEEK_END);
    size_t fileSize = ftell(file);
    rewind(file);

    char* buffer = (char*) malloc(fileSize + 1);
    size_t bytesRead = fread(buffer, sizeof (char), fileSize, file);
    buffer[bytesRead] = '\0';

    fclose(file);
    return buffer;
}

static void runfile(const char* path) {
    char * source = readFile(path);
    InterpretResult result = interpret(source);
    free(source);

    if (result == INTERPRET_COMPILE_ERROR) exit(65);
    if (result == INTERPRET_RUNTIME_ERROR) exit(70);
}


int main(int argc, const char* argv[]) {
    initVM();

    if (argc == 1) {
        repl();
    } else if (argc == 2) {
        runfile(argv[1]);
    } else {
        fprintf(stderr, "Usage: cashew [path]\n");
        exit(64);
    }
//    Chunk chunk;
//    initChunk(&chunk);
//    int constant = addConstant(&chunk, 1.2);
//    writeChunk(&chunk, OP_CONSTANT, 123);
//    writeChunk(&chunk, constant, 123);
//
//    constant = addConstant(&chunk, 3.4);
//    writeChunk(&chunk, OP_CONSTANT, 123);
//    writeChunk(&chunk, constant, 123);
//
//    writeChunk(&chunk, OP_ADD, 123);
//
//    constant = addConstant(&chunk, 5.6);
//    writeChunk(&chunk, OP_CONSTANT, 123);
//    writeChunk(&chunk, constant, 123);
//
//    writeChunk(&chunk, OP_DIVIDE, 123);
//    writeChunk(&chunk, OP_NEGATE, 123);
//    writeChunk(&chunk, OP_RETURN, 123);
//    disassembleChunk(&chunk, "test chunk");
//    interpret(&chunk);
    freeVM();
    return 0;
}
