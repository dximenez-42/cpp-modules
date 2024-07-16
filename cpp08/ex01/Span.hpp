#ifndef SPAN_HPP
#define SPAN_HPP

#include <exception>
#include <vector>

class Span
{
	private:
		Span();
		std::vector<int>	_data;

	public:
		Span(unsigned int N);
		Span(const Span& ref);
		Span& operator=(const Span& ref);
		~Span();

		void	addNumber(int n);
		void	addRandomNumbers(unsigned int amount);
		int		shortestSpan();
		int		longestSpan();

		class MaxSizeReachedException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class NoSpanFoundException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};


#endif