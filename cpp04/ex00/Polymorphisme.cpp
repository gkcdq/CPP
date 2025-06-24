#include "Polymorphisme.hpp"

// Animal class
/////////////////////////////////////////////////////////////////////////

Animal::Animal()
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}
Animal::Animal(const Animal &other)
{
	type = other.type;
}

Animal &Animal::operator=(const Animal &other)
{
	if (this != &other)
	{
		type = other.type;
	}
	return (*this);
}

void Animal::setType(std::string s)
{
	type = s;
}

std::string Animal::getType() const
{
	return (type);
}

void Animal::makeSound() const
{
	
	std::cout << "[Animal] Piou Piou.." << std::endl;
}

// Dog class
/////////////////////////////////////////////////////////////////////////

Dog::Dog()
{
	std::cout << "Dog constructor called" << std::endl;
	setType("Dog");
}

Dog::Dog(const Dog &other)
{
	Animal::operator=(other);
}

Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		Animal::operator=(other);
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "[Dog] Waf Waf.." << std::endl;
}

// Cat class
/////////////////////////////////////////////////////////////////////////

Cat::Cat()
{
	std::cout << "Cat constructor called" << std::endl;
	setType("Cat");
}

Cat::Cat(const Cat &other)
{
	Animal::operator=(other);
}

Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		Animal::operator=(other);
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "[Cat] Miaou Miaou.." << std::endl;
}

// Wrong Animal
/////////////////////////////////////////////////////////////////////////

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal constructor called" << std::endl;
	setType("WrongCat");
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this != &other)
	{
		type = other.type;
	}
	return (*this);
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	type = other.type;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::setType(std::string s)
{
	type = s;
}

void WrongAnimal::makeSound() const
{
	std::cout << "[Wrong Animal] Bip Bip.." << std::endl;
}

// Wrong Cat
/////////////////////////////////////////////////////////////////////////

WrongCat::WrongCat()
{
	std::cout << "WrongCat constructor called" << std::endl;
	setType("WrongCat");
}
WrongCat::WrongCat(const WrongCat &other)
{
	WrongAnimal::operator=(other);
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	if (this != &other)
	{
		WrongAnimal::operator=(other);
	}
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

// void WrongCat::makeSound() const
// {
// 	std::cout << "[Wrong Cat] Vroum Vroum.." << std::endl;
// }