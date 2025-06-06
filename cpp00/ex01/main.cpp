#include "phone_book.hpp"


// corriger pour check que le number recois bien que des numero !ex : r11


int main()
{
    PhoneBook pb;
    Contact c;
    std::string line;

    while (true)
    {
        std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, line);
        if (std::cin.eof())
        {
            std::cout << "EOF detected Exiting" << std::endl;
            exit(0);
        }
        else if (!sstrcmp(line, "ADD"))
        {
            pb.addcontact(c);
        }
        else if (!sstrcmp(line, "SEARCH"))
        {
            pb.displaycontact();
            pb.displaycontactdetails();
        }
        else if (!sstrcmp(line, "EXIT"))
        {
            std::cout << "Exiting" << std::endl;
            exit(0);
        }
        else{
            std::cout << "Invalid command. Try \"ADD\", \"SEARCH\", \"EXIT\"" << std::endl;
        }
    }
}