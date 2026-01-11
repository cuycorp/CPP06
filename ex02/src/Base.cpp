#include "Base.hpp"

//Base::Base(void)
//{
//    std::cout << "Base Default constructor called" << std::endl;
//    return ;
//}

Base::~Base(void)
{
    std::cout << "Base Destructor called" << std::endl;
    return ;
}

Base * generate(void)
{
    Base *b = new A();
    return (b);
}
void identify(Base* p)
{
    if (dynamic_cast <A *>(p)) //checking that pointer to A is not null
        std::cout  << "class A" << std::endl;
    else if (dynamic_cast< B *>(p))
        std::cout  << "class B" << std::endl;
    else if (dynamic_cast< C *>(p))
        std::cout  << "class C" << std::endl;
} 
void identify(Base& p)
{
    
}

// dynamic_cast<Data *>(raw);
// salida = reinterpret_cast<Data *>(raw);