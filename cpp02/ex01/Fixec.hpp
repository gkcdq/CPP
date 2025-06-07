#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
  private:
	int nvf;
	int const bits;

  public:
	Fixed();
	Fixed(const Fixed &other);
	Fixed &operator=(const Fixed &other);
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const raw);
    ////////////////////////////////
    Fixed(const int x);
};

#endif