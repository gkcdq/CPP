#ifndef INTER_HPP
# define INTER_HPP

# include <iostream>
# include <string>

template <typename T, typename F> void inter(T *array, std::size_t len, F function)
{
	long int	i;

	if (!array || !function || len < 0)
		return ;
	i = 0;
	while (i < len)
	{
		function(array[i]);
		i++;
	}
	return ;
}

#endif