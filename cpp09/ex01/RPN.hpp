#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <sstream>
# include <stack>
# include <stdbool.h>
# include <string>
#include <cstdlib>

class RPN
{
  private:
	std::stack<int> ____stack;
	int apply_plus(int a, int b);
	int apply_minus(int a, int b);
	int apply_multiplication(int a, int b);
	int apply_division(int a, int b);

  public:
	RPN();
	RPN(const RPN &other);
	RPN &operator=(const RPN &other);
	~RPN();
	bool evaluate_operation(std::string &s);
  void push_to_stack(int x);
  int getStackValue();
  int stack_size();
};

#endif