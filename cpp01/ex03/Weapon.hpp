#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <stdio.h>
# include <stdlib.h>
# include <string>

class Weapon
{
  private:
	std::string type;

  public:
	Weapon(const std::string &type);
	// const std::string& getType() const { return (type); };
	const std::string &getType();
	void setType(const std::string &new_type);
	~Weapon();
};

#endif