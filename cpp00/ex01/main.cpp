#include "phone_book.hpp"

int	main(void)
{
	PhoneBook pb;
	Contact c;
	std::string line;
	int confirm = 0;

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
			confirm = 1;
		}
		else if (!sstrcmp(line, "SEARCH"))
		{
			if (confirm == 0)
                std::cout << "Error you need to ADD first" << std::endl;
			else
			{
				pb.displaycontact();
				pb.displaycontactdetails();
			}
		}
		else if (!sstrcmp(line, "EXIT"))
		{
			std::cout << "Exiting" << std::endl;
			exit(0);
		}
		else
		{
			std::cout << "Invalid command. Try \"ADD\", \"SEARCH\", \"EXIT\"" << std::endl;
		}
	}
}