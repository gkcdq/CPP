#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string s) : Name(s), Hit_Points(10), Energy_Points(10), Attack_Damage(0){std::cout << "Constructor called" << std::endl;}
ClapTrap::~ClapTrap(){std::cout << "Destructor called" << std::endl;};
int ClapTrap::getHitPoints(){return Hit_Points;}
void ClapTrap::setAttackDamage(int n){Attack_Damage += n;}

void ClapTrap::attack(const std::string& target)
{
    if (this->Hit_Points > 0 && this->Energy_Points > 0)
    {
        std::cout << Name << " attack " << target << ", causing " << Attack_Damage << " damage" << std::endl;
        Energy_Points -= 10;
        return ;
    }
    if (this->Hit_Points <= 0)
    {
        std::cout << Name << " can't deal damage he need to heal because he got " << Hit_Points << " Hit_Points" << std::endl;
        return ;
    }
    if (this->Energy_Points <= 0)
    {
        std::cout << Name << " can't deal damage he need to take his breath back because he got " << Energy_Points << " Energy" << std::endl;
        return ;
    }
    return ;
}

void ClapTrap::takeDamage(unsigned int ammount)
{
    if (Hit_Points > 0)
    {std::cout << Name << " receive " << ammount << " damage" << std::endl;
    Hit_Points -= ammount;}
    return ;
}

void ClapTrap::beRepaired(unsigned int ammount)
{
    std::cout << Name << " heal and got energy back of " << ammount << std::endl;
    Hit_Points += ammount;
    Energy_Points += ammount;
    return ; 
}
