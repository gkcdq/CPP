#include "iter.hpp"

// int main(){
//    int array[] = {1,2,3};
//    std::string arg2[6] = {"hello", "hey", "blah"};
//    iter(array, 3, print<int>);
//    iter(arg2, 3, printconst<std::string>);
//}

void	ft_tolower(char &arr)
{
	arr = std::tolower(static_cast<unsigned char>(arr));
}

void	ft_toupper(char &arr)
{
	arr = std::toupper(static_cast<unsigned char>(arr));
}

class Awesome
{
  public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
  private:
    int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
  o << rhs.get();
  return o;
}

template< typename T >
void print( T& x )
{
  std::cout << x << std::endl;
  return;
}

int main() {
  int tab[] = { 0, 1, 2, 3, 4 };
  Awesome tab2[5];

  const int len = 5;

  iter( tab, len, print<const int> );
  iter( tab2, len, print<Awesome> );

  return 0;
}