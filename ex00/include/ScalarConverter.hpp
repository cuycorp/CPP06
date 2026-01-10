#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
# include <iostream>

class ScalarConverter
{
    private: 
        ScalarConverter(void);
        ScalarConverter(const ScalarConverter& other);
        ScalarConverter &operator=(const ScalarConverter &other);
        ~ScalarConverter(void);
    public:
        static void convert(const std::string &str);
};


enum e_type
{
    SPECIAL = 0,
    CHAR = 1,
    INT = 2,
    FLOAT = 3,
    DOUBLE = 4,
    INVALID = -1
};

e_type identifyType(const std::string &str);

//****************** Display
void displaySpecial(const std::string &str);
void displayChar(const std::string &str);
void displayInt(const std::string &str);
void displayFloat(const std::string &str);
void displayDouble(const std::string &str);

//****************** Utils
void printString(const std::string str0, const std::string str1);
void printInt(const std::string str0, const int n1);
bool isNumber(const char c);
bool isNumberString(const std::string str);
bool isSignedNumberString(const std::string str);

#endif

