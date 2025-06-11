#include "Polymorphisme.hpp"

// Animal class //

Animal::Animal()
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << " Animal destructor called" << std::endl;
}

void Animal::setType(std::string s)
{
	type = s;
}

std::string Animal::getType()
{
	return (type);
}

void Animal::makeSound()
{
	std::cout << "Piou Piou.." << std::endl;
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

void Dog::makeSound()
{
	std::cout << "Waf Waf.." << std::endl;
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

void Cat::makeSound()
{
	std::cout << "Miaou Miaou.." << std::endl;
}

// Wrong Animal //

WrongAnimal::WrongAnimal()
{
    
}