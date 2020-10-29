/*
 * Filename: symboltable.cpp
 * Date: 13 Oct 19
 * Author: Antonio Ramirez
 * Purpose: Given in class reading. Modified to clear when reading next line.
 */

#include <string>
#include <vector>
using namespace std;

#include "symboltable.h"


void SymbolTable::insert(string variable, double value)
{
    const Symbol& symbol = Symbol(variable, value);
    elements.push_back(symbol);
}

double SymbolTable::lookUp(string variable) const
{
    for (int i = 0; i < elements.size(); i++)
        if (elements[i].variable == variable)
            return elements[i].value;
    return -1;
}