/*
 * Filename: divide.h
 * Date: 13 Oct 19
 * Author: Antonio Ramirez
 * Purpose: Handles the division operator.
 */

#ifndef PROJECT2_DIVIDE_H
#define PROJECT2_DIVIDE_H


class Divide: public SubExpression
{
public:
    Divide(Expression* left, Expression* right):
            SubExpression(left, right)
    {
    }
    int evaluate()
    {
        return left->evaluate() / right->evaluate();
    }
};


#endif //PROJECT2_DIVIDE_H
