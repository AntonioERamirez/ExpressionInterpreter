/*
 * Filename: greaterthan.h
 * Date: 13 Oct 19
 * Author: Antonio Ramirez
 * Purpose: Handles the > operator.
 */

#ifndef PROJECT2_GREATERTHAN_H
#define PROJECT2_GREATERTHAN_H


class GreaterThan: public SubExpression
{
public:
    GreaterThan(Expression* left, Expression* right):
            SubExpression(left, right)
    {
    }
    int evaluate()
    {
        return left->evaluate() > right->evaluate();
    }
};


#endif //PROJECT2_GREATERTHAN_H
