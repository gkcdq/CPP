#ifndef SPAN_HPP
# define SPAN_HPP

# include <algorithm>
# include <cstdlib>
# include <cstdlib>
# include <ctime>
# include <iostream>
# include <limits>
# include <stdexcept>
# include <string>
# include <vector>

class Span
{
  private:
	unsigned int max_size;
	std::vector<int> store_int;

  public:
	Span();
	Span(unsigned int x);
	Span &operator=(const Span &other);
	Span(const Span &other);
	~Span();
	void addNumber(int value);
	template <typename Iterator> void addNumbers(Iterator begin, Iterator end)
	{
		size_t rangeSize = std::distance(begin, end);
		if (store_int.size() + rangeSize > max_size)
			throw std::overflow_error("Not enough space in Span to add this range");
		store_int.insert(store_int.end(), begin, end);
	}
	int shortestSpan();
	int longestSpan();
};

#endif