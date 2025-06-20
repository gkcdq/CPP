#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
  protected:
	std::string Name;
	int Hit_Points;
	int Energy_Points;
	int Attack_Damage;

  public:
	ClapTrap();
	ClapTrap(std::string s);
	ClapTrap(const ClapTrap &other);
	ClapTrap& operator=(const ClapTrap &other);
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