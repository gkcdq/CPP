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

int	main(int ac, char **av)
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
	for(; i + 1 < PM.vec_size(); i += 2)
		PM.add_to_pair(PM.return_vec_index(i), PM.return_vec_index( i + 1));
	if (i < PM.vec_size())
		leftover = true;
	PM.tri_pair();
	PM.print_pairs(PM.return_vec_index(i), leftover);
	return (0);
}