#include "phone_book.hpp"

PhoneBook::PhoneBook()
{
    tab_index = 0;
}

int check_alpha(std::string s)
{
    int i = 0;
    while (s[i])
    {
        if (!std::isalpha(s[i]) && !std::isspace(s[i]))
            return (1);
        i++;
    }
    return (0);
}

int check_isnumber(std::string s)
{
    int i = 0;
    while (s[i])
    {
        if (s[i] != 48 && s[i] != 49 && s[i] != 50 && s[i] != 51 && s[i] != 52 && s[i] != 53 && s[i] != 54 && s[i] != 55 && s[i] != 56 && s[i] != 57)
            return (0);
        i++;
    }
    return (1);
}

int sstrcmp(std::string s1, std::string s2)
{
    return s1 != s2;
}