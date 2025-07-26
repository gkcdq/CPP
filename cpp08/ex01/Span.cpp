#include "Span.hpp"

Span::Span() : max_size(0) {}
Span::~Span() {}
Span::Span(unsigned int x) : max_size(x) {}
Span::Span(const Span &other) : max_size(other.max_size), store_int(other.store_int){}
Span &Span::operator=(const Span &other)
{
	if (this != &other)
	{
		max_size = other.max_size;
		store_int = other.store_int;
	}
	return (*this);
}

void Span::addNumber(int value)
{
	if (store_int.size() >= max_size)
	{
		throw std::overflow_error("Span is full");
	}
	store_int.push_back(value);
}

int Span::longestSpan()
{
	if (store_int.size() < 2)
		throw std::logic_error("Not enough numbers to compute longest span");
	std::pair<std::vector<int>::iterator, std::vector<int>::iterator> result;
	result = std::minmax_element(store_int.begin(), store_int.end());
	return (*(result.second) - *(result.first));
}

int Span::shortestSpan()
{
	int	minSpan;
	int	diff;

	if (store_int.size() < 2)
		throw std::logic_error("Not enough numbers to compute shortest span");
	std::vector<int> tmp = store_int;
	std::sort(tmp.begin(), tmp.end());
	minSpan = std::numeric_limits<int>::max();
	for (size_t i = 1; i < tmp.size(); ++i)
	{
		diff = tmp[i] - tmp[i - 1];
		if (diff < minSpan)
			minSpan = diff;
	}
	return (minSpan);
}
