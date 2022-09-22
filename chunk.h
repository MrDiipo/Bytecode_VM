//
// Created by oladipupo on 9/10/22.

// Module for representing sequences of bytecode
//

#ifndef BYTECODE_VM_CHUNK_H
#define BYTECODE_VM_CHUNK_H

#include "common.h"
#include "value.h"

typedef enum {
    OP_CONSTANT,
    OP_NEGATE,
    OP_RETURN,
} OpCode;

typedef struct {
    int count;
    int capacity;
    uint8_t* code;
    int* lines;
    ValueArray constants;
} Chunk;

void initChunk(Chunk* chunk);
void freeChunk(Chunk* chunk);
void writeChunk(Chunk* chunk, uint8_t byte, int line);
int addConstant(Chunk* chunk, Value value);

#endif //BYTECODE_VM_CHUNK_H
