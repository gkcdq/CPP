#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *z = new Zombie[N];

    std::cout << "\n" << std::endl;
    for(int i = -1; i++ < N - 1;)
    {
        z[i].std_name(name); z->announce();
    }
    std::cout << "\n" << std::endl;
    delete[] z;
    return z;
}