/*
 * Filename: operand.h
 * Date: 13 Oct 19
 * Author: Antonio Ramirez
 * Purpose: Given in class reading. Defines nodes of the expression tree. Modified to accept file input.
 */

#ifndef PROJECT2_OPERAND_H
#define PROJECT2_OPERAND_H


class Operand: public Expression
{
public:
    static Expression* parse(stringstream& input);
};


#endif //PROJECT2_OPERAND_H
