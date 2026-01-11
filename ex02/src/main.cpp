#include "Base.hpp"

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(NULL));
    
    std::cout << "=== Testing with pointers ===" << std::endl;
    for (int i = 0; i < 5; i++) {
        Base* ptr = generate();
        std::cout << "Generated object type (pointer): ";
        identify(ptr);
        delete ptr;
    }
    
    std::cout << "\n=== Testing with references ===" << std::endl;
    for (int i = 0; i < 5; i++) {
        Base* ptr = generate();
        std::cout << "Generated object type (reference): ";
        identify(*ptr);
        delete ptr;
    }
    
    std::cout << "\n=== Testing specific instances ===" << std::endl;
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
    
    return 0;
}