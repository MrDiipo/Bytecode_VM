//
// Created by Neptune on 9/15/2022.
//

#ifndef BYTECODE_VM_MEMORY_H
#define BYTECODE_VM_MEMORY_H

#include "common.h"

#define GROW_CAPACITY(capacity) ((capacity) < 8 ? 8 : (capacity) * 2)
#define GROW_ARRAY(type, pointer, oldCount, newCount) (type*)reallocate(pointer, sizeof(type) * (oldCount), sizeof(type) * (newCount))

void* reallocate(void* pointer, size_t oldSize, size_t newSize);

#endif //BYTECODE_VM_MEMORY_H
