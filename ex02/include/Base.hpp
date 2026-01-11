#ifndef BASE_HPP
# define BASE_HPP
# include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

class Base 
{
    public:
        Base(void);
        virtual ~Base(); 
};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif

