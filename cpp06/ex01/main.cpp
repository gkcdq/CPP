#include "serialized.hpp"
#include <iostream>

int	main(void)
{
	Data		original;
	uintptr_t	raw;
	Data		*restored;

	original.setValue(123);
	raw = Serializer::serialized(&original);
	restored = Serializer::deserialized(raw);
	std::cout << "Original pointer : " << &original << std::endl;
	std::cout << "Restored pointer : " << restored << std::endl;
	std::cout << "Same address?    : " << (restored == &original ? "YES" : "NO") << std::endl;
	std::cout << "Value recovered  : " << restored->getValue() << std::endl;
	return (0);
}
