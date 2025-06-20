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
	std::string getType() const;
	virtual void makeSound() const;
};

class Dog : public Animal
{
  public:
	Dog();
	virtual ~Dog();
	virtual void makeSound() const;
};

class Cat : public Animal
{
  public:
	Cat();
	virtual ~Cat();
	virtual void makeSound() const;
};

class WrongAnimal
{
  private:
	std::string type;
  public:
	WrongAnimal();
	virtual ~WrongAnimal();
	void setType(std::string s);
	virtual void makeSound() const;
};

class WrongCat : public WrongAnimal
{
  public:
	WrongCat();
	virtual ~WrongCat();
	virtual void makeSound() const;
};

#endif