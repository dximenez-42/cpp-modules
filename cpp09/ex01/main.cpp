#include "RPN.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Usage: ./rpn \"[expression]\"" << std::endl;
		return 1;
	}
	try
	{
		RPN rpn(av[1]);
		std::cout << rpn << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	return 0;
}