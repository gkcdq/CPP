#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
}

Zombie::~Zombie()
{
    std::cout << this->name << " is destroyed." << std::endl;
}

void Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

int main (void)
{
    randomChump("StackZombie");
    Zombie *z = newZombie("HeapZombie");
    z->announce();
    delete (z);
    return (0);
}
