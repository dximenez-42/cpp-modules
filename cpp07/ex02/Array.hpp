#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iomanip>

template <typename T>
class Array
{
	private:
		T*				_data;
		unsigned int	_size;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array& ref);
		Array& operator=(const Array& ref);
		~Array();

		T&				operator[](unsigned int index);
		unsigned int	size() const;

		class OutOfBoundsException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class InvalidInputException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

#include "Array.tpp"

#endif