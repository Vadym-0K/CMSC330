// CMSC 330 Advanced Programming Languages
// Project 2 
// Vadym Kharchenko
// October 3, 2024

// This file contains the class definition of the SymbolTable class. The symbol table is represented
// with a vector (list) of type Symbol which is a pair consisting of a variable and its associated value.
// The body of its functions are defined in symboltable.cpp. 

class SymbolTable {
public:
    SymbolTable() {}
    void insert(string variable, float value);
    void clear();
    float lookUp(string variable) const;
private:
    struct Symbol {
        Symbol(string variable, float value) {
            this->variable = variable;
            this->value = value;
        }
        string variable;
        float value;
    };
    vector<Symbol> elements;
};


