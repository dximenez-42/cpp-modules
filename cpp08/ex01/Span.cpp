#include <iostream>
#include "Span.hpp"
#include <algorithm>

Span::Span(unsigned int N)
{
	_data.reserve(N);
}

Span::Span(const Span& ref)
{
	*this = ref;
}

Span& Span::operator=(const Span& ref)
{
	if (this != &ref)
	{
		_data = ref._data;
	}
	return *this;
}

Span::~Span()
{}

void	Span::addNumber(int n)
{
	if (_data.size() < _data.capacity())
		_data.push_back(n);
	else
		throw Span::MaxSizeReachedException();
}

void	Span::addRandomNumbers(unsigned int amount)
{
	srand(time(NULL));
	for (unsigned int i = 0; i < amount; i++)
	{
		addNumber(rand());
	}
}

int	Span::shortestSpan()
{
	if (_data.size() <= 1 || _data.capacity() <= 1)
	{
		throw Span::NoSpanFoundException();
		return -1;
	}
	else
	{
		std::vector<int>			v = _data;
		int							gap;
		std::vector<int>::iterator	i;

		std::sort(v.begin(), v.end());
		gap = abs(v.at(1) - v.at(0));
		for (i = v.begin(); i < v.end() - 1; ++i)
		{
			if (abs(*(i + 1) - *i) < gap)
				gap = abs(*(i + 1) - *i); 
		}
		return gap;
	}
}

int	Span::longestSpan()
{
	if (_data.size() <= 1 || _data.capacity() <= 1)
	{
		throw Span::NoSpanFoundException();
		return -1;
	}
	else
	{
		int	min = *std::min_element(_data.begin(), _data.end());
		int	max = *std::max_element(_data.begin(), _data.end());

		return abs(max - min);
	}
}

const char*	Span::MaxSizeReachedException::what() const throw()
{
	return "Max size reached in vector";
}

const char*	Span::NoSpanFoundException::what() const throw()
{
	return "No span found";
}