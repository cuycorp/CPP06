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
    return 
} //how do you identify the type of a variable
void identify(Base& p)
{

}

// reinterpret_cast<Data *>(raw);