#ifndef SPAN_HPP
# define SPAN_HPP

# include <algorithm>
# include <cstdlib>
# include <iostream>
# include <limits>
# include <stdexcept>
# include <string>
# include <vector>
#include <cstdlib>
#include <ctime>

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
	int shortestSpan();
	int longestSpan();
};

#endif