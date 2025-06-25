#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat a("Meiling", 2);
		a.increment();
        std::cout << a << std::endl;

        Bureaucrat b ("Thomas", 149);
        b.decrement();
        std::cout << b << std::endl;

        Bureaucrat c ("Hania", 150);
        c.decrement();
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << " " << std::endl;
	}
}