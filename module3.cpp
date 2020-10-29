/*
 * Filename: module3.cpp
 * Date: 13 Oct 19
 * Author: Antonio Ramirez
 * Purpose: Provided in the class reading. Modified to support input from a file instead of reading user input from console.
 */

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <fstream>

using namespace std;

#include "expression.h"
#include "subexpression.h"
#include "symboltable.h"
#include "parse.h"

SymbolTable symbolTable;

//Parsing using the file input
void parseAssignments(stringstream& input);

int main()
{
    //Used for the ifstream.getline() method
    const int SIZE = 100;
    Expression* expression;
    char paren, comma, line[SIZE];
    //Reading the file
    ifstream ifs("../test.txt");
    while (true)
    {
        //Clearing any previous data
        symbolTable.clear();
        //Grabbing the file line
        ifs.getline(line, SIZE);
        //If no line, break the loop and end
        if (!ifs)
            break;
        stringstream input(line, ios_base::in);
        input >> paren;
        //Parsing from file
        expression = SubExpression::parse(input);
        input >> comma;
        //Parsing from file
        parseAssignments(input);
        //Saving result to variable
        int result = expression->evaluate();
        //Outputting results to the console
        cout << "Value = " << result << " for expression: " << line << endl;
    }
    return 0;

}

//Used to parse and enter assignments into the SymbolTable and then evaluate
void parseAssignments(stringstream& input)
{
    char assignop, delimiter;
    string variable;
    double value;
    do
    {
        variable = parseName(input);
        input >> ws >> assignop >> value >> delimiter;
        symbolTable.insert(variable, value);
    }
    while (delimiter == ',');
}