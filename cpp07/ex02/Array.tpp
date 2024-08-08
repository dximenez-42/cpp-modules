#include "Array.hpp"

template <typename T>
Array<T>::Array()
{
	_data = NULL;
	_size = 0;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
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
