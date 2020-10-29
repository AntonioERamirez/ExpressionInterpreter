/*
 * Filename: negation.h
 * Date: 13 Oct 19
 * Author: Antonio Ramirez
 * Purpose: Handles the ! operator.
 */

#ifndef PROJECT2_NEGATION_H
#define PROJECT2_NEGATION_H


class Negation: public SubExpression
{
public:
    Negation(Expression* left):
            SubExpression(left)
    {
    }
    int evaluate()
    {
        return !left->evaluate();
    }
};



#endif //PROJECT2_NEGATION_H
