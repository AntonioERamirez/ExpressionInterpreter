/*
 * Filename: minus.h
 * Date: 13 Oct 19
 * Author: Antonio Ramirez
 * Purpose: Handles the - operator.
 */

#ifndef PROJECT2_MINUS_H
#define PROJECT2_MINUS_H


class Minus: public SubExpression
{
public:
    Minus(Expression* left, Expression* right):
            SubExpression(left, right)
    {
    }
    int evaluate()
    {
        return left->evaluate() - right->evaluate();
    }
};


#endif //PROJECT2_MINUS_H
