#ifndef INTER_HPP
# define INTER_HPP

#include <string>
#include <iostream>

template<typename T, typename F>
void inter(T* array, std::size_t len, F function)
{
    int i = 0;
    while (i < len)
    {
        function(array[i]);
        i++;
    }
    return;
}

#endif