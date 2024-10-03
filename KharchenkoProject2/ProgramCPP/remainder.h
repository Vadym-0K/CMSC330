// CMSC 330 Advanced Programming Languages
// Project 2 
// Vadym Kharchenko
// October 3, 2024

// This file contains the class definition of the Remainder class, which is a subclass of SubExpression,
// which in turn is a subclass of the Expression. The purpose is to evaluate reminder between two numbers, 
// left and right.

class Remainder: public SubExpression {
public:
    Remainder(Expressions* left, Expressions* right): SubExpression(left, right) {
    }
    float evaluate() {
        int leftValue = static_cast<int>(left->evaluate());
        int rightValue = static_cast<int>(right->evaluate());
        return leftValue % rightValue;
    }
};