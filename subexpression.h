/*
 * Filename: subexpression.h
 * Date: 13 Oct 19
 * Author: Antonio Ramirez
 * Purpose: Provided in the class reading. Modified to support conditional operands and accept file input.
 */

#ifndef PROJECT2_SUBEXPRESSION_H
#define PROJECT2_SUBEXPRESSION_H


class SubExpression: public Expression
{
public:
    SubExpression(Expression* left, Expression* right);
    SubExpression(Expression* left, Expression* right, Expression* condition);
    SubExpression(Expression* left);
    static Expression* parse(stringstream& input);
protected:
    Expression* left;
    Expression* right;
    Expression* condition;
};


#endif //PROJECT2_SUBEXPRESSION_H
