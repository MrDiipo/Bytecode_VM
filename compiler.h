
#ifndef BYTECODE_VM_COMPILER_H
#define BYTECODE_VM_COMPILER_H

#include "vm.h"
#include "object.h"

bool compile(const char* source, Chunk *chunk);

#endif //BYTECODE_VM_COMPILER_H
