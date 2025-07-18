#include "serialized.hpp"

Serializer::Serializer(){}
Serializer::~Serializer(){}
Serializer::Serializer(const Serializer &other){(void)other;}
Serializer& Serializer::operator=(const Serializer &other)
{
    if (this != &other)
    {
        (void)other;
    }
    return *this;
}

uintptr_t Serializer::serialized(Data *ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialized(uintptr_t raw)
{
    return reinterpret_cast<Data *>(raw);
}
////////////////////////////////////////////////////////////

Data::Data() : value(0) {}
Data::~Data(){}
Data::Data(const Data &other){value = other.value;}
Data& Data::operator=(const Data &other)
{
    if (this != &other)
    {
        value = other.value;
    }
    return *this;
}

void Data::setValue(int x)
{
    value = x;
}

int Data::getValue()
{
    return value;
}