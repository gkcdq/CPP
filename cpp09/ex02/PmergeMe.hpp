#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <deque>
# include <iostream>
# include <string>
# include <vector>
# include <cstdlib>
# include <cctype>
# include <sstream>

class PmergeMe
{
  private:
	std::vector<int> vec;
  std::vector<std::pair<int, int>> pair;
	std::deque<int> deq;

  public:
    PmergeMe();
    PmergeMe(const PmergeMe &other);
    PmergeMe& operator=(const PmergeMe &other);
    ~PmergeMe();
    void add_to_vec(int nbr);
    int vec_size();
    void add_to_pair(int a, int b);
    int return_vec_index(int i);
    //
    void print_pairs(int nbr, bool leftover);
    //
    void tri_pair();
};

#endif