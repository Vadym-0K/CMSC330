// CMSC 330 Advanced Programming Languages
// Project 2 
// Vadym Kharchenko
// October 3, 2024

// This file contains the class definition of the Ternary class, which is a subclass of SubExpression,
// which in turn is a subclass of the Expression. This is a triple conditional expression. if the first 
// number is less than 0 we return 1st right number, if the first number is equal to 0 we return 2nd 
// right number, if the first number is greater than 0 we return 3rd right number. And if the first number 
// is 0, we return 2nd right number.


class Ternary : public SubExpression {
public:
    Ternary(Expressions* left, Expressions* right1, Expressions* right2, Expressions* right3): SubExpression(left, right1, right2, right3) {
    }
    float evaluate()  {
       if (left->evaluate() < 0) { return right1->evaluate(); }
       else if (left->evaluate() == 0) { return right2->evaluate(); }
       else { return right3->evaluate(); }
    }
};