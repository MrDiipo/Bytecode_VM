
#ifndef BYTECODE_VM_VM_H
#define BYTECODE_VM_VM_H
#include "chunk.h"
#define STACK_MAX 256

typedef struct {
    Chunk* chunk;
    uint8_t *ip;
    Value stack[STACK_MAX];
    Value* stackTop;

    Obj* objects;
} VM;

typedef enum {
    INTERPRET_OK,
    INTERPRET_COMPILE_ERROR,
    INTERPRET_RUNTIME_ERROR
} InterpretResult;

void initVM();
InterpretResult interpret(const char* source);
void freeVM();
void push(Value value);
Value pop();

#endif //BYTECODE_VM_VM_H
