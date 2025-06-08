#include "Fixedd.hpp"

Fixed::Fixed()
{
	std::cout << "Default contructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;
	this->nvf = n << this->bits;
}

Fixed::Fixed(const float n)
{
	std::cout << "Float constructor called" << std::endl;
	this->nvf = roundf(n * (1 << bits));
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy construtor called" << std::endl;
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	if (this != &other)
	{
		std::cout << "Copy assignment operator called" << std::endl;
		this->nvf = other.nvf;
	}
	return (*this);
}

float Fixed::toFloat() const
{
	return (float)nvf / (1 << bits);
}

int Fixed::toInt() const
{
    return nvf >> bits;
}

std::ostream& operator<<(std::ostream &os, const Fixed &f)
{
    os << f.toFloat();
    return os;
}