#include "Fixed.hpp"

Fixed::Fixed() : nvf(0){}

Fixed::Fixed(const int n)
{
	this->nvf = n << this->bits;
}

Fixed::Fixed(const float n)
{
	nvf = roundf(n * (1 << bits));
}

Fixed::Fixed(const Fixed &other)
{
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	if (this != &other)
		this->nvf = other.nvf;
	return (*this);
}

Fixed::~Fixed(){}

int Fixed::getRawBits(void) const
{
	return (this->nvf);
}

void Fixed::setRawBits(int const raw)
{
	this->nvf = raw;
}

float Fixed::toFloat() const
{
	return ((float)nvf / (1 << bits));
}

int Fixed::toInt() const
{
	return (nvf >> bits);
}

std::ostream &operator<<(std::ostream &os, const Fixed &f)
{
	os << f.toFloat();
	return (os);
}

bool Fixed::operator!=(const Fixed &other) const
{
	return (this->nvf != other.nvf);
}

bool Fixed::operator==(const Fixed &other) const
{
	return (this->nvf == other.nvf);
}

bool Fixed::operator<=(const Fixed &other) const
{
	return (this->nvf <= other.nvf);
}

bool Fixed::operator>=(const Fixed &other) const
{
	return (this->nvf >= other.nvf);
}

bool Fixed::operator<(const Fixed &other) const
{
	return (this->nvf < other.nvf);
}

bool Fixed::operator>(const Fixed &other) const
{
	return (this->nvf > other.nvf);
}

Fixed Fixed::operator*(const Fixed &other) const
{
	Fixed res;
	res.setRawBits((this->nvf * other.nvf));
	return (res);
}

Fixed Fixed::operator/(const Fixed &other) const
{
	Fixed res;
	res.setRawBits((this->nvf) / other.nvf);
	return (res);
}

Fixed Fixed::operator-(const Fixed &other) const
{
	Fixed res;
	res.setRawBits(this->nvf - other.nvf);
	return (res);
}

Fixed Fixed::operator+(const Fixed &other) const
{
	Fixed res;
	res.setRawBits(this->nvf + other.nvf);
	return (res);
}

Fixed &Fixed::operator++()
{
	nvf++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed	tmp;

	tmp = *this;
	nvf++;
	return (tmp);
}

Fixed &Fixed::operator--()
{
	nvf--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed	tmp;

	tmp = *this;
	nvf--;
	return (tmp);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

Fixed Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

Fixed Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}
