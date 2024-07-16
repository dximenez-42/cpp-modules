#include "easyfind.hpp"
#include <iostream>
#include <vector>

int	main()
{
	std::vector<int>	v;

	for (int i = 0; i < 50; i++)
		v.push_back(i);

	std::cout << easyfind(v, 33) << std::endl;
}