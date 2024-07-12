#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Usage: ./converter <number>" << std::endl;
		return 1;
	}

	// ScalarConverter converter;	// Compilation error because the constructor is private
	try
	{
		ScalarConverter::convert(av[1]);
	}
	catch (const std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
}
