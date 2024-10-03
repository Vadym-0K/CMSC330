// CMSC 330 Advanced Programming Languages
// Project 2 Skeleton
// UMGC CITE
// Spring 2023

// This file contains the body of the functions contained in The SubExpression class, which includes
// the constructor that initializes the left and right subexpressions and the static function parse
// parses the subexpression. Addition and subtraction are the two operators that are implemented.

#include <iostream>
#include <sstream>
using namespace std;

#include "expressions.h"
#include "sub_expressions.h"
#include "operand.h"
#include "plus.h"
#include "minus.h"
#include "multiply.h"
#include "divide.h"
#include "remainder.h"
#include "exponent.h"
#include "minimum.h"
#include "maximum.h"
#include "average.h"
#include "negate.h"
#include "ternary.h"
#include "unary.h"

SubExpression::SubExpression(Expressions* left, Expressions* right) {
    this->left = left;
    this->right = right;
}
SubExpression::SubExpression(Expressions* left) {
    this->left = left;
}

SubExpression::SubExpression(Expressions* left, Expressions* right1, Expressions* right2) 
{
    this->left = left;
    this->right1 = right1;
    this->right2 = right2;
}
SubExpression::SubExpression(Expressions* left, Expressions* right1, Expressions* right2, Expressions* right3)
{
    this->left = left;
    this->right1 = right1;
    this->right2 = right2;
    this->right3 = right3;
}

Expressions* SubExpression::parse(stringstream& in) {
    Expressions* left;
    Expressions* right = nullptr;
    Expressions* right1 = nullptr, * right2 = nullptr, * right3 = nullptr;
    char operation, paren, unary, ternary;
    left = Operand::parse(in);
    in >> operation;
    if (operation == '?') {
        right1 = Operand::parse(in);
        right2 = Operand::parse(in);
    }
    else if (operation == '#') {
        right1 = Operand::parse(in);
        right2 = Operand::parse(in);
        right3 = Operand::parse(in);
    }
    else
    {
        right = Operand::parse(in);
    }
    
    in >> paren;


    switch (operation) {
        case '+':
            return new Plus(left, right);
        case '-':
            return new Minus(left, right);
        case '*':
            return new Multiply(left, right);
        case '/':
			return new Divide(left, right);
		case '%':
			return new Remainder(left, right);
		case '^':
			return new Exponent(left, right);
        case '<':
			return new Minimum(left, right);
		case '>':
			return new Maximum(left, right);
        case '&':
            return new Average(left, right);
		case '~':
			return new Negate(left);
        case '?':
			return new Unary(left, right1, right2);
		case '#':
            return new Ternary(left, right1, right2, right3);
    }
    return 0;
}
        