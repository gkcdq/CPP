#include "HumanB.hpp"

HumanB::HumanB(std::string nam)
{
    name = nam;
    weapon = (nullptr);
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

void HumanB::attack(void)
{
    if (weapon)
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    else
        std::cout << name << " has no weapon to attack with" << std::endl;
}

HumanB::~HumanB()
{
        std::cout << this->name << " is done" << std::endl;
}
