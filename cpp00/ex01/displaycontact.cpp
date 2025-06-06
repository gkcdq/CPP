#include "phone_book.hpp"

std::string parse_value(std::string s)
{
    if (s.length() > 10)
    {
        return s.substr(0, 9) + ".";
    }
    return std::string(10 - s.length(), ' ') + s;
}

void PhoneBook::displaycontact()
{
    std::cout << "\n--------------------------------------------\n";
    for(int i = 0; i < 8; i++)
    {
        if (c_tab[i].getFirstName().empty())
            break ;
        std::cout << "|        " << i + 1;
        if (!c_tab[i].getFirstName().empty())
        {
            std::string s = parse_value(c_tab[i].getFirstName());
            std::cout << "|" << s;
        }
        if (!c_tab[i].getLastName().empty())
        {
            std::string s = parse_value(c_tab[i].getLastName());
            std::cout << "|" << s;
        }
        if (!c_tab[i].getNickname().empty())
        {
            std::string s = parse_value(c_tab[i].getNickname());
            std::cout << "|" << s;
        }
        std::cout << "|\n";
    }
    std::cout << "--------------------------------------------\n\n";
}