#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(int ac, char **av)
{
	if (ac < 2)
	{
        std::cout << "\n------------------------ClapTrap--------------------------\n" << std::endl;
		ClapTrap Hero((std::string)"Bassem");
        ClapTrap Copy("Copy");
		Hero.attack("Nasdas");
        Hero.takeDamage(8);
        Hero.beRepaired(4);
        Hero.takeDamage(6);
        Hero.attack("Nasdas");
        Hero.beRepaired(24);
        std::cout << "\nOur Hero " << "Bassem" << " enrage and start to deal really big damage !!" << std::endl;
        Hero.setAttackDamage(1);
        std::cout << std::endl;
        for (int i = 0; i < 2; i++)
        {
            Hero.attack("Nasdas");
            Hero.takeDamage(2);
        }
        Hero.beRepaired(22);
        std::cout << std::endl;
        std::cout << "Our Hero " << "Bassem" << " is trying his best to beat 'Nasdas' !!\n" << "The fight is epic !!" <<std::endl;
        std::cout << "He know now there is no comeback from this !\nHe know he need to use his special attack !!" << std::endl;
        std::cout << "\nCIAO COMO ESTA !!!!\n" << std::endl;
        Hero.setAttackDamage(22);
        Hero.attack("Nasdas");
        std::cout << "Finally BASSEM BEAT Nasdas\n" << std::endl;
        Copy = Hero;
        std::cout << "Copy Hit_Points " << Copy.getHitPoints() << "\n" << "Bassem Hit_Points " << Hero.getHitPoints() << std::endl;
	

        std::cout << "\n------------------------ScavTrap--------------------------\n" << std::endl;
        ScavTrap Second_Hero("Arouf");
        //std::cout << Second_Hero.getEnergyPoints() << std::endl;
        Second_Hero.attack("The New Bad Guy");
        //std::cout << Second_Hero.getEnergyPoints() << std::endl;
        Second_Hero.takeDamage(12);
        Second_Hero.beRepaired(3);
        Second_Hero.guardGate();
        Second_Hero.attack("The New Bad Guy");
        Copy = Second_Hero;
        std::cout << "Copy Hit_Points " << Copy.getHitPoints() << "\n" << "Bassem Hit_Points " << Second_Hero.getHitPoints() << std::endl;
	
    }
	else
		std::cout << "USAGE: ./a.out" << std::endl;
	return (0);
}