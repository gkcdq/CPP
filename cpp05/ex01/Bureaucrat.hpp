#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <stdexcept>
# include <string>

class Bureaucrat
{
  private:
	std::string name;
	int grade;

  public:
	Bureaucrat();
	Bureaucrat(std::string name, int x);
	Bureaucrat &operator=(const Bureaucrat &other);
	~Bureaucrat();
	void setName(std::string name);
	std::string getType();
	int getGrade();
	class GradeTooHighExeption : public std::exception
	{
		const char *what() const throw();
	};
	class GradeTooLowExeption : public std::exception
	{
		const char *what() const throw();
	};
	void increment();
	void decrement();
};
std::ostream &operator<<(std::ostream &os, Bureaucrat &up);

#endif