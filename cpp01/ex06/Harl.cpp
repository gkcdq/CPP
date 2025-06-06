#include "Harl.hpp"

void Harl::debug()
{
	std::cout << "[DEBUG]" << "\n" << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
    std::cout << "[INFO]" << "\n" << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
    std::cout << "[WARNING]" << "\n" << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error()
{
    std::cout << "[ERROR]" << "\n" << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level, int i)
{
    // printf("%d\n", i);
    // printf("%s\n", level.c_str());
    typedef void (Harl::*HarlFunction)(void);
    std::string s[] = {"DEBUG","INFO","WARNING","ERROR"};
    HarlFunction f[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::cout << "\n";
    while (i < 4)
    {
        if (level == s[i])
        {
            int j = i;
            while(j < 4)
            {
                (this->*f[j])();
                std::cout << "\n";
                j++;
            }
        }
        i++;
    }
    return ;
}