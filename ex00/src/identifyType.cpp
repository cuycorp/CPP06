#include "ScalarConverter.hpp"



static bool isChar(const char *str); // simbol or letter, not number
static bool isInt(const char *str); //numbers, within limits of int
static bool isFloat(const char *str); // decimal
static bool isDouble(const char *str); // decimal with f
static bool isSpecial(const char *str); 



e_type identifyType(const std::string str)
{
    int f;
    int dot;
    f = str.find('f');
    dot = str.find('.');
    if (isChar(str.cstr()))
        return ();
    if (isInt(str.c_str()))
        return ();
}