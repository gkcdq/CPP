#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <printf.h>
# include <stdlib.h>

class Zombie
{
  private:
	std::string name;

  public:
	Zombie();
	void std_name(std::string name);
	void announce(void);
	~Zombie();
};

Zombie	*zombieHorde(int N, std::string name);

#endif