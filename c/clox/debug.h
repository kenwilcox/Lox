//
//  debug.h
//  clox
//
//  Created by Ken Wilcox on 5/3/25.
//

#ifndef clox_debug_h
#define clox_debug_h

#include "chunk.h"

void disassembleChunk(Chunk* chunk, const char* name);
int disassembleInstruction(Chunk* chunk, int offset);

#endif
