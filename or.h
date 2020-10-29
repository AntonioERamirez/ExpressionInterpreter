/*
 * Filename: or.h
 * Date: 13 Oct 19
 * Author: Antonio Ramirez
 * Purpose: Handles the | operator.
 */

#ifndef PROJECT2_OR_H
#define PROJECT2_OR_H


class Or: public SubExpression
{
public:
    Or(Expression* left, Expression* right):
            SubExpression(left, right)
    {
    }
    int evaluate()
    {
        return left->evaluate() || right->evaluate();
    }
};

#endif //PROJECT2_OR_H
