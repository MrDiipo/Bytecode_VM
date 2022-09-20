//
// Created by Neptune on 9/20/2022.
//

#ifndef BYTECODE_VM_VALUE_H
#define BYTECODE_VM_VALUE_H

#include "common.h"

typedef double Value;

typedef struct {
    int capacity;
    int count;
    Value* values;
} ValueArray;

void initValueArray(ValueArray* array);
void writeValueArray(ValueArray* array, Value value);
void freeValueArray(ValueArray* array);

#endif //BYTECODE_VM_VALUE_H
