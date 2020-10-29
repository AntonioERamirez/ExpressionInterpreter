/*
 * Filename: ternary.h
 * Date: 13 Oct 19
 * Author: Antonio Ramirez
 * Purpose: Used to handle the conditional/ ternary operator : ?
 */

#ifndef PROJECT2_TERNARY_H
#define PROJECT2_TERNARY_H


#include "subexpression.h"


class Ternary: public SubExpression
{
public:
    Ternary(Expression* left, Expression* right, Expression* condition):
            SubExpression(left, right, condition)
    {
    }
    int evaluate()
    {
        if(condition->evaluate()){
            return left->evaluate();
        } else{
            return right->evaluate();
        }
    }
};


#endif //PROJECT2_TERNARY_H
