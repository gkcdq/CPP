#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <iostream>
# include <string>

template <typename T> int easyfind(const T &container, int value)
{
	typename T::const_iterator it = std::find(container.begin(),
			container.end(), value);
	if (it == container.end())
	{
        std::cout << "Value not find : " << value << std::endl;
		return (1);
	}
    std::cout << "Value find : " << value << std::endl;
	return (0);
}

#endif