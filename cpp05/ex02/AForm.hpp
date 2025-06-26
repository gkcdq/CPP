#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include <stdbool.h>

class Bureaucrat;
class Form
{
  private:
	const std::string name;
	bool sig;
	const int sign_grade;
	const int execute_grade;

  public:
	Form();
	Form(const std::string n, const int sg, const int eg);
	Form(const Form &other);
	Form &operator=(const Form &other);
	~Form();
	class GradeTooHighException : public std::exception
	{
		const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		const char *what() const throw();
	};
	std::string getName() const;
	int getSignGrade() const;
	int getExecuteGrade() const;
	bool getSignedStatus() const;
	void beSigned(Bureaucrat &Bureaucrat);
};
std::ostream &operator<<(std::ostream &os, const Form &up);

#endif