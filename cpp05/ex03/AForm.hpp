#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <stdexcept>
# include <string>

class	Bureaucrat;
class AForm
{
  private:
	const std::string name;
	bool is_signed;
	const int sign_grade;
	const int exec_grade;

  public:
	AForm();
	AForm(const std::string &name, int sign_grade, int exec_grade);
	AForm(const AForm &other);
	AForm &operator=(const AForm &other);
	virtual ~AForm();

	const std::string &getName() const;
	bool getIsSigned() const;
	int getSignGrade() const;
	int getExecGrade() const;

	void beSigned(const Bureaucrat &b);

	virtual void execute(Bureaucrat const &executor) const = 0;

	class GradeTooHighException : public std::exception
	{
		const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		const char *what() const throw();
	};

	class FormNotSignedException : public std::exception
	{
		const char *what() const throw();
	};

  protected:
	void checkExecutability(Bureaucrat const &executor) const;
};

std::ostream &operator<<(std::ostream &out, const AForm &f);

#endif
