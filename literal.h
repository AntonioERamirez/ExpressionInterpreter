/*
 * Filename: literal.h
 * Date: 13 Oct 19
 * Author: Antonio Ramirez
 * Purpose: Given in class reading. Defines nodes of the expression tree that contain literal values.
 */

#ifndef PROJECT2_LITERAL_H
#define PROJECT2_LITERAL_H

class Literal: public Operand
{
public:
    Literal(int value)
    {
        this->value = value;
    }
    int evaluate()
    {
        return value;
    }
private:
    int value;
};

#endif //PROJECT2_LITERAL_H
