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
	Animal(const Animal &other);
	Animal &operator=(const Animal &other);
	virtual ~Animal();
	void setType(std::string s);
	std::string getType() const;
	virtual void makeSound() const;
};

class Dog : public Animal
{
  public:
	Dog();
	Dog(const Dog &other);
	Dog &operator=(const Dog &other);
	virtual ~Dog();
	virtual void makeSound() const;
};

class Cat : public Animal
{
  public:
	Cat();
	Cat &operator=(const Cat &other);
	Cat(const Cat &other);
	virtual ~Cat();
	virtual void makeSound() const;
};

class WrongAnimal
{
  private:
	std::string type;

  public:
	WrongAnimal();
	WrongAnimal &operator=(const WrongAnimal &other);
	WrongAnimal(const WrongAnimal &other);
	virtual ~WrongAnimal();
	void setType(std::string s);
	void makeSound() const;
};

class WrongCat : public WrongAnimal
{
  public:
	WrongCat();
	WrongCat(const WrongCat &other);
	WrongCat &operator=(const WrongCat &other);
	virtual ~WrongCat();
	//void makeSound() const;
};

#endif