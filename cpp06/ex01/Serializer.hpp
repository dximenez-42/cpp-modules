#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <string>
#include <iostream>
#include "Data.hpp"

typedef	size_t	uintptr_t;

class Serializer
{
	private:
		Serializer();

	public:
		Serializer(const Serializer& ref);
		Serializer& operator=(const Serializer& ref);
		~Serializer();

		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif