#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include <string>

class FlagTrap : public ClapTrap
{
  public:
	FlagTrap(std::string s);
	~FlagTrap();
    void highFiveGuys();
};

#endif