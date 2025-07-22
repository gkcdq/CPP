#include "whatever.hpp"

int main ()
{
    int a = 3;
    int b = 9;
    std::cout << "\n------------SWAP------------" << std::endl;
    std::cout << "Before swap: a = " << a << " / b = " << b << std::endl << std::endl;
    swap(a, b);
    std::cout << "            🔃\n\nAfter swap: a = " << a << " / b = " << b << std::endl;
    //std::cout << "\n----------------------------" << std::endl;
    std::cout << "\n------------MAX------------" << std::endl;
    std::cout << max(a,b) << std::endl;
    std::cout << "\n------------MIN------------" << std::endl;
    std::cout << min(a,b) << std::endl;
}

// int	main(void)
// {
// 	int a = 2;
// 	int b = 3;
// 	::swap(a, b);
// 	std::cout << "a = " << a << ", b = " << b << std::endl;
// 	std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
// 	std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
// 	std::string c = "chaine1";
// 	std::string d = "chaine2";
// 	::swap(c, d);
// 	std::cout << "c = " << c << ", d = " << d << std::endl;
// 	std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
// 	std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
// 	return (0);
// }