/*
 * Filename: variable.h
 * Date: 13 Oct 19
 * Author: Antonio Ramirez
 * Purpose: Given in class reading. Defines nodes of the expression tree that contain variables. Modified to accept file input.
 */

#ifndef PROJECT2_VARIABLE_H
#define PROJECT2_VARIABLE_H


class Variable: public Operand
{
public:
    Variable(string name)
    {
        this->name = name;
    }
    int evaluate();
private:
    string name;
};


#endif //PROJECT2_VARIABLE_H
