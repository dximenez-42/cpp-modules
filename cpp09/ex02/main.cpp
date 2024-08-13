#include "PmergeMe.hpp"

/**
./PmergeMe 3 5 9 7 4
./PmergeMe 3 5 9 7 4 3 5 9 7 4
./PmergeMe `shuf -i 1-100000 -n 3000 | tr "\n" " "`
 */

int main(int ac, char **av)
{
	if (ac == 1)
		return 1;

	try
	{
		PmergeMe pm(ac, av);
	}
	catch (std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
		return 1;
	}
}