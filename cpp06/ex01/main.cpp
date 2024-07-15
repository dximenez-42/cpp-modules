#include "Serializer.hpp"

int	main()
{
	Data		data;
	uintptr_t	serialized;
	Data		*deserialized;

	data.s = std::string("Hola!");
	serialized = Serializer::serialize(&data);

	std::cout << "Data: " << &data << ", " << data.s << std::endl;
	std::cout << "Serialized: " << serialized << std::endl << std::endl;

	deserialized = Serializer::deserialize(serialized);

	std::cout << "Deserialized: " << deserialized << ", " << deserialized->s << std::endl;
}