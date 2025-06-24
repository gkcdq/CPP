#include "Polymorphisme.hpp"

int	main(void)
{
	const Animal *random = new Animal();
	const Animal *dog = new Dog();
	Animal *cat = new Cat();

	Animal x;
	x.makeSound();

	Animal Copy_Cat = *cat;
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	cat->makeSound();
	dog->makeSound();
	random->makeSound();
	std::cout << Copy_Cat.getType() << std::endl;
	delete (random);
	delete (dog);
	delete (cat);

	std::cout << std::endl << std::endl;

	const WrongAnimal *wrongMeta = new WrongAnimal();
	const WrongAnimal *wrongCat = new WrongCat();
	wrongCat->makeSound();
	wrongMeta->makeSound();
	delete wrongMeta;
	delete wrongCat;
	return (0);
}