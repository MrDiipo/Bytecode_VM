

#ifndef BYTECODE_VM_DEBUG_H
#define BYTECODE_VM_DEBUG_H

#include "chunk.h"

void disassembleChunk(Chunk* chunk, const char* name);
int disassembleInstruction(Chunk* chunk, int offset);

#endif //BYTECODE_VM_DEBUG_H
