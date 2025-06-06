#include "Weapon.hpp"

Weapon::Weapon(const std::string& name)
{
    this->type = name;
    return ;
}

Weapon::~Weapon()
{
   // std::cout << this->type << " is destroyed" << std::endl;
    return ;
}

void Weapon::setType(const std::string &new_type)
{
    this->type = new_type;
    return ;
}

const std::string& Weapon::getType()
{
    return type;
}
