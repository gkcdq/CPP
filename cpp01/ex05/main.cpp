#include "Harl.hpp"

int main (void)
{
    Harl H;

    std::cout << std::endl << "All Harl can say :" << std::endl << std::endl;
    std::cout << " - "; H.complain("DEBUG");
    std::cout << " - "; H.complain("INFO");
    std::cout << " - "; H.complain("WARNING");
    std::cout << " - "; H.complain("ERROR");
    std::cout << " - "; H.complain("false");
    std::cout << std::endl;
    std::cout << "Infinity loop :" << std::endl;
    std::cout << std::endl;
    std::string s[] = {"DEBUG","INFO","WARNING","ERROR"};
    int namesCount = sizeof(s) / sizeof(std::string);
    srand(time(NULL));
    int random_index;
    std::string name;
    while(1)
    {
        random_index = rand() % namesCount;
        name = s[random_index];
        H.complain(name);
        usleep(200000);
    }
    return (0);
}