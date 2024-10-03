// CMSC 330 Advanced Programming Languages
// Project 2 
// Vadym Kharchenko
// October 3, 2024

// This file contains the definition of the Literal class, whose representation consists of the value
// of the literal. Because both of its functions are one line functions, they are implemented as inline 
// functions. The constructor saves the value of the literal. Because this class is a subclass of Operand
// which in turn is a subclass of Expression, it must implement the function evaluate, which returns the
// value that corresponds to the literal.

// I only changed the number type to accept float.

class Literal: public Operand {
public:
    Literal(float value) {
        this->value = value;
    }
    float evaluate() {
        return value;
    }
private:
    float value;
};