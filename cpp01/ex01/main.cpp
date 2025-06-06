#include "Zombie.hpp"

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int n = std::atoi(av[1]);
        std::string random_name[] = {"Louise", "Alice", "Zed", "Lara", "Max", "Rose", "Thomas", "Adélaïde", "Adèle", "Ideline", "Pannabell","Antonin", "Zariane", "Ariel", "Flore", "Klorence", "Florent", "Victor", "Vincent", "Violaine"};
        int namesCount = sizeof(random_name) / sizeof(std::string);
        srand(time(NULL));
        int random_index = rand() % namesCount;
        std::string name = random_name[random_index];
        zombieHorde(n, name);
    }
    else
        std::cout << "Usage: <./ZombieHorde> <Number of Zombie(s)>" << std::endl;
    return (0);
}