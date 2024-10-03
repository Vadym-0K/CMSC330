// CMSC 330 Advanced Programming Languages
// Project 2 
// Vadym Kharchenko
// October 3, 2024

// This file contains the class definition of the Maximum class, which is a subclass of SubExpression,
// which in turn is a subclass of the Expression. We're comparing the left and right numbers, if the left
// number is greater than the right number, we return 1, otherwise we return 0.

class Maximum: public SubExpression {
public:
    Maximum(Expressions* left, Expressions* right): SubExpression(left, right) {
    }
    float evaluate() {
        return left->evaluate() > right->evaluate();
    }
};