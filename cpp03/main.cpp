#include "ClapTrap.hpp"

int main(int ac, char **av)
{
    if (ac == 2)
    {
        ClapTrap Hero((std::string)av[1]);
        
    }
    else 
        std::cout << "USAGE: ./a.out <Name>" << std::endl;
    return (0);
}