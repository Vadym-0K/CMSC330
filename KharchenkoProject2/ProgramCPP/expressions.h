// CMSC 330 Advanced Programming Languages
// Project 2 
// Vadym Kharchenko
// October 3, 2024

// This file contains the definition of the Expression class, which is an abstract class that contains one
// abstract (pure virtual) function named evaluate, which must be implemented by all its subclasses.

class Expressions {
public: 
    virtual float evaluate() = 0;
};