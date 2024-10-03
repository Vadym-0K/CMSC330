// CMSC 330 Advanced Programming Languages
// Project 2 
// Vadym Kharchenko
// October 3, 2024

// This file contains the class definition of the Exonent class, which is a subclass of SubExpression,
// which in turn is a subclass of the Expression. I used an imbeded 'pow' call given the primary number
// which is on the left side, and the right number that represents to what power we're evaluating.

class Exponent: public SubExpression {
public:
    Exponent(Expressions* left, Expressions* right): SubExpression(left, right) {
    }
    float evaluate() {
       return 1.0 * pow(left->evaluate(), right->evaluate());
    }
};