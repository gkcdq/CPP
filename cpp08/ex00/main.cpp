#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main()
{
    std::vector<int> v = {1,2,3,4,5,6,7,8,9};
    int find = 3;
    int not_find = 12;
    easyfind(v, find);
    easyfind(v, not_find);
    return 0;
}
