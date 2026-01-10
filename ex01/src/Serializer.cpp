#include "Serializer.hpp"

// Default constructor
Serializer::Serializer(void)
{
    return ;
}

// Copy constructor
Serializer::Serializer(const Serializer &other)
{
    (void) other;
    return ;
}

// Assignment operator overload
Serializer &Serializer::operator=(const Serializer &other)
{
    (void) other;
    return (*this);
}

// Destructor
Serializer::~Serializer(void)
{
    return ;
}

uintptr_t Serializer::serialize(Data* ptr)
{
    uintptr_t raw;
}
Data* Serializer::deserialize(uintptr_t raw){

}
