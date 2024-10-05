<p align="center">
<img alt="image" src="project-2.png"/>
</p>

# Math Expression Evaluator With Logical Conditions

## Table of Contents
- [Overview](#overview)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Project Structure](#project-structure)
- [Contributing](#contributing)
- [Contact](#contact)

## Overview
**Math Expression Evaluator With Logical Conditions**: this C++ project implements a parser to analyze and evaluate mathematical expressions and conditional statements within input files. It supports a wide range of operations, including binary, unary, quaternary, and ternary operations, as well as conditional operators like "?" and "#".

The application processes input expressions, ensures that the syntax follows defined grammar rules, and evaluates the expressions to return accurate results. By combining arithmetic and logical operations, this project highlights the ability to create scalable and maintainable solutions using C++.

## Features
- ***Comprehensive Expression Support:*** Handles a wide range of mathematical operations, including arithmetic, logical, and bitwise operations.
- ***Conditional Evaluation:*** Supports "?" and "#" operators for conditional expression evaluation.
- ***File Parsing:*** Processes input files containing mathematical expressions and conditional statements.
- ***Error Handling:*** Implements robust error handling mechanisms to identify and report invalid expressions or syntax errors.
- ***Modular Design:*** Uses a clear, well-defined parser structure for extensibility and maintainability.

## Project Description
The program utilizes a custom-built parser to analyze and evaluate mathematical expressions from input files. The parser follows a grammar defined for the supported operations and conditional statements. It effectively handles binary, unary, quaternary, and ternary operations, as well as conditional operators. <br><br>

The parser processes the input file line by line, identifying and evaluating expressions. For each expression, the parser breaks it down into individual tokens and applies the defined grammar rules to determine the correct order of operations. The program then executes the evaluated expression, returning the result.<br><br>

The program incorporates error handling mechanisms to detect and report invalid expressions or syntax errors in the input file. This ensures robust operation and provides clear feedback to the user. The modular design of the parser allows for easy expansion and customization, making it suitable for future enhancements and modifications.<br><br>

  
## Installation
1. Clone this repository:
    ```bash
    git clone https://github.com/Vadym-0K/CMSC330.git
    ```
2. Navigate to the project directory:

3. Compile the C++ files:

4. Run the program with an input file containing expressions:


## Usage
To use this project:
1. Create a text file containing mathematical expressions and logical conditions. For example:
    ```
    ((a + 4) ~), a = 3;
    ((x * 2.6) + (y - 3)), x = 1.5, y = 2.4;
    (( 7 / z_1) + (z_1 ^ 2)), z_1 = 2;
    ((6 % b) < 5), b = 4;
    (c > d), c = 9, d = 7;
    (e & 8), e = 5;
    (f ? 1 2), f = 0;
    (g # 1 2 3), g = 2;
    (tt + ss), tt = 2;
    (aa + 1), aa = 1, aa = 2;
    ```
2. Run the program with your text file as an argument:
    ```bash
    ./evaluator expressions.txt
    ```

The program will parse and evaluate the expressions, returning the results based on the logical and mathematical conditions specified.

## Project Structure
```
├── project2.cpp  
├── operand.cpp
├── symboltable.cpp
├── sub_expressions.cpp
├── subexpression.cpp
├── parse.cpp
└── variable.cpp
```
Header Files:
```
├── expressions.h
├── average.h
├── binary_expression.h
├── divide.h
├── exponent.h
├── literal.h
├── maximum.h
├── minimum.h
├── minus.h
├── multiply.h
├── negate.h
├── operand.h
├── parse.h
├── plus.h
├── quaternary_expression.h
├── remainder.h
├── sub_expressions.h
├── subexpression.h
├── symboltable.h
├── ternary.h
├── ternary_expression.h
├── unary.h
├── unary_expression.h
├── variable.h
└── input
```
shell
Copy code

## Contributing
Contributions are welcome! Feel free to fork this repository, make your changes, and submit a pull request.


## Contact
If you have any questions or suggestions, feel free to contact me at:  
**Vadym Kharchenko**  
Email: vadym.kharchenko@yahoo.com
