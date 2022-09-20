//
// Created by Neptune on 9/20/2022.
//

#ifndef BYTECODE_VM_DEBUG_H
#define BYTECODE_VM_DEBUG_H

#include "chunk.h"

void disassembleChunk(Chunk* chunk, const char* name);
int disassembleInstruction(Chunk* chunk, int offset);

#endif //BYTECODE_VM_DEBUG_H
