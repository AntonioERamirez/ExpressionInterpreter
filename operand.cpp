/*
 * Filename: operand.cpp
 * Date: 13 Oct 19
 * Author: Antonio Ramirez
 * Purpose: Given in class reading. Defines nodes of the expression tree. Modified to accept file input.
 */

#include <cctype>
#include <iostream>
#include <list>
#include <string>
#include <sstream>

using namespace std;

#include "expression.h"
#include "subexpression.h"
#include "operand.h"
#include "variable.h"
#include "literal.h"
#include "parse.h"

Expression* Operand::parse(stringstream& input)
{
    char paren;
    double value;

    input >> ws;
    if (isdigit(input.peek()))
    {
        input >> value;
        Expression* literal = new Literal(value);
        return literal;
    }
    if (input.peek() == '(')
    {
        input >> paren;
        return SubExpression::parse(input);
    }
    else
        return new Variable(parseName(input));
}
