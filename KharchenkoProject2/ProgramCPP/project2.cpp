// CMSC 330 Advanced Programming Languages
// Project 2 
// Vadym Kharchenko
// October 3, 2024

// This file contains the main function for the project 2 skeleton. It reads an input file named input.txt
// that contains one statement that includes an expression following by a sequence of variable assignments.
// It parses each statement and then evaluates it.

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

#include "expressions.h"
#include "subexpression.h"
#include "symboltable.h"
#include "parse.h"

SymbolTable symbolTable;

void parseAssignments(stringstream& in);

int main() {
	const int SIZE = 256;
	Expressions* expression;
    char paren, comma, line[SIZE];
 
	ifstream fin;
	fin = ifstream("input.txt");
	if (!(fin.is_open())) {
		cout << "File did not open" << endl;
		system("pause");
		return 1;
	}
	while (true) {
        fin.getline(line, SIZE);
		if (!fin)
			break;
		symbolTable.clear(); // To should be able to initialize the symbol table before each statement 
		//is evaluated, so that variables that are reused do not contain the value from a 
		// previous statement I added a clear function. -Kharchenko 10/03/2024
		stringstream in(line, ios_base::in); 
		in >> paren;
		cout << line << " ";
		try {
			expression = SubExpression::parse(in);
			in >> comma;
			parseAssignments(in);
			float result = expression->evaluate();
			cout << "Value = " << result << endl;
		}
		catch (string message) {
			cout << message << endl;
		}
	}
	system("pause");
	return 0;
}

void parseAssignments(stringstream& in) {
	char assignop, delimiter;
    string variable;
    float value;
    do {
        variable = parseName(in);
        in >> ws >> assignop >> value >> delimiter;
        symbolTable.insert(variable, value);
    }
    while (delimiter == ',');
}
   
