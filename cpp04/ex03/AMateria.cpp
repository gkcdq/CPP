#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "[AMteria] constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type) : type(type)
{
	std::cout << "[AMateria] copy constructor called" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &other)
{
	if (this != &other)
	{
		std::cout << "[IMateriaSource] opearator assignement called" << std::endl;
		type = other.type;
	}
	return (*this);
}

AMateria::~AMateria()
{
	std::cout << "[AMateria] destructor called" << std::endl;
}

std::string const &AMateria::getType() const
{
	return (type);
}

void AMateria::use(ICharacter &target)
{
    std::cout << "* uses materia on " << target.getName() << " *" << std::endl;
}
