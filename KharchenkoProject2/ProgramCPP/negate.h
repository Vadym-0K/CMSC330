// CMSC 330 Advanced Programming Languages
// Project 2 Skeleton
// UMGC CITE
// Spring 2023

// This file contains the class definition of the Negate class, which is a subclass of SubExpression,
// which in turn is a subclass of the Expression. '~' after the expression indicates that the expression is negated.
// The function returns -left number. because '~' symbol is the right most operator in the expression, or 
// in a smaller scope of the expression.


class Negate: public SubExpression {
public:
    Negate(Expressions* left): SubExpression(left) {
    }
    float evaluate() {
       return -left->evaluate();
    }
};