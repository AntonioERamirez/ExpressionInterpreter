/*
 * Filename: variable.h
 * Date: 13 Oct 19
 * Author: Antonio Ramirez
 * Purpose: Given in class reading. Defines nodes of the expression tree that contain variables. Modified to accept file input.
 */

#include <strstream>
#include <vector>
using namespace std;

#include "expression.h"
#include "operand.h"
#include "variable.h"
#include "symboltable.h"

extern SymbolTable symbolTable;

int Variable::evaluate()
{
    return symbolTable.lookUp(name);
}
