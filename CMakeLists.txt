cmake_minimum_required(VERSION 3.23)
project(Bytecode_VM C)

set(CMAKE_C_STANDARD 11)

add_executable(Bytecode_VM main.c common.h chunk.h chunk.c memory.h memory.c debug.h debug.c value.c value.h vm.c vm.h)
