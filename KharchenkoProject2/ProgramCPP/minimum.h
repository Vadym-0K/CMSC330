// CMSC 330 Advanced Programming Languages
// Project 2 
// Vadym Kharchenko
// October 3, 2024

// This file contains the class definition of the Minimum class, which is a subclass of SubExpression,
// which in turn is a subclass of the Expression. We're comparing left and right numbers. If the left
// number is less than the right number, we return 1. Otherwise, we return 0.

class Minimum : public SubExpression {
public:
    Minimum(Expressions* left, Expressions* right): SubExpression(left, right) {
    }
    float evaluate() {
        return left->evaluate() < right->evaluate();
    }
};