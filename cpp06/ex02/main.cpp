# include "identify.hpp"

int	main(void)
{
	Base	*ptr;
	//delete	ptr;

	srand(time(nullptr));
	ptr = generate();
	identify(ptr);
	identify(*ptr);
    delete ptr;
	return (0);
}
