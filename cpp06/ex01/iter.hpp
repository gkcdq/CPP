#ifndef ITER_HPP
#define ITER_HPP

# include <string>
# include <iostream>

template <typename T, typename F> void iter(T *arg, const size_t size, F func){
    for (size_t i = 0; i < size; i++)
        func(arg[i]);
}

#endif