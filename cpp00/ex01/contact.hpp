#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
  private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

  public:
	void setFirstName(std::string f_n);
	void setLastName(std::string l_n);
	void setNickname(std::string nm);
	void setPhoneNumber(std::string p_n);
	void setDarkestSecret(std::string d_s);

	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getNickname() const;
	std::string getPhoneNumber() const;
	std::string getDarkestSecret() const;
};

#endif
