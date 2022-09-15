//
// Created by oladipupo on 9/10/22.

// Module for representing sequences of bytecode
//

#ifndef BYTECODE_VM_CHUNK_H
#define BYTECODE_VM_CHUNK_H

#include "common.h"

typedef enum {
    OP_RETURN,
} OpCode;

typedef struct {
    int count;
    int capacity;
    uint8_t* code;
} chunk;

#endif //BYTECODE_VM_CHUNK_H