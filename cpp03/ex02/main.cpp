#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FlagTrap.hpp"

int	main(int ac, char **av)
{
	if (ac < 2)
	{
        std::cout << "\n------------------------ClapTrap--------------------------\n" << std::endl;
		ClapTrap Hero((std::string)"Bassem");
		Hero.attack("The Bad Guy");
        Hero.takeDamage(8);
        Hero.beRepaired(4);
        Hero.takeDamage(6);
        Hero.attack("The Bad Guy");
        Hero.beRepaired(24);
        std::cout << "\nOur Hero " << "Bassem" << " enrage and start to deal really big damage !!" << std::endl;
        Hero.setAttackDamage(1);
        std::cout << std::endl;
        for (int i = 0; i < 2; i++)
        {
            Hero.attack("The Bad Guy");
            Hero.takeDamage(2);
        }
        Hero.beRepaired(22);
        std::cout << std::endl;
        std::cout << "Our Hero " << "Bassem" << " is trying his best to beat 'The Bad Guy' !!\n" << "The fight is epic !!" <<std::endl;
        std::cout << "He know now there is no comeback from this !\nHe know he need to use his special attack !!" << std::endl;
        std::cout << "\nCIAO COMO ESTA !!!!\n" << std::endl;
        Hero.setAttackDamage(22);
        Hero.attack("The Bad Guy");
        std::cout << "Finally BASSEM BEAT The Bad Guy\n" << std::endl;

        std::cout << "\n------------------------ScavTrap--------------------------\n" << std::endl;
        ScavTrap Second_Hero("Arouf");
        //std::cout << Second_Hero.getEnergyPoints() << std::endl;
        Second_Hero.attack("The Brother Bad Guy");
        //std::cout << Second_Hero.getEnergyPoints() << std::endl;
        Second_Hero.takeDamage(12);
        Second_Hero.beRepaired(3);
        Second_Hero.guardGate();
        Second_Hero.attack("The Brother Bad Guy");

        std::cout << "\n------------------------FlagTrap--------------------------\n" << std::endl;
        FlagTrap Third_Hero("Nasdas");
        Third_Hero.attack("The Father of Bad Guys");
        Third_Hero.takeDamage(48);
        Third_Hero.beRepaired(9);
        Third_Hero.takeDamage(62);
        Third_Hero.attack("The Father of Bad Guys");
        Third_Hero.beRepaired(50);
        Third_Hero.attack("The Father of Bad Guys");
        Third_Hero.highFiveGuys();
	}
	else
		std::cout << "USAGE: ./a.out" << std::endl;
	return (0);
}