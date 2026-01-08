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
        static void convert(const std::string& literal);
};

#endif

