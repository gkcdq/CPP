#include "Fixed.hpp"

Fixed::Fixed() : nvf(0 * (1 << bits))
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
	return (nvf);
}

Fixed::Fixed(const Fixed &other):nvf(other.nvf)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

void Fixed::setRawBits(int const raw)
{
    nvf = raw;
}

Fixed& Fixed::operator=(const Fixed &other)
{
    if (this != &other)
    {
        std::cout << "Copy assignment operator called" << std::endl;
        this->setRawBits(other.getRawBits());
    }
    return *this;
}

