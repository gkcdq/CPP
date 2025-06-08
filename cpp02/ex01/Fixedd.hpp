#ifndef FIXEDD_HPP
# define FIXEDD_HPP

# include <cmath>
# include <iostream>
# include <string>

class Fixed
{
  private:
	int nvf;
	static const int bits = 8;

  public: 
	Fixed();
	Fixed(const int n);
	Fixed(const float n);
	Fixed(const Fixed &other);
	Fixed &operator=(const Fixed &other);
	~Fixed();

	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat() const;
	int toInt() const;
};

std::ostream &operator<<(std::ostream &os, const Fixed &f);

#endif