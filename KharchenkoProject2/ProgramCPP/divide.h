// CMSC 330 Advanced Programming Languages
// Project 2 
// Vadym Kharchenko
// October 3, 2024

// This file contains the class definition of the Divide class, which is a subclass of SubExpression,
// which in turn is a subclass of the Expression. This is really simple, the purpose is to divide left 
// to the right side.

class Divide: public SubExpression {
public:
    Divide(Expressions* left, Expressions* right): SubExpression(left, right) {
    }
    float evaluate() {
       return 1.0 * left->evaluate() / right->evaluate();
    }
};