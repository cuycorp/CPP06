#include "ScalarConverter.hpp"


#define RESET   "\033[0m"
#define PINK    "\033[35m"

/*
int main (int ac, char **av)
{
    if (ac == 2)
        ScalarConverter::convert(av[1]);
    else
        std::cout << "Input a character!" << std::endl;
}

*/


int main(void)
{
    const char *tests[] = {
        // CHAR cases
        "a",
        "Z",
        "'c'",

        // INT cases
        "0",
        "42",
        "-42",
        "2147483647",
        "-2147483648",

        // INT overflow
        "2147483648",
        "-2147483649",

        // FLOAT cases
        "0.0f",
        "42.0f",
        "42.42f",
        "-42.42f",

        // DOUBLE cases
        "0.0",
        "42.0",
        "42.42",
        "-42.42",

        // SPECIAL literals
        "nan",
        "nanf",
        "+inf",
        "-inf",
        "+inff",
        "-inff",

        // CHAR non-displayable
        "0",
        "31",
        "127",

        // INVALID cases
        "abc",
        "42ff",
        "42.f",
        "++42",
        "",
        NULL
    };

    for (int i = 0; tests[i]; ++i)
    {
        std::cout << PINK << "==========================" << RESET << std::endl;
        std::cout << "Input: " << tests[i] << std::endl;
        std::cout << PINK << "--------------------------" << RESET  << std::endl;
        ScalarConverter::convert(tests[i]);
        std::cout << std::endl << std::endl;
    }

    return 0;
}
