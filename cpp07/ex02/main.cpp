#include "Array.hpp"
#include <iostream>

int	main()
{
	Array<int>	array;
	Array<int>	array2(5);

	std::cout << "A: ";
	for (unsigned int i = 0; i < array2.size(); i++)
	{
		std::cout << array2[i] << " ";
	}
	std::cout << std::endl;

	try
	{
		array2[5] = 2;
	} catch (const std::exception& e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
}