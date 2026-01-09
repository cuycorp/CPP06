#include "ScalarConverter.hpp"

/*
static bool isChar(const std::string &str); // simbol or letter, not number
static bool isInt(const char *str); //numbers, within limits of int
static bool isFloat(const char *str); // decimal
static bool isDouble(const char *str); // decimal with f
static bool isSpecial(const std::string &str); 
*/

static bool isChar(const std::string str)
{
    size_t len = str.length();

}

static bool isInt(const std::string str)
{
    size_t len = str.length();
    int i = 0;
    if( str[i] == '+' || str[i] == '-')
        i++;
    while(str[i])
    {
        if (str)
    }
    return (false0)
} 
static bool isSpecial(const std::string &str)
{
    if (str == "nan" || str ==  "nanf") //+-inf and +-inff
        return (true);
    return (false);
}
e_type identifyType(const std::string &str)
{
    int f;
    int dot;
    f = str.find('f');
    dot = str.find('.');
    if (dot == -1)
    {
        if (isSpecial(str))
            return (SPECIAL);
        else if (isChar(str))
            return (CHAR);
        else if (isInt(str))
            return (INT);
    }
    //if()
}