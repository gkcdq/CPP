#include "Polymorphisme.hpp"

int main(void)
{
    // Test 1: Création et suppression d'objets Dog et Cat
    {
        std::cout << "\nTest 1: Création et suppression d'objets Dog et Cat\n" << std::endl;
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        delete j;
        delete i;
    }

    // Test 2: Création d'un tableau d'animaux
    {
        std::cout << "\nTest 2: Création d'un tableau d'animaux\n" << std::endl;
        const int numAnimals = 4;
        Animal* animals[numAnimals];

        for (int idx = 0; idx < numAnimals / 2; ++idx)
        {
            animals[idx] = new Dog();
        }

        for (int idx = numAnimals / 2; idx < numAnimals; ++idx)
        {
            animals[idx] = new Cat();
        }

        for (int idx = 0; idx < numAnimals; ++idx)
        {
            delete animals[idx]; 
        }
    }

    // Test 3: Vérification des sons des animaux
    {
        std::cout << "\nTest 3: Vérification des sons des animaux\n" << std::endl;
        Dog basicDog;
        Cat basicCat;

        basicDog.makeSound();
        basicCat.makeSound();
    }

    // Test 4: Copie profonde
    {
        std::cout << "\nTest 4: Copie profonde\n" << std::endl;
        Dog dog1;
        Dog dog2;

        dog2 = dog1;

        Cat cat1;
        Cat cat2;

        cat2 = cat1;
    }

    return 0;
}
