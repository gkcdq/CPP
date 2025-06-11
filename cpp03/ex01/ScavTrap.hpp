#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>

class ScavTrap
{
  private:
	std::string name;int Hit_Points;int Energy_Points;int Attack_Damage;

  public:
	ScavTrap(std::string s);~ScavTrap();void attack(const std::string &target);void takeDamage(unsigned int ammount);void beRepaired(unsigned int ammount);void guardGate();
};

#endif