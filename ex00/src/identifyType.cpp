#include "ScalarConverter.hpp"

static bool isChar(const std::string str)
{
    size_t len;
    len = str.length();
    if (len == 1 && !isNumber(str[0])) 
        return (true);
    if (len == 3 && isNumber(str[1]) && str[0] == '\'' && str[2] == '\'' ) 
        return (true);
    return (false);
}

static bool isInt(const std::string str)
{
    int i = 0;
    if( str[i] == '+' || str[i] == '-')
        i++;
    while(str[i])
    {
        if (isNumber(str[i]))
            i++;
        else
            return (false);
    }
    return (true);
} 
static bool isSpecial(const std::string &str)
{
    if (str == "nan" || str ==  "nanf" || str == "-inff" || str ==  "+inff" || str ==  "inff"
        || str == "-inf" || str ==  "+inf" || str ==  "inf") //+-inf and +-inff
        return (true);
    return (false);
}

static bool isFloat(const int f, const int dot, const std::string str)
{
    std::string beforeDot;
    std::string afterDot;

    if (dot < f)
    {
        beforeDot = str.substr(0, dot);
        afterDot = str.substr(dot + 1, str.length() - (dot + 2));
        if (beforeDot.empty() || afterDot.empty())
            return (false);
        if (!isNumberString(afterDot) || !isSignedNumberString(beforeDot))
            return (false);
        return (true);
    }
    return (false);
}

static bool isDouble(const int dot, const std::string str)
{
    std::string beforeDot;
    std::string afterDot;

        beforeDot = str.substr(0, dot);
        afterDot = str.substr(dot + 1, str.length() - (dot));
        if (beforeDot.empty() || afterDot.empty())
            return (false);
        if (!isNumberString(afterDot) || !isSignedNumberString(beforeDot))
            return (false);
        return (true);
    
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
    if (f == -1 && dot != -1 && isDouble(dot, str))
        return (DOUBLE);
    if (f != -1 && dot != -1 && isFloat(f, dot, str))
        return (FLOAT);
    else 
        return (INVALID);
}