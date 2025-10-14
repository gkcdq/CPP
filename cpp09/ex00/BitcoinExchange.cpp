#include "BitcoinExchange.hpp"

Bitcoin::Bitcoin(){}
Bitcoin::~Bitcoin(){}
Bitcoin::Bitcoin(const Bitcoin &other){map = other.map;}
Bitcoin& Bitcoin::operator=(const Bitcoin& other)
{
    if ( this != &other)
    {
        map = other.map;
    }
    return (*this);
}

std::map<std::string, double>& Bitcoin::getMap()
{
    return map;
}

void Bitcoin::add_data_to_map(const std::string& key, double value)
{
    map[key] = value;
}