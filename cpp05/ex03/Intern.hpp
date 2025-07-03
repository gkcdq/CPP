#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include <string>

class Intern : public PresidentialPardonForm, public RobotomyRequestForm,
	public ShrubberyCreationForm
{
  public:
	Intern();
	Intern(const Intern &other);
	Intern &operator=(const Intern &other);
	~Intern();
	AForm *makeForm(std::string form_name, std::string form_target);
};

AForm	*createShrubbery(const std::string &target);
AForm	*createRobotomy(const std::string &target);
AForm	*createPresidential(const std::string &target);

#endif