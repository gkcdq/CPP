#include "Polymorphisme.hpp"

// Animal class //

Animal::Animal()
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
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

// Dog class //

Dog::Dog()
{
	std::cout << "Dog constructor called" << std::endl;
	setType("Dog");
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "[Dog] Waf Waf.." << std::endl;
}

// Cat class //

Cat::Cat()
{
	std::cout << "Cat constructor called" << std::endl;
    setType("Cat");
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "[Cat] Miaou Miaou.." << std::endl;
}

// Wrong Animal //

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal constructor called" << std::endl;
	setType("WrongCat");
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

// Wrong Cat //

WrongCat::WrongCat()
{
	std::cout << "WrongCat constructor called" << std::endl;
	setType("WrongCat");
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "[Wrong Cat] Vroum Vroum.." << std::endl;
}