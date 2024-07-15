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

template <typename T>
Array<T>::Array()
{
	_data = NULL;
	_size = 0;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	if (_size < 0)		//Doesnt fix overflow because unsigned int is always >= 0
		throw Array<T>::InvalidInputException();
	_data = new T[n];
	_size = n;
}

template <typename T>
Array<T>::Array(const Array& ref)
{
	_data = new T[ref.size()];
	_size = ref.size();
	*this = ref;
}

template <typename T>
Array<T>&	Array<T>::operator=(const Array& ref)
{
	delete[] _data;
	_data = new T[ref.size()];
	_size = ref.size();
	for (unsigned int i = 0; i < ref.size(); i++)
		_data[i] = ref._data[i];
}

template <typename T>
Array<T>::~Array()
{}

template <typename T>
T&	Array<T>::operator[](unsigned int n)
{
	if (n >= _size)
		throw Array<T>::OutOfBoundsException();
	else
		return _data[n];
}

template <typename T>
unsigned int	Array<T>::size() const
{
	return _size;
}

template <typename T>
const char* Array<T>::OutOfBoundsException::what() const throw()
{
	return "Index out of bounds";
}

template <typename T>
const char* Array<T>::InvalidInputException::what() const throw()
{
	return "Invalid input";
}

#endif