#include "phone_book.hpp"

void PhoneBook::displaycontactdetails()
{
    std::string input;

    while (true)
    {
        std::cout << "Enter the right index to show more details: ";
        std::getline(std::cin, input);
        if (!input.empty() && !c_tab[std::atoi(input.c_str()) - 1].getFirstName().empty())
        {
            std::cout << "\n";
            std::cout << "\n";
            int index = std::atoi(input.c_str());
            std::cout <<"First Name: "<< c_tab[index - 1].getFirstName() << "\n";
            std::cout <<"Last Name: "<< c_tab[index - 1].getLastName() << "\n";
            std::cout <<"Nickname: "<< c_tab[index - 1].getNickname() << "\n";
            std::cout <<"Phone Number: "<< c_tab[index - 1].getPhoneNumber() << "\n";
            std::cout <<"Darkest Secret: "<< c_tab[index - 1].getDarkestSecret() << std::endl;
            break ;
        }
    }
}