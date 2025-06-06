#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "Zombie has been created" << std::endl;
    return ;
}

Zombie::~Zombie()
{
    std::cout << this->name << " is destroyed" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::std_name(std::string name)
{
    this->name = name;
    return ;
}