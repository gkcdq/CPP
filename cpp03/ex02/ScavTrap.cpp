#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string s) : ClapTrap(s)
{
	std::cout << "ScavTrap constructor called" << std::endl;
	setHitPoints(100);
	setEnergyPoints(-50);
	setAttackDamage(20);
}
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}
void ScavTrap::attack(const std::string &target)
{
	if (getHitPoints() > 0 && getEnergyPoints() > 0)
	{
		std::cout << getName() << " deal damage to " << target << ",causing " << getAttackDamage() << " good damage " << std::endl;
		setEnergyPoints(1);
		return ;
	}
	if (getHitPoints() <= 0)
	{
		std::cout << getName() << " can't deal damage he need to heal because he got " << getHitPoints() << " Hit_Points" << std::endl;
		return ;
	}
	if (getEnergyPoints() <= 0)
	{
		std::cout << getName() << " can't deal damage he need to take his breath back because he got " << getEnergyPoints() << " Energy" << std::endl;
		return ;
	}
	return ;
}
void ScavTrap::guardGate()
{
    std::cout << getName() << " turn to Guard Gate Mode is power is leveling !!" << std::endl;
    setAttackDamage(9979);
    setEnergyPoints(-9999);
    setHitPoints(5000);
}

ScavTrap::ScavTrap() : ClapTrap()
{
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	return (*this);
}
