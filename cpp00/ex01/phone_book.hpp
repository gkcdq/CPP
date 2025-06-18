#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"
# include <iostream>
# include <stdio.h>
# include <stdlib.h>
# include <string>

class PhoneBook
{
  private:
	Contact c_tab[8];
	int tab_index;
	int count_index;
	

  public:
	PhoneBook();
	void addcontact(Contact &c);
	void displaycontact();
	void displaycontactdetails();
};

int	check_alpha(std::string s);
int	check_isnumber(std::string s);
int	sstrcmp(std::string s1, std::string s2);
int	check_lowernumber(std::string input);

#endif