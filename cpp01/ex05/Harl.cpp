#include "Harl.hpp"

void Harl::debug()
{
	std::cout << "[DEBUG] I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
    std::cout << "[INFO] I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
    std::cout << "[WARNING] I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error()
{
    std::cout << "[ERROR] This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    typedef void (Harl::*HarlFonction)(void);

    std::string s[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    HarlFonction f[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    int i = 0;
    while (i < 4)
    {
        if (level == s[i])
        {
            (this->*f[i])();
            return ;
        }
        i++;
    }
    std::cout << "Wrong level '" << level << "'"<< std::endl;
    return ;
}
