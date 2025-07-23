#include "Array.hpp"

template <typename T> Array<T>::Array() : array(nullptr), _size(0) {}

template <typename T> Array<T>::Array(unsigned int n) : array(new T[n]()), _size(n) {}

template <typename T> Array<T>::~Array()
{
    delete[] array;
}

template <typename T> Array<T>::Array(const Array &other)
{
	_size = other._size;
    array = new T[_size];
    unsigned i = 0;
    while (i < _size)
    {
        array[i] = other.array[i];
        i++;
    }
}
template <typename T> Array<T> &Array<T>::operator=(const Array &other)
{
	if (this != &other)
	{
        delete[] array;
		_size = other._size;
        array = new T[_size];
        unsigned i = 0;
        while (i < _size)
        {
            array[i] = other.array[i];
            i++;
        }
	}
	return (*this);
}

template <typename T>
T &Array<T>::operator[](unsigned int i)
{
    if (i >= _size)
        throw std::out_of_range("Index out of size");
    return (array[i]);
}

template<typename T>
const T &Array<T>::operator[](unsigned int i) const
{
    if (i >= _size)
        throw std::out_of_range("Index out of size");
    return (array[i]);
}

template<typename T>
unsigned int Array<T>::size() const
{
    return _size;
}