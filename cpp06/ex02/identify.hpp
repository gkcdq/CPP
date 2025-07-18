#ifndef IDENTIFY_HPP
# define IDENTIFY_HPP

# include <cstdint>
# include <cstdlib>
# include <iostream>
# include <string>
# include <ctime>

class Base
{
  private:
	Base(const Base &other);
	Base &operator=(const Base &other);

  public:
	Base();
	virtual ~Base();
};

class A : public Base{};
class B : public Base{};
class C : public Base{};

Base	*generate(void);
void	identify(Base *p);
void	identify(Base &p);

#endif