#include "ScalarConverter.hpp"

// Default constructor
ScalarConverter::ScalarConverter(void)
{
    return ;
}

// Copy constructor
ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
    return ;
}

// Assignment operator overload
ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{
    return (*this);
}

// Destructor
ScalarConverter::~ScalarConverter(void)
{
    return ;
}

static void convert(const std::string& literal)
{
    long checkInt;

    //1. catch char
    //2. int
    checkInt =  strtol(literal, NULL, 10);
    if (checkInt < INT_MIN || checkInt > INT_MAX)
    {
        std::cout << "int: impossible" << std::endl;
    }
    else
    {
        int intValue = static_cast<int>(checkInt);
        std::cout << "int: " << intValue << std::endl;
    }
    //3. float
    //4. double
    

}