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

// Wrong Animal //

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal constructor called" << std::endl;
	setType("WrongCat");
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	type = other.type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this != &other)
	{
		type = other.type;
	}
	return (*this);
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

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other){}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	if (this != &other)
	{
		
	}
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "[Wrong Cat] Vroum Vroum.." << std::endl;
}

///
///
///

// Dog class //

Dog::Dog()
{
	std::cout << "Dog constructor called" << std::endl;
	setType("Dog");
	brain_d = new Brain();
}

Dog::Dog(const Dog &other)
{
		delete brain_d;

	if (brain_d)
	brain_d = new Brain(*other.brain_d);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete (brain_d);
}

void Dog::makeSound() const
{
	std::cout << "[Dog] Waf Waf.." << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	delete	brain_d;

	if (this != &other)
	{
		Animal::operator=(other);
		brain_d = new Brain(*other.brain_d);
	}
	return (*this);
}

///
///
///

// Cat class //

Cat::Cat()
{
	std::cout << "Cat constructor called" << std::endl;
	setType("Cat");
	brain_c = new Brain();
}

Cat::Cat(const Cat &other)
{
		delete brain_c;

	if (brain_c)
	brain_c = new Brain(*other.brain_c);
}

// Cat &Cat::operator=(const Cat &other)
// {
// 	delete	brain_c;

// 	if (this != &other)
// 	{
// 		Animal::operator=(other);
// 		brain_c = new Brain(*other.brain_c);
// 	}
// 	return (*this);
// }

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete (brain_c);
}

void Cat::makeSound() const
{
	std::cout << "[Cat] Miaou Miaou.." << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		delete (brain_c);
		brain_c = new Brain(*other.brain_c);
	}
	return (*this);
}

///
///
///

// Brain class //

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &other)
{
	for (int i = 0; i < 100; i++)
		ideas[i] = other.ideas[i];
}

Brain &Brain::operator=(const Brain &other)
{
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
		{
			ideas[i] = other.ideas[i];
		}
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}
