// CMSC 330 Advanced Programming Languages
// Project 2 
// Vadym Kharchenko
// October 3, 2024
// 
// This file contains the body of the functions contained in The SubExpression class, which includes
// the constructor that initializes the left and right subexpressions and the static function parse
// parses the subexpression. Addition and subtraction are the two operators that are implemented.

#include <iostream>
#include <sstream>
using namespace std;

#include "expressions.h"
#include "subexpression.h"
#include "operand.h"

#include "binary_expression.h"
#include "ternary_expression.h"
#include "unary_expression.h"
#include "quaternary_expression.h"

SubExpression::SubExpression(Expressions* left, Expressions* right) {
    this->left = left;
    this->right = right;
}
//  Total 5 overloads to be able to parse ternary and quaternary and to negate a subexpression.
// - Kharchenko 10/03/2024
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
    // I had to initilize ptrs to be able to use them in a conditional statement,
    // for the tarnary expression, and unary. - Kharchenko 10/03/2024
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
        