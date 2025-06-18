#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <stdlib.h>
# include <string>

class HumanB
{
private:
    std::string name;
    Weapon *weapon;  

public:
    HumanB(std::string name);        
    void attack(void);
    void setWeapon(Weapon &weapon);  
    ~HumanB();
};


#endif