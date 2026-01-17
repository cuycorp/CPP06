#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>


#define RESET   "\033[0m"
#define PINK    "\033[35m"

Base * generate(void);
void identify(Base* p);
void identify(Base& p);


int main() {
    srand(time(NULL));
    
    std::cout << PINK << "=== Testing with pointers ===" << RESET << std::endl;
    for (int i = 0; i < 5; i++) {
        Base* ptr = generate();
        std::cout << "Generated object type (pointer): ";
        identify(ptr);
        delete ptr;
    }
    
    std::cout << PINK <<  "\n=== Testing with references ===" << RESET << std::endl;
    for (int i = 0; i < 5; i++) {
        Base* ptr = generate();
        std::cout << "Generated object type (reference): ";
        identify(*ptr);
        delete ptr;
    }
    
    std::cout << PINK <<  "\n=== Testing specific instances ===" << RESET << std::endl;
    A a;
    B b;
    C c;
    
    std::cout << "Object a (pointer): ";
    identify(&a);
    std::cout << "Object a (reference): ";
    identify(a);
    
    std::cout << "Object b (pointer): ";
    identify(&b);
    std::cout << "Object b (reference): ";
    identify(b);
    
    std::cout << "Object c (pointer): ";
    identify(&c);
    std::cout << "Object c (reference): ";
    identify(c);
    std::cout << PINK <<  "\n=== End ===" << RESET << std::endl;
    return 0;
}