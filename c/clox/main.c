//
//  main.c
//  clox
//
//  Created by Ken Wilcox on 5/3/25.
//

#include "common.h"
#include "chunk.h"
#include "debug.h"

int main(int argc, const char * argv[]) {
    Chunk chunk;
    initChunk(&chunk);
    writeChunk(&chunk, OP_RETURN);

    disassembleChunk(&chunk, "test chunk");
    freeChunk(&chunk);
    return 0;
}
