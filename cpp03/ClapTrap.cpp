#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string s) : Name(s), Hit_Points(10), Energy_Points(10), Attack_Damage(0){std::cout << "Constructor called" << std::endl;}
ClapTrap::~ClapTrap(){std::cout << "Destructor called" << std::endl;};



