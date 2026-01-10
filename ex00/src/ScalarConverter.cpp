#include "ScalarConverter.hpp"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
// Default constructor
ScalarConverter::ScalarConverter(void)
{
    return ;
}

// Copy constructor
ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
    (void) other;
    return ;
}

// Assignment operator overload
ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{
    (void) other;
    return (*this);
}

// Destructor
ScalarConverter::~ScalarConverter(void)
{
    return ;
}

void ScalarConverter::convert(const std::string &str)
{
    e_type type = identifyType(str);
    if (type == CHAR)
        displayChar(str);
    else if(type == INT)
        displayInt(str);
    else if(type == SPECIAL)
        displaySpecial(str);
    else if(type == FLOAT)
        displayFloat(str);
    else if(type == DOUBLE)
        displayDouble(str);
    else if(type == INVALID)
        std::cout << "invalid: " << str << ".0" << std::endl; 
}
/*
    char checkChar;
    long checkInt;
    float checkFloat;
    double checkDouble;
    const char *input;

    input = str.c_str();
    //1. catch char
    //2. int
    checkInt =  strtol(input, NULL, 10);
    checkChar = checkInt;
    checkFloat = strtof(input, NULL);
    checkDouble = strtod(input, NULL);

    if(checkInt == 0)
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: " << checkChar << std::endl;
    if (checkInt < INT_MIN || checkInt > INT_MAX)
    {
        std::cout << "int: impossible" << std::endl;
    }
    else
    {
        //int intValue = static_cast<int>(checkInt);
        std::cout << "int: " << checkInt << std::endl;
    }
    //3. float
        std::cout << "float: " << checkFloat << std::endl;
    //4. double
        std::cout << "double: " << checkDouble << std::endl;

    */