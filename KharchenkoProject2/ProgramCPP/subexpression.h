// CMSC 330 Advanced Programming Languages
// Project 2 
// Vadym Kharchenko
// October 3, 2024

// This file contains the class definition of the SubExpression class, which is a subclass of Expression.
// Because it does not implement the abstract function evalauate, it is an abstract class. SubExpression
// objects are represented with the left and right subexpressions. The body of its constructor and the
// static (class) function parse are defined in subexpression.cpp. 

class SubExpression: public Expressions {
public:
    SubExpression(Expressions* left, Expressions* right);
    SubExpression(Expressions* left);
    SubExpression(Expressions* left, Expressions* right1, Expressions* right2);
    SubExpression(Expressions* left, Expressions* right1, Expressions* right2, Expressions* right3);
    static Expressions* parse(stringstream& in);
protected: 
    Expressions* left;
    Expressions* right;
    Expressions* right1;
    Expressions* right2;
    Expressions* right3;
};    