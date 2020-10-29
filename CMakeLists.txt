cmake_minimum_required(VERSION 3.14)
project(Project2)

set(CMAKE_CXX_STANDARD 14)

add_executable(Project2 module3.cpp expression.h subexpression.cpp subexpression.h plus.h operand.cpp operand.h variable.cpp variable.h literal.h symboltable.cpp symboltable.h parse.cpp parse.h minus.h times.h divide.h ternary.h negation.h greaterthan.h lessthan.h equal.h and.h or.h)