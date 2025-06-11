#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
  private:
	std::string Name;
	int Hit_Points;
	int Energy_Points;
	int Attack_Damage;

  public:
	ClapTrap(std::string s);
	~ClapTrap();
	std::string getName();
	int getHitPoints();
	int getEnergyPoints();
	int getAttackDamage();
	void setAttackDamage(int n);
	void setEnergyPoints(int n);
	void setHitPoints(int n);
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif