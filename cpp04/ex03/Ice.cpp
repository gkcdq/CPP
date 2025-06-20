#include "AMateria.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "[Ice] constructor called" << std::endl;
}
Ice::Ice(const Ice &other) : AMateria(other)
{
    std::cout << "";
}

Ice &Ice::operator=(const Ice &other)
{
	if (this != &other)
	{
		std::cout << "[Ice] opearator assignement called" << std::endl;
		type = other.type;
	}
	return (*this);
}

Ice::~Ice() 
{
	std::cout << "[Ice] destructor called" << std::endl;
}

void Ice::use(ICharacter &target)
{
	std::cout << getType() << target.getName() << " *" << std::endl;
}

AMateria *Ice::clone() const
{
	return (new Ice(*this));
}