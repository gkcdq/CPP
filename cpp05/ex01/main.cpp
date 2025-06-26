#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	std::cout << "\n------Bureaucrat :\n" << std::endl;
	try
	{
		Bureaucrat a("Meiling", 2);
		a.increment();
		std::cout << a << std::endl;
		Bureaucrat b("Thomas", 149);
		b.decrement();
		std::cout << b << std::endl;
		Bureaucrat c("Hania", 150);
		c.decrement();
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << " " << std::endl;
	}
	std::cout << "\n\n\n\n------Form :\n" << std::endl;
	try
	{
		Form form1("Form1", 50, 30);
		std::cout << form1 << std::endl;
		try
		{
			Form form2("Form2", 0, 30);
		}
		catch (const std::exception &e)
		{
			std::cerr << "Exception: " << e.what() << std::endl;
		}
		try
		{
			Form form3("Form3", 200, 30);
		}
		catch (const std::exception &e)
		{
			std::cerr << "Exception: " << e.what() << std::endl;
		}
		Bureaucrat bureaucrat1("Alice", 40);
		Bureaucrat bureaucrat2("Bob", 60);
		bureaucrat1.signForm(form1);
		std::cout << form1 << std::endl;
		bureaucrat2.signForm(form1);
		std::cout << form1 << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	return (0);
}
