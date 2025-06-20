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
	std::cout << "Merci la chienneté "
				<< "🙏" << std::endl;
}
FlagTrap::FlagTrap(const FlagTrap &other) : ClapTrap(other)
{
}

FlagTrap &FlagTrap::operator=(const FlagTrap &other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	return (*this);
}

FlagTrap::FlagTrap() : ClapTrap(){}
