/*
 * Filename: parse.cpp
 * Date: 13 Oct 19
 * Author: Antonio Ramirez
 * Purpose: Given in the class reading. Handles the utility function parseName().
 */

#include <cctype>
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

#include "parse.h"

string parseName(stringstream& input)
{
    char alnum;
    string name = "";

    input >> ws;
    while (isalnum(input.peek()))
    {
        input >> alnum;
        name += alnum;
    }
    return name;
}
