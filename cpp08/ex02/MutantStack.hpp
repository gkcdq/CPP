#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <algorithm>
# include <cstdlib>
# include <ctime>
# include <deque>
# include <iostream>
# include <limits>
# include <stack>
# include <stdexcept>
# include <string>
# include <vector>
# include <list>

template <typename T,typename Container = std::deque<T>>
class MutantStack : public std::stack<T, Container>
{
  public:
	//using std::stack<T, Container>::c;
	//using random_access_it = typename Container::random_access_iterator;
	using iterator = typename Container::iterator;
	using const_iterator = typename Container::const_iterator;
	using reverse_iterator = typename Container::reverse_iterator;
	using const_reverse_iterator = typename Container::const_reverse_iterator;
	MutantStack();
	MutantStack(const MutantStack &other);
	MutantStack &operator=(const MutantStack &other);
	~MutantStack();
	iterator begin();
	iterator end();
	const_iterator begin() const;
	const_iterator end() const;
	reverse_iterator rbegin();
	reverse_iterator rend();
	const_reverse_iterator rbegin() const;
	const_reverse_iterator rend() const;
};
# include "MutantStack.tpp"
#endif