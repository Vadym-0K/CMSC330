// CMSC 330 Advanced Programming Languages
// Project 2 
// Vadym Kharchenko
// October 3, 2024

// This file contains the class definition of the Multiply class, which is a subclass of SubExpression,
// which in turn is a subclass of the Expression. Here I'm just multiplying left number to right number.
class Multiply: public SubExpression {
public:
    Multiply(Expressions* left, Expressions* right): SubExpression(left, right) {
    }
    float evaluate() {
       return left->evaluate() * right->evaluate();
    }
};