#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <stdexcept>
# include <string>

class Bureaucrat
{
  private:
	const std::string name;
	int grade;

  public:
	Bureaucrat();
	Bureaucrat(std::string s, int x);
	Bureaucrat(const Bureaucrat &other);
	~Bureaucrat();
	Bureaucrat &operator=(const Bureaucrat &other);
	class GradeTooHighExeption : public std::exception
	{
		public:
		const char *what() const throw();
	};
	class GradeTooLowExeption : public std::exception
	{
		public:
		const char *what() const throw();
	};
	std::string getName() const;
	int getGrade() const;
	void increment();
	void decrement();
};
std::ostream &operator<<(std::ostream &os, const Bureaucrat &up);

#endif
