#include "phone_book.hpp"

void PhoneBook::addcontact(Contact& c)
{
    std::string input;

    while (true)
    {
        std::cout << "Enter first name: ";
        std::getline(std::cin, input);
        if (std::cin.eof())
		{
			std::cout << "EOF detected Exiting" << std::endl;
			exit(0);
		}
        if (!check_alpha(input) && !input.empty())
        {
            c.setFirstName(input);
            break;
        }
    }
    while (true)
    {
        std::cout << "Enter last name: ";
        std::getline(std::cin, input);
    	if (std::cin.eof())
		{
			std::cout << "EOF detected Exiting" << std::endl;
			exit(0);
		}
        if (!check_alpha(input) && !input.empty())
        {
            c.setLastName(input);
            break;
        }
    }
    while (true)
    {
        std::cout << "Enter nickname: ";
        std::getline(std::cin, input);
        if (std::cin.eof())
		{
			std::cout << "EOF detected Exiting" << std::endl;
			exit(0);
		}
        if (!check_alpha(input) && !input.empty())
        {
            c.setNickname(input);
            break;
        }
    }
    while (true)
    {
        std::cout << "Enter phone number: ";
        std::getline(std::cin, input);
        if (std::cin.eof())
		{
			std::cout << "EOF detected Exiting" << std::endl;
			exit(0);
		}
        if (check_isnumber(input) && !input.empty())
        {
            c.setPhoneNumber(input);
            break;
        }
    }
    while (true)
    {
        std::cout << "Write your \"darkest\" secret: ";
        std::getline(std::cin, input);
        if (std::cin.eof())
		{
			std::cout << "EOF detected Exiting" << std::endl;
			exit(0);
		}
        if (!input.empty())
        {
            c.setDarkestSecret(input);
            break;
        }
    }
    c_tab[tab_index] = c;
    tab_index = (tab_index + 1) % 8;
    count_index ++;
}