/*
 * Filename: and.h
 * Date: 13 Oct 19
 * Author: Antonio Ramirez
 * Purpose: Handles the & operator.
 */

#ifndef PROJECT2_AND_H
#define PROJECT2_AND_H


class And: public SubExpression
{
public:
    And(Expression* left, Expression* right):
            SubExpression(left, right)
    {
    }
    int evaluate()
    {
        return left->evaluate() && right->evaluate();
    }
};


#endif //PROJECT2_AND_H
