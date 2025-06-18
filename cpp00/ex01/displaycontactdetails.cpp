#include "phone_book.hpp"

void PhoneBook::displaycontactdetails()
{
	int	index;

	std::string input;
	while (true)
	{
		std::cout << "Enter the right index to show more details: ";
		std::getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cout << "\nEOF detected. Exiting" << std::endl;
			exit(0);
		}
		if (!input.empty())
		{
			index = std::atoi(input.c_str()) - 1;
			if (index >= 0 && index < 9 && index < count_index && check_alpha(input) && check_lowernumber(input) == 0)
			{
				std::cout << "\n";
				std::cout << "First Name: " << c_tab[index].getFirstName() << "\n";
				std::cout << "Last Name: " << c_tab[index].getLastName() << "\n";
				std::cout << "Nickname: " << c_tab[index].getNickname() << "\n";
				std::cout << "Phone Number: " << c_tab[index].getPhoneNumber() << "\n";
				std::cout << "Darkest Secret: " << c_tab[index].getDarkestSecret() << std::endl;
				break ;
			}
			else
				std::cout << "Invalid index. Please try again." << std::endl;
		}
	}
}
