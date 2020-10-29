/*
 * Filename: times.h
 * Date: 13 Oct 19
 * Author: Antonio Ramirez
 * Purpose: Handles the * operator.
 */

#ifndef PROJECT2_TIMES_H
#define PROJECT2_TIMES_H


class Times: public SubExpression
{
public:
    Times(Expression* left, Expression* right):
            SubExpression(left, right)
    {
    }
    int evaluate()
    {
        return left->evaluate() * right->evaluate();
    }
};


#endif //PROJECT2_TIMES_H
