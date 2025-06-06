#include <iostream>
//#include <stdio.h>

int main(int ac, char **av)
{
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        std::string s;
        for(int i = 1; i < ac; i++)
            s += av[i];
        //printf("-%s\n-%lu\n", s.c_str(), s.length());
        for (int j = 0; j < (int)s.length(); j++)
        {
            s[j] = toupper(s[j]);
            std::cout << s[j];
        }
        std::cout << std::endl;
    }
    return (0);
}