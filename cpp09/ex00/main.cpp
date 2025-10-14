#include "BitcoinExchange.hpp"

int	main(int ac, char **av)
{
	Bitcoin btc;
	std::ifstream input("input.txt");
	if (!input)
		return (std::cout << "Error : impossible de lire input" << std::endl,
			1);
	std::ifstream data("data.csv");
	std::string line;
	getline(data, line);
	while (getline(data, line))
	{
		if (line.empty())
			continue ;
		std::stringstream ss(line);
		std::string date;
		double value;
		if (getline(ss, date, ',') && ss >> value)
			btc.add_data_to_map(date, value);
	}
	std::string iline;
	getline(input, iline);
	while (getline(input, iline))
	{
		if (iline.empty())
			continue ;

		std::stringstream ss(iline);
		std::string date, valueStr;
		if (!getline(ss, date, '|'))
		{
			std::cout << "Error: bad input => " << iline << std::endl;
			continue ;
		}
		if (!(ss >> valueStr))
		{
			std::cout << "Error: missing value => " << iline << std::endl;
			continue ;
		}
		auto trim = [](std::string &s) {
			while (!s.empty() && isspace(s.front()))
				s.erase(s.begin());
			while (!s.empty() && isspace(s.back()))
				s.pop_back();
		};
		trim(date);
		trim(valueStr);
		if (date.size() != 10 || date[4] != '-' || date[7] != '-')
		{
			std::cout << "Error: bad input => " << date << std::endl;
			continue ;
		}
		double value;
		try
		{
			value = std::stod(valueStr);
		}
		catch (...)
		{
			std::cout << "Error: invalid number => " << valueStr << std::endl;
			continue ;
		}
		if (value < 0)
		{
			std::cout << "Error: not a positive number." << std::endl;
			continue ;
		}
		if (value > 1000)
		{
			std::cout << "Error: too large a number." << std::endl;
			continue ;
		}
		std::map<std::string, double> &dataMap = btc.getMap();
		auto it = dataMap.lower_bound(date);
		if (it == dataMap.end() || it->first != date)
		{
			if (it == dataMap.begin())
			{
				std::cout << "Error: no earlier date available for " << date << std::endl;
				continue ;
			}
			--it;
		}
		double result = value * it->second;
		std::cout << date << " => " << value << " = " << result << std::endl;
	}
}