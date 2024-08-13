#include "PmergeMe.hpp"

PmergeMe::PmergeMe(int ac, char **av)
{
	for (int i = 1; i < ac; i++)
			add(std::atoi(av[i]));

	std::cout << "Before: ";
	for (std::size_t i = 0; i < _vector.size(); i++)
		std::cout << _vector[i] << " ";
	std::cout << std::endl;

	clock_t	start_vector = clock();
	sortVector();
	clock_t	end_vector = clock();
	double	time_vector = double(end_vector - start_vector) / CLOCKS_PER_SEC;


	clock_t	start_deque = clock();
	sortDeque();
	clock_t	end_deque = clock();
	double	time_deque = double(end_deque - start_deque) / CLOCKS_PER_SEC;

	std::cout << "After: ";
	for (std::size_t i = 0; i < _vector.size(); i++)
		std::cout << _vector[i] << " ";
	std::cout << std::endl;

	std::cout << "Time to process a range of " << ac - 1 << " elements with std::vector : " << time_vector << " us" << std::endl;
	std::cout << "Time to process a range of " << ac - 1 << " elements with std::deque : " << time_deque << " us" << std::endl;
}

PmergeMe::PmergeMe(PmergeMe const &src)
{
	*this = src;
}

PmergeMe &PmergeMe::operator=(PmergeMe const &src)
{
	if (this != &src)
	{
		_vector = src._vector;
		_deque = src._deque;
	}
	return *this;
}

PmergeMe::~PmergeMe()
{}

void	PmergeMe::add(int n)
{
	if (n < 0)
		throw NegativeNumber();
	for (std::size_t i = 0; i < _vector.size(); i++)
	{
		if (_vector[i] == n)
			throw DuplicateNumber();
	}
	_vector.push_back(n);
	_deque.push_back(n);
}

const char* PmergeMe::DuplicateNumber::what() const throw()
{
	return "Duplicate number";
}

const char* PmergeMe::NegativeNumber::what() const throw()
{
	return "Negative number";
}

// Sort vector with Ford Jhonson algorithm
void	PmergeMe::sortVector()
{
}

void	PmergeMe::sortDeque()
{
}