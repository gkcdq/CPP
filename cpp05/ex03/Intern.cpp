#include "Intern.hpp"

Intern::Intern()
{
}
Intern::Intern(const Intern &other)
{
	(void)other;
}
Intern &Intern::operator=(const Intern &other)
{
	(void)other;
	return (*this);
}
Intern::~Intern()
{
}

AForm	*createShrubbery(const std::string &target)
{
	return (new ShrubberyCreationForm(target));
}

AForm	*createRobotomy(const std::string &target)
{
	return (new RobotomyRequestForm(target));
}

AForm	*createPresidential(const std::string &target)
{
	return (new PresidentialPardonForm(target));
}

AForm *Intern::makeForm(std::string form_name, std::string form_target)
{
	std::string all_form[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	typedef AForm *(*FormCreator)(const std::string &);
	FormCreator right_form[] = {&createShrubbery, &createRobotomy, &createPresidential};
	for(int i = 0; i < 3; i++)
	{
		if (all_form[i] == form_name)
		{
			std::cout << "Inter create " << form_name << std::endl;
			return right_form[i](form_target);
		}
	}
	std::cout << "Error: Form \"" << form_name << "\" not found." << std::endl;
	return (nullptr);
}