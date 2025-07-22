#include "inter.hpp"

void	printInt(const int x)
{
	std::cout << x << std::endl;
}
void	printChar(const char c)
{
	std::cout << c << " ";
}

int	main(void)
{
	std::cout << "Int array" << std::endl;
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	inter(arr, 6, printInt);
	std::cout << std::endl << "Char array" << std::endl;
	char c[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	inter(c, 26, printChar);
	std::cout << std::endl;
}