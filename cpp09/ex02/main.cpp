#include "PmergeMe.hpp"

bool	isValidNumber(const std::string &s)
{
	if (s.empty())
		return (false);
	for (size_t i = 0; i < s.size(); ++i)
	{
		if (!std::isdigit(s[i]))
			return (false);
	}
	return (true);
}

int main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cerr << "Error" << std::endl;
		return (1);
	}
	PmergeMe PM;
	for (int i = 1; i < ac; ++i)
	{
		std::string arg = av[i];
		std::stringstream ss(arg);
		std::string token;
		while (std::getline(ss, token, ','))
		{
			if (!isValidNumber(token))
			{
				std::cerr << "Error: invalid number -> " << token << std::endl;
				return (1);
			}
			int value = std::atoi(token.c_str());
			PM.add_to_vec(value);
		}
	}
	size_t i = 0;
	bool leftover = false;
	for (; i + 1 < PM.vec_size(); i += 2)
		PM.add_to_pair(PM.return_vec_index(i), PM.return_vec_index(i + 1));
	if (i < PM.vec_size())
		leftover = true;
	std::cout << "Before: ";
	for (size_t k = 0; k < PM.vec_size(); ++k)
		std::cout << PM.return_vec_index(k) << " ";
	std::cout << std::endl;
	clock_t start = clock();
	std::vector<int> sorted = PM.sort_full(leftover, (leftover ? PM.return_vec_index(i) : 0));
	clock_t end = clock();
	double duration = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1e6;
	std::cout << "After:  ";
	for (size_t k = 0; k < sorted.size(); ++k)
		std::cout << sorted[k] << " ";
	std::cout << std::endl;
	std::cout << "Time to process a range of " << PM.vec_size() << " elements with std::vector : " << duration << " µs" << std::endl;
	PmergeMe copy;
	std::cout << std::endl << "Basic verif : " << std::endl << std::endl;
	copy = PM;
	std::cout << "Copy vec = "; copy.print_vec(); std::cout << std::endl; 
	std::cout << "Copy pair = "; copy.print_pairs(); std::cout << std::endl;
	return (0);
}
