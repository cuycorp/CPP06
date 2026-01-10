#include "Serializer.hpp"


#define RESET   "\033[0m"
#define PINK    "\033[35m"


int main (int ac, char **av)
{
    Data data;
    data.n = 42;
    data.str = "Hello World";

    std::cout << PINK "----- Serializer Test -----" RESET << std::endl;
     = Serializer::serialize(&data);
    Data* deserializedData = Serializer::deserialize(raw);

}



