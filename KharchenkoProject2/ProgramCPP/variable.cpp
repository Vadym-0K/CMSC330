// CMSC 330 Advanced Programming Languages
// Project 2 
// Vadym Kharchenko
// October 3, 2024

// This file contains the body of the function contained in The Variable class. The evaluate function 
// looks up te value of a variable in the symbol table and returns that value.

#include <string>
#include <vector>
using namespace std;

#include "expressions.h"
#include "operand.h"
#include "variable.h"
#include "symboltable.h"

extern SymbolTable symbolTable;

float  Variable::evaluate() {
    return symbolTable.lookUp(name);
}