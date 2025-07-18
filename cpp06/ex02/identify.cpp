#include "identify.hpp"

Base::Base()
{
}
Base::~Base()
{
}
Base::Base(const Base &other)
{
	(void)other;
}
Base &Base::operator=(const Base &other)
{
	if (this != &other)
	{
		(void)other;
	}
	return (*this);
}

Base	*generate(void)
{
	srand(time(nullptr));
	int r = rand() % 3; 
	switch (r)
	{
	case 0:
		std::cout << "Generated: A" << std::endl;
		return (new A);
	case 1:
		std::cout << "Generated: B" << std::endl;
		return (new B);
	case 2:
		std::cout << "Generated: C" << std::endl;
		return (new C);
	}
	return (nullptr);
}

void	identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Unknown type" << std::endl;
}
void	identify(Base &p)
{
	try
	{
		(void)dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
	}
	catch (std::bad_cast &)
	{
		try
		{
			(void)dynamic_cast<B &>(p);
			std::cout << "B" << std::endl;
		}
		catch (std::bad_cast &)
		{
			try
			{
				(void)dynamic_cast<C &>(p);
				std::cout << "C" << std::endl;
			}
			catch (std::bad_cast &)
			{
				std::cout << "Unknown type" << std::endl;
			}
		}
	}
}