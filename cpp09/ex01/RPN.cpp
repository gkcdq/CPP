# include "RPN.hpp"

RPN::RPN(){}
RPN::~RPN(){}
RPN::RPN(const RPN &other){____stack = other.____stack;}
RPN& RPN::operator=(const RPN &other)
{
    if (this != &other)
    {
        ____stack = other.____stack;
    }
    return *this;
}
int RPN::apply_plus(int a, int b){return a + b;}
int RPN::apply_minus(int a, int b){return a - b;}
int RPN::apply_multiplication(int a, int b){return a * b;}
int RPN::apply_division(int a, int b){return a / b;}
bool RPN::evaluate_operation(std::string &s)
{
    if (____stack.size() < 2)
    {
        std::cerr << "Erreur : not enought data" << std::endl;
        return (false);
    }
    int a = ____stack.top();
    ____stack.pop();
    int b = ____stack.top();
    ____stack.pop();
    int result = 0;
    if (s == "+")
        result = apply_plus(b, a);
    else if (s == "-")
        result = apply_minus(b, a);
    else if (s == "*")
        result = apply_multiplication(b, a);
    else if (s == "/")
    {
        if (a == 0 || b == 0)
        {
            std::cout << "Error : division by 0, mathematic impossible" << std::endl;
            return (false);
        }
        result = apply_division(a , b);
    }
    else
    {
        std::cerr << "Error : wrong operator" << std::endl;
        return (false);
    }
    ____stack.push(result);
    return (true);
}
 void RPN::push_to_stack(int x)
 {
    ____stack.push(x);
 }

 int RPN::getStackValue()
 {
    return ____stack.top();
 }

 int RPN::stack_size()
 {
    if (____stack.size() != 1)
        return (0);
    return (1);
 }
