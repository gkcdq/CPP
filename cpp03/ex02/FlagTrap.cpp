#include "FlagTrap.hpp"

FlagTrap::FlagTrap(std::string s) : ClapTrap(s)
{
    std::cout << "FlagTrap constructor called" << std::endl;
    setHitPoints(100);
    setEnergyPoints(-100);
    setAttackDamage(30);
}

FlagTrap::~FlagTrap()
{
    std::cout << "FlagTrap constructor called" << std::endl;
}
void FlagTrap::highFiveGuys()
{
    std::cout << "Merci la chienneté "<< "🙏" << std::endl;
}