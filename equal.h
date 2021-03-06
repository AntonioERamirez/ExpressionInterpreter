/*
 * Filename: equal.h
 * Date: 13 Oct 19
 * Author: Antonio Ramirez
 * Purpose: Handles the = operator.
 */

#ifndef PROJECT2_EQUAL_H
#define PROJECT2_EQUAL_H


class Equal: public SubExpression
{
public:
    Equal(Expression* left, Expression* right):
            SubExpression(left, right)
    {
    }
    int evaluate()
    {
        return left->evaluate() == right->evaluate();
    }
};


#endif //PROJECT2_EQUAL_H
