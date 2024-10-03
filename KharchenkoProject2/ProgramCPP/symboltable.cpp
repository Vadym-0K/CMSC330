// CMSC 330 Advanced Programming Languages
// Project 2 
// Vadym Kharchenko
// October 3, 2024

// This file contains the body of the functions contained in The SymbolTable class. The insert function 
// inserts a new variable symbol and its value into the symbol table and the lookUp function returns
// that value of the supplied variable symbol name.

#include <string>
#include <vector>
using namespace std;

#include "symboltable.h"

void SymbolTable::insert(string variable, float value) {
    //cheking if variable is already assigned - Kharchenko 10/03/2024
    for (int i = 0; i < elements.size(); i++) {
        if (elements[i].variable == variable) {
            throw string("ERROR: Variable is already assigned.");
        }
    }
    const Symbol& symbol = Symbol(variable, value);
    elements.push_back(symbol);
}

float SymbolTable::lookUp(string variable) const {
    for (int i = 0; i < elements.size(); i++)
        if (elements[i].variable == variable)
             return elements[i].value;
    // cheking if variable is is not assigned. - Kharchenko 10 / 03 / 2024
    if (variable == "");
		throw string("ERROR: Variable is not assigned.");
    return 0;
}

void SymbolTable::clear() {
    elements.clear();
}

