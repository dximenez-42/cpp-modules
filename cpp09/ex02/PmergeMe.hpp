#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <stdlib.h>
#include <ctime>
#include <iterator>
#include <algorithm>

class PmergeMe
{
	private:
		std::vector<int>	_vector;
		std::deque<int>		_deque;

		void	add(int n);

		void	sortVector();
		void	sortDeque();

		template<typename T>
		static void insert(T& container);

		template <typename T>
		static void sort(T& m);

	public:
		PmergeMe(int ac, char **av);
		PmergeMe(PmergeMe const &src);
		PmergeMe &operator=(PmergeMe const &src);
		~PmergeMe();

		class DuplicateNumber : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class NegativeNumber : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

#endif