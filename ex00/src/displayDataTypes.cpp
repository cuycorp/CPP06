#include "ScalarConverter.hpp"
#include <cmath>
#include <stdlib.h>
#include <climits>
#include <cfloat>

void displayChar(const std::string &str)
{
    char c;
    if (str.length() == 1)
        c = str[0];
    else
        c = str[1];
    if (c >= 32 && c <=126)
    {
        std::cout << "char: " << '\'' << c << '\'' << std::endl; 
        std::cout << "int: " << static_cast<int>(c) << std::endl;
        std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
    }
}
void displaySpecial(const std::string &str)
{
    if (str == "nan" || str == "nanf")
    {
        printString("char: ", "impossible");
        printString("int: ", "impossible"); 
        printString("float:  ", "nanf");
        printString("double: ", "nan"); 
    }
    else if(str == "+inf" || str == "+inff" || str == "inff")
    {
        printString("char: ", "impossible");
        printString("int: ", "impossible"); 
        printString("float:  ", "+inff");
        printString("double: ", "+inf"); 
    }
    else if(str == "-inf" || str == "-inff")
    {
        printString("char: ", "impossible");
        printString("int: ", "impossible"); 
        printString("float:  ", "-inff");
        printString("double: ", "-inf"); 
    }
}


void displayInt(const std::string &str)
{
    long n;
    const char *nStr;

    nStr = str.c_str();
    n = strtol(nStr, NULL, 10);
    
    if (n < 32 || n > 126)
        std::cout << "char: " << "Non displayable" << std::endl;
    else
        std::cout << "char: " << '\'' <<  static_cast<char>(n) << '\'' << std::endl;
    if(n < INT_MIN || n > INT_MAX)
        std::cout << "int: " << "impossible" << std::endl;
    else
        std::cout << "int: " << n << std::endl;
    std::cout << "float: " << static_cast<float>(n) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(n) << ".0" << std::endl;
}

void displayFloat(const std::string &str)
{
    float n = 0.0;
    bool tolerance;
    const char *nStr;

    nStr = str.c_str();
    n = strtof(nStr, NULL);
    tolerance = std::fabs(n - static_cast<int>(n)) < 0.0000000000001;

    if (n < 32 || n > 126)
        std::cout << "char: " << "Non displayable" << std::endl;
    else
        std::cout << "char: " << '\'' <<  static_cast<char>(n) << '\'' << std::endl;
    if (static_cast<int>(n) < INT_MIN || static_cast<int>(n) > INT_MAX)
        std::cout << "int: " << "impossible" << std::endl;
    std::cout << "int: " << static_cast<int>(n) << std::endl;
    std::cout << "float: " << n << (tolerance ? ".0f" : "f") << std::endl;
    std::cout << "double: " << static_cast<double>(n) << (tolerance ? ".0" : "") << std::endl;
}

void displayDouble(const std::string &str)
{
    double_t n = 0.0;
    bool tolerance;
    const char *nStr;

    nStr = str.c_str();
    n = strtod(nStr, NULL);
    tolerance = std::fabs(n - static_cast<int>(n)) < 0.0000000000001;

    if (n < 32 || n > 126)
        std::cout << "char: " << "Non displayable" << std::endl;
    else
        std::cout << "char: " << '\'' <<  static_cast<char>(n) << '\'' << std::endl;
    if (static_cast<int>(n) < INT_MIN || static_cast<int>(n) > INT_MAX)
        std::cout << "int: " << "impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(n) << std::endl;
    std::cout << "float: " << static_cast<float>(n) << (tolerance ? ".0f" : "f") << std::endl;
    std::cout << "double: " << n << (tolerance ? ".0" : "") << std::endl;
    
}
