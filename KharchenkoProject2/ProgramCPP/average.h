// CMSC 330 Advanced Programming Languages
// Project 2 
// Vadym Kharchenko
// October 3, 2024

// This file contains the class definition of the Average class, which is a subclass of SubExpression,
// which in turn is a subclass of the Expression. The left side of the expression is added to the right 
// side of the expression and divided by 2.0 to get the average of two numbers.

class Average: public SubExpression {
public:
    Average(Expressions* left, Expressions* right): SubExpression(left, right) {
    }
    float evaluate() {
       return (left->evaluate() + right->evaluate()) / 2.0;
    }
};