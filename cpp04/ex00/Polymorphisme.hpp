#ifndef POLYMORPHISME_HPP
# define POLYMORPHISME_HPP

# include <iostream>
# include <string>

class Animal
{
  private:
	std::string type;

  public:
	Animal();
	virtual ~Animal();
	void setType(std::string s);
	std::string getType();
	virtual void makeSound();
};

class Dog : public Animal
{
  public:
	Dog();
	virtual ~Dog();
	virtual void makeSound();
};

class Cat : public Animal
{
  public:
	Cat();
	virtual ~Cat();
	virtual void makeSound();
};

class WrongAnimal
{
  public:
	WrongAnimal();
	virtual ~WrongAnimal();
	virtual void makeSound();
};

class WrongCat : public WrongAnimal
{
  public:
	WrongCat();
	virtual ~WrongCat();
	virtual void makeSound();
};

#endif