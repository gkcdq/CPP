#ifndef POLYMORPHISME_HPP
# define POLYMORPHISME_HPP

# include <iostream>
# include <string>


class Brain;
class Animal
{
  private:
	std::string type;
	

  public:
	Animal();
	virtual ~Animal();
	void setType(std::string s);
	std::string getType() const;
	virtual void makeSound() const = 0;
};

class Dog : public Animal
{
  private:
	Brain *brain_d;

  public:
	Dog();
	virtual ~Dog();
	Dog& operator=(const Dog& other);
	virtual void makeSound() const;
};

class Cat : public Animal
{
  private:
	Brain *brain_c;

  public:
	Cat();
	virtual ~Cat();
	Cat& operator=(const Cat& other);
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

class Brain
{
  private:
	std::string ideas[100];

  public:
	Brain();
	~Brain();
};

#endif