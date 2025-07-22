#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>
#include <string>
#include <cmath>

template <typename Swap>
void swap(Swap& a, Swap& b)
{
    Swap temp = a;
    a = b;
    b = temp;
}

template <typename min>
min min(const min& a, const min& b)
{
    return (a < b) ? a : b;
}

template <typename max>
max max(const max& a, const max& b)
{
    return (a > b) ? a : b;
}

#endif