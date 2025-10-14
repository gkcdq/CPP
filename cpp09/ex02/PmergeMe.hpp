#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <deque>
# include <iostream>
# include <string>
# include <vector>
# include <cstdlib>
# include <cctype>
# include <sstream>
# include <ctime>
# include <algorithm>

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
    void print_pairs();
    //
    void tri_pair();
    std::vector<int> get_sorted_result(bool hasLeftover, int leftover);
    std::vector<int> sort_full(bool hasLeftover, int leftover);

};

#endif