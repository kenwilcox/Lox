//
//  compiler.h
//  clox
//
//  Created by Ken Wilcox on 5/13/25.
//

#ifndef clox_compiler_h
#define clox_compiler_h

#include "object.h"
#include "vm.h"

ObjFunction* compile(const char* source);

#endif
