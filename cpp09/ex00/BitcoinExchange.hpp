#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <map>
# include <string>
# include <fstream>
# include <sstream>

class Bitcoin
{
  private:
	std::map<std::string, double> map;

  public:
	Bitcoin();
	Bitcoin(const Bitcoin &other);
	Bitcoin &operator=(const Bitcoin &other);
	~Bitcoin();
	std::map<std::string, double>& getMap();
	void add_data_to_map(const std::string& key, double value);
};

#endif