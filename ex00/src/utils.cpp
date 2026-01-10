
# include <iostream>

void printString(const std::string str0, const std::string str1)
{
    std::cout << str0 << str1 << std::endl;
}
void printInt(const std::string str0, const int n1)
{
    std::cout << str0 << n1 << std::endl;
}

bool isNumber(const char c)
{
    if  (c >= '0' && c <= '9') 
        return (true);
    return (false);
}

bool isNumberString(const std::string str)
{
    int i = 0;
    while (str[i])
    {
        if (!isNumber(str[i]))
            return (false);
        i++;
    }
    return (true);
}

bool isSignedNumberString(const std::string str)
{
    int i = 0;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str.length() == 1)
            return (false);
        i++;
    }
    while (str[i])
    {
        if (!isNumber(str[i]))
            return (false);
        i++;
    }
    return (true);
}