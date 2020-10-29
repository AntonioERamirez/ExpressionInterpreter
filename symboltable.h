/*
 * Filename: symboltable.h
 * Date: 13 Oct 19
 * Author: Antonio Ramirez
 * Purpose: Given in class reading. Modified to clear when reading next line.
 */

#ifndef PROJECT2_SYMBOLTABLE_H
#define PROJECT2_SYMBOLTABLE_H


class SymbolTable
{
public:
    SymbolTable() {}
    void insert(string variable, double value);
    double lookUp(string variable) const;
    //Added to clear the table with each line
    void clear() {elements.clear();}
private:
    struct Symbol
    {
        Symbol(string variable, double value)
        {
            this->variable = variable;
            this->value = value;
        }
        string variable;
        double value;
    };
    vector <Symbol> elements;
};

#endif //PROJECT2_SYMBOLTABLE_H
