#include "Serializer.hpp"


#define RESET   "\033[0m"
#define PINK    "\033[35m"


int main (void)
{
    Data data;
    data.n = 42;
    data.str = "Hello World";
    uintptr_t raw = Serializer::serialize(&data);
    Data* deserializedData = Serializer::deserialize(raw);

    std::cout << PINK << "----- Serializer Test -----" << RESET << std::endl;
    std::cout << "Original value of memory address: " << &data << std::endl;
    std::cout << "raw version of the memory address: " << raw << std::endl;
    std::cout << "reconverted value of the memory address:  " << deserializedData << std::endl;
    std::cout << PINK << "----- Verifying data integrity -----" << RESET << std::endl;
    std::cout << "original data.n: " << data.n << std::endl;
    std::cout << "original data.str: " << data.str << std::endl;
    std::cout << "deserialized data.n: " << deserializedData->n << std::endl;
    std::cout << "deserialized data.str: " << deserializedData->str << std::endl;
}



