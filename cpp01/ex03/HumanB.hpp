#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <stdlib.h>
# include <string>

class HumanB
{
private:
    std::string name;
    Weapon *weapon;  // pointeur pour pouvoir être nullptr

public:
    HumanB(std::string name);          // Constructeur avec uniquement le nom
    void attack(void);
    void setWeapon(Weapon &weapon);   // méthode pour assigner une arme plus tard
    ~HumanB();
};


#endif