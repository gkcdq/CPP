#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"
# include <iostream>
# include <string>
# include <stdlib.h>
# include <stdio.h>

class PhoneBook
{
  private:
	Contact c_tab[8];
	int tab_index;

  public:
	PhoneBook();
	void addcontact(Contact& c);
	void displaycontact();
	void displaycontactdetails();
};

int check_alpha(std::string s);
int check_isnumber(std::string s);
int sstrcmp(std::string s1, std::string s2);

#endif