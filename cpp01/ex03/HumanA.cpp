#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& w)
    : name(name), weapon(w)
{
}

HumanA::~HumanA()
{
    std::cout << this->name << " is done" << std::endl;
}
void HumanA::attack()
{
    std::cout << this->name << " attack with their " << weapon.getType() << std::endl;
}
