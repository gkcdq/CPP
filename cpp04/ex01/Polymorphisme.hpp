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
	Animal(const Animal& other);
	Animal& operator=(const Animal& other);
	virtual ~Animal();
	void setType(std::string s);
	std::string getType() const;
	virtual void makeSound() const;
};

class Dog : public Animal
{
  private:
	Brain *brain_d;

  public:
	Dog();
	Dog(const Dog& other);
	virtual ~Dog();
	Brain *getBrain() const;
	Dog& operator=(const Dog& other);
	virtual void makeSound() const;
};

class Cat : public Animal
{
  private:
	Brain *brain_c;

  public:
	Cat();
	Cat(const Cat& other);
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
	WrongAnimal(const WrongAnimal& other);
	WrongAnimal& operator=(const WrongAnimal& other);
	virtual ~WrongAnimal();
	void setType(std::string s);
	virtual void makeSound() const;
};

class WrongCat : public WrongAnimal
{
  public:
	WrongCat();
	WrongCat(const WrongCat& other);
	WrongCat& operator=(const WrongCat& other);
	virtual ~WrongCat();
	virtual void makeSound() const;
};

class Brain
{
  private:
	std::string ideas[100];

  public:
	Brain();
	Brain(const Brain& other);
	std::string getIdea(size_t index) const;
	void setIdea(size_t index, const std::string& idea);
	Brain& operator=(const Brain& other);
	~Brain();
};

#endif