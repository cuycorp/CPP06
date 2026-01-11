#include "Base.hpp"
#include <stdexcept>

Base * generate(void)
{
    int i = rand() % 3;
    if (i == 0)
        Base *b = new A();
    else if (i == 1)
        Base *b = new B();
    else
        Base *b = new C();
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
    try
    {
        A &refA = dynamic_cast <A&>(p);
        std::cout << "class A reference" << std::endl;
    }
    catch (std::bad_cast& bad)
    {
        std::cout << "Not class A reference" << bad.what <<std::endl;
    }
    
    try
    {
        B &refB = dynamic_cast <B&>(p);
        std::cout << "class B reference" << std::endl;
    }
    catch (std::bad_cast& bad)
    {
        std::cout << "Not class B reference" << bad.what <<std::endl;
    }
    
    try
    {
        C &refC = dynamic_cast <C&>(p);
        std::cout << "class A reference" << std::endl;
    }
    catch (std::bad_cast& bad)
    {
        std::cout << "Not class A reference" << bad.what <<std::endl;
    }
}

// dynamic_cast<Data *>(raw);
// salida = reinterpret_cast<Data *>(raw);