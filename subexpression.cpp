/*
 * Filename: subexpression.cpp
 * Date: 13 Oct 19
 * Author: Antonio Ramirez
 * Purpose: Provided in the class reading. Modified to support conditional operands/ operators and accept file input.
 */

#include <iostream>
#include <sstream>
using namespace std;

#include "expression.h"
#include "subexpression.h"
#include "operand.h"
#include "plus.h"
#include "minus.h"
#include "times.h"
#include "divide.h"
#include "ternary.h"
#include "negation.h"
#include "greaterthan.h"
#include "lessthan.h"
#include "equal.h"
#include "and.h"
#include "or.h"

SubExpression::SubExpression(Expression* left, Expression* right)
{
    this->left = left;
    this->right = right;
}

//For the ternary/conditional operation
SubExpression::SubExpression(Expression *left, Expression *right, Expression *condition)
{
    this->left = left;
    this->right = right;
    this->condition = condition;
}

//For the negation operator
SubExpression::SubExpression(Expression* left)
{
    this->left = left;
}

//Accepts file input
Expression* SubExpression::parse(stringstream& input)
{
    Expression* left;
    Expression* right;
    Expression* condition;
    char operation, paren, question;

    left = Operand::parse(input);
    input >> operation;

    //Switch to handle all operations
    switch (operation)
    {
        case '+':
            right = Operand::parse(input);
            input >> paren;
            return new Plus(left, right);
        case '-':
            right = Operand::parse(input);
            input >> paren;
            return new Minus(left, right);
        case '*':
            right = Operand::parse(input);
            input >> paren;
            return new Times(left, right);
        case '/':
            right = Operand::parse(input);
            input >> paren;
            return new Divide(left, right);
        case '>':
            right = Operand::parse(input);
            input >> paren;
            return new GreaterThan(left, right);
        case '<':
            right = Operand::parse(input);
            input >> paren;
            return new LessThan(left, right);
        case '=':
            right = Operand::parse(input);
            input >> paren;
            return new Equal(left, right);
        case '&':
            right = Operand::parse(input);
            input >> paren;
            return new And(left, right);
        case '|':
            right = Operand::parse(input);
            input >> paren;
            return new Or(left, right);
        case ':':
            right = Operand::parse(input);
            input >> question;
            condition = Operand::parse(input);
            input >> paren;
            return new Ternary(left, right, condition);
        case '!':
            input >> paren;
            return new Negation(left);
    }
    return 0;
}
