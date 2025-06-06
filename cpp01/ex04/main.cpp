#include "sed_is_for_loser.hpp"


std::string replace_occurence(std::string line, std::string s1, std::string s2)
{
    std::string tmp;
    int pos = 0;
    int found_occurence = 0;

    while((found_occurence = line.find(s1, pos)) != std::string::npos)
    {
        tmp += line.substr(pos, found_occurence - pos);
        tmp += s2;
        pos = found_occurence + s1.length();
    }
    tmp += line.substr(pos);
    return tmp;
}

int main(int ac, char **av)
{
    if (ac == 4)
    {
        std::ifstream file(av[1]);
        if (!file.is_open())
        {
            std::cerr << "Erreur: wrong file can't read it" << std::endl;
            return (1);
        }
        std::ofstream new_file("file.replace");
        if (!new_file.is_open())
        {
            std::cerr << "Erreur: failed to create a new file" << std::endl;
            return (1);
        }
        std::string line;
        while(std::getline(file, line))
        {
            std::string replaced_occurence = replace_occurence(line, av[2], av[3]);
            new_file << replaced_occurence << "\n";
        }
    }
    else
        std::cout << "Usage: <file_name> <s1> <s2>" << std::endl;
    return 0;
}