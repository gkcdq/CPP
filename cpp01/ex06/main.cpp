#include "Harl.hpp"

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		Harl H;
		std::string s[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
		int i = 0;
        int find = 0;
		while (i < 4)
		{
            if ((std::string)av[1] == s[i])
            {
                find++;
                break;
            }
            i++;
        }
        if (find == 0)
        {
            std::cout << "\n" << "Probably complaining about insignificant problems\n" << std::endl;
            return (1);
        }
        H.complain(av[1], i);
	}
	else
		std::cout << "USAGE: ./HARL <one of the four level>" << std::endl;
	return (0);
}