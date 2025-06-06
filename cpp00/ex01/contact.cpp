#include "contact.hpp"

void Contact::setFirstName(std::string f_n)
{
	first_name = f_n;
}
void Contact::setLastName(std::string l_n)
{
	last_name = l_n;
}

void Contact::setNickname(std::string nm)
{
	nickname = nm;
}

void Contact::setPhoneNumber(std::string p_n)
{
	phone_number = p_n;
}

void Contact::setDarkestSecret(std::string d_s)
{
	darkest_secret = d_s;
}

std::string Contact::getFirstName() const
{
	return (first_name);
}
std::string Contact::getLastName() const
{
	return (last_name);
}
std::string Contact::getNickname() const
{
	return (nickname);
}
std::string Contact::getPhoneNumber() const
{
	return (phone_number);
}
std::string Contact::getDarkestSecret() const
{
	return (darkest_secret);
}