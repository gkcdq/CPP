#include "RPN.hpp"

int main(int ac, char **av)
{
    if (ac <= 1)
    {
        std::cerr << "Usage: ./RPN \"expression\"" << std::endl;
        return 1;
    }
    RPN rp;
    std::string input = av[1];
    std::stringstream ss(input);
    std::string token;

    while (ss >> token)
    {
        if (token.size() == 1 && isdigit(token[0]))
        {
            int value = token[0] - '0';
            rp.push_to_stack(value);
        }
        else if (token == "+" || token == "-" || token == "*" || token == "/")
            rp.evaluate_operation(token);
        else
        {
            std::cerr << "Error: invalid token '" << token << "'" << std::endl;
            return 1;
        }
    }
    if (rp.stack_size() != 1)
    {
        std::cerr << "Error: invalid expression" << std::endl;
        return 1;
    }
    std::cout << rp.getStackValue() << std::endl;
    return 0;
}
