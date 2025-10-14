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
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void PmergeMe::print_pairs()
{
    for (size_t i = 0; i < pair.size(); ++i)
    {
        std::cout << pair[i].first << " " << pair[i].second << " ";
    }
    std::cout << std::endl;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void PmergeMe::tri_pair()
{
    for (size_t i = 0; i < pair.size(); ++i)
    {
        if (pair[i].first > pair[i].second)
            std::swap(pair[i].first, pair[i].second);
    }
}

// construit et renvoie le vecteur trié final
std::vector<int> PmergeMe::get_sorted_result(bool hasLeftover, int leftover)
{
    tri_pair();
    std::vector<int> grands;
    std::vector<int> petits;
    grands.reserve(pair.size());
    petits.reserve(pair.size());
    for (size_t i = 0; i < pair.size(); ++i)
    {
        petits.push_back(pair[i].first);
        grands.push_back(pair[i].second);
    }
    std::sort(grands.begin(), grands.end());
    for (size_t i = 0; i < petits.size(); ++i)
    {
        int val = petits[i];
        auto it = std::lower_bound(grands.begin(), grands.end(), val);
        grands.insert(it, val);
    }
    if (hasLeftover)
    {
        auto it = std::lower_bound(grands.begin(), grands.end(), leftover);
        grands.insert(it, leftover);
    }
    return grands;
}

std::vector<int> PmergeMe::sort_full(bool hasLeftover, int leftover)
{
    tri_pair();
    std::vector<int> grands;
    std::vector<int> petits;

    for (size_t i = 0; i < pair.size(); ++i)
    {
        petits.push_back(pair[i].first);
        grands.push_back(pair[i].second);
    }
    std::sort(grands.begin(), grands.end());
    for (size_t i = 0; i < petits.size(); ++i)
    {
        int val = petits[i];
        auto pos = std::lower_bound(grands.begin(), grands.end(), val);
        grands.insert(pos, val);
    }
    if (hasLeftover)
    {
        auto pos = std::lower_bound(grands.begin(), grands.end(), leftover);
        grands.insert(pos, leftover);
    }
    return grands;
}
