#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string s): name(s), Hit_Points(100), Energy_Points(100), Attack_Damage(30){}
ScavTrap::~ScavTrap(){}
void ScavTrap::attack(const std::string &target){if (this->Hit_Points > 0 && this->Energy_Points > 0){std::cout << name << " attack " << target << ", causing " << Attack_Damage << " damage" << std::endl;Energy_Points -= 10;return ;}if (this->Hit_Points <= 0){std::cout << name << " can't deal damage he need to heal because he got " << Hit_Points << " Hit_Points" << std::endl;return ;}if (this->Energy_Points <= 0){std::cout << name << " can't deal damage he need to take his breath back because he got " << Energy_Points << " Energy" << std::endl;return ;}return ;}
void ScavTrap::takeDamage(unsigned int ammount){if (Hit_Points > 0){std::cout << name << " receive " << ammount << " damage" << std::endl;Hit_Points -= ammount;}return ;}
void ScavTrap::beRepaired(unsigned int ammount){std::cout << name << " heal and got energy back of " << ammount << std::endl;Hit_Points += ammount;Energy_Points += ammount;return ;}
void ScavTrap::guardGate(){}

