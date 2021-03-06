/*
 * Filename: plus.h
 * Date: 13 Oct 19
 * Author: Antonio Ramirez
 * Purpose: Handles the + operator. Given in the class reading.
 */

#ifndef PROJECT2_PLUS_H
#define PROJECT2_PLUS_H

class Plus: public SubExpression
{
public:
    Plus(Expression* left, Expression* right):
            SubExpression(left, right)
    {
    }
    int evaluate()
    {
        return left->evaluate() + right->evaluate();
    }
};

#endif //PROJECT2_PLUS_H
