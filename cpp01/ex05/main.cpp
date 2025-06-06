#include "Harl.hpp"

int main (void)
{
    Harl H;

    std::cout << "All Harl can say :" << std::endl;
    H.complain("DEBUG");
    H.complain("INFO");
    H.complain("WARNING");
    H.complain("ERROR");
    H.complain("false");
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