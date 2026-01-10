#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP
# include <iostream>


typedef struct s_redirection
{
    int         n;
    std::string str;
}							Data;
class Serializer
{
    private: 
        Serializer(void);
        Serializer(const Serializer& other);
        Serializer &operator=(const Serializer &other);
        ~Serializer();
    public:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};

#endif

