/*
 * Filename: lessthan.h
 * Date: 13 Oct 19
 * Author: Antonio Ramirez
 * Purpose: Handles the < operator.
 */

#ifndef PROJECT2_LESSTHAN_H
#define PROJECT2_LESSTHAN_H


class LessThan: public SubExpression
{
public:
    LessThan(Expression* left, Expression* right):
            SubExpression(left, right)
    {
    }
    int evaluate()
    {
        return left->evaluate() < right->evaluate();
    }
};

#endif //PROJECT2_LESSTHAN_H
