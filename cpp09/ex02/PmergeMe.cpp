#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){}
PmergeMe::PmergeMe(const PmergeMe &other)
{
    vec = other.vec;
    deq = other.deq;
}
PmergeMe& PmergeMe::operator=(const PmergeMe &other)
{
    if (this != &other)
    {
        vec = other.vec;
        deq = other.deq;
    }
    return *this;
}
PmergeMe::~PmergeMe(){}
void PmergeMe::add_to_vec(int nbr)
{
    vec.push_back(nbr);
}
int PmergeMe::vec_size()
{
    return vec.size();
}
void PmergeMe::add_to_pair(int a, int b)
{
    pair.push_back(std::make_pair(a, b));
}
int PmergeMe::return_vec_index(int i)
{
    return vec[i];
}
// V
void PmergeMe::print_pairs(int nbr, bool leftover)
{
    int i = 0;
    while (i < pair.size())
    {
        if  (leftover == true && nbr < pair[i].first)
            std::cout << nbr << ' ';
        std::cout << pair[i].first << " ";
        i++;
    }
    i = 0;
    while ( i < pair.size())
    {
        if (leftover == true && nbr < pair[i].second)
            std::cout << nbr << ' ';
        std::cout << pair[i].second << " ";
        i++;
    }
    std::cout << std::endl;
}
// A
void PmergeMe::tri_pair()
{
    int i = 0;
    while (i < pair.size())
    {
        if (pair[i].first > pair[i].second)
        {
            int temp = pair[i].first;
            pair[i].first = pair[i].second;
            pair[i].second = temp;
        }
        i++;
    }
}