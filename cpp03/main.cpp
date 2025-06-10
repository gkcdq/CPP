#include "ClapTrap.hpp"

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		ClapTrap Hero((std::string)av[1]);
		Hero.attack("The Bad Guy");
        Hero.takeDamage(8);
        Hero.beRepaired(4);
        Hero.takeDamage(6);
        Hero.attack("The Bad Guy");
        Hero.beRepaired(24);
        std::cout << "\nOur Hero " << av[1] << " enrage and start to deal really big damage !!" << std::endl;
        Hero.setAttackDamage(1);
        std::cout << std::endl;
        for (int i = 0; i < 5; i++)
        {
            Hero.attack("The Bad Guy");
            Hero.takeDamage(2);
        }
        Hero.beRepaired(22);
        std::cout << std::endl;
        std::cout << "Our Hero " << av[1] << " is trying his best to beat 'The Bad Guy' !!\n" << "The fight is epic !!" <<std::endl;
        std::cout << "He know now there is no comeback from this !\nHe know he need to use his special attack !!" << std::endl;
        std::cout << "\nCIAO COMO ESTA !!!!\n" << std::endl;
        Hero.setAttackDamage(22);
        Hero.attack("The Bad Guy");
        std::cout << "\nFinally BASSEM 69 BEAT The Bad Guy\n" << std::endl;



	}
	else
		std::cout << "USAGE: ./a.out <Name>" << std::endl;
	return (0);
}