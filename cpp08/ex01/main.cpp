#include "Span.hpp"

int	main(void)
{
	std::srand(static_cast<unsigned int>(std::time(NULL)));

	try
	{
		std::cout << ">>> Test 1: Subject main" << std::endl;
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;


		std::cout << "\n>>> Test 2: Overflow (doit lancer une exception)" << std::endl;
		try
		{
			sp.addNumber(99);
		}
		catch (const std::exception &e)
		{
			std::cerr << "Caught expected exception: " << e.what() << std::endl;
		}
		std::cout << "\n>>> Test 3: Too less value for span" << std::endl;
		Span sp2(2);
		sp2.addNumber(10);
		try
		{
			std::cout << "Trying shortestSpan with only 1 number..." << std::endl;
			std::cout << "Shortest span: " << sp2.shortestSpan() << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cerr << "Caught expected exception: " << e.what() << std::endl;
		}
		std::cout << "\n>>> Test 4: Beaucoup de valeurs (10000)" << std::endl;
		Span sp3(10000);
		for (int i = 0; i < 10000; ++i)
			sp3.addNumber(std::rand());
		std::cout << "Shortest span (10000 values): " << sp3.shortestSpan() << std::endl;
		std::cout << "Longest span (10000 values): " << sp3.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Unexpected exception: " << e.what() << std::endl;
	}
	try
	{
		std::cout << std::endl << ">>> \"Last but not least\"" << std::endl;
		std::vector<int> values = {1, 2, 3, 4, 5};
		Span sp(10);
		sp.addNumber(42);
		sp.addNumbers(values.begin(), values.end());

		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	return (0);
}

// int main()
// {
// Span sp = Span(4);
// sp.addNumber(6);
// sp.addNumber(3);
// sp.addNumber(17);
// sp.addNumber(9);
// sp.addNumber(11);
// std::cout << sp.shortestSpan() << std::endl;
// std::cout << sp.longestSpan() << std::endl;
// return 0;
// }