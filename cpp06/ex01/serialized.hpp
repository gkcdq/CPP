#ifndef SERIALIZED_HPP
# define SERIALIZED_HPP

# include <cstdint>
# include <iostream>
# include <stdint.h>
# include <string>

class	Data;
class Serializer
{
  private:
	Serializer();
	~Serializer();
	Serializer(const Serializer &other);
	Serializer &operator=(const Serializer &other);

  public:
	static uintptr_t serialized(Data *ptr);
	static Data *deserialized(uintptr_t raw);
};

class Data
{
  private:
	int value;

  public:
	Data();
	~Data();
	Data(const Data &other);
	Data &operator=(const Data &other);
	void setValue(int x);
	int getValue();
};

#endif