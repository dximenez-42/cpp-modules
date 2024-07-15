#ifndef WHATEVER_HPP
#define WHATEVER_HPP


template <typename T>
void	swap(T& a1, T& a2)
{
	T	temp;

	temp = a1;
	a1 = a2;
	a2 = temp;
}

template <typename T>
T	min(T& v1, T& v2)
{
	if (v1 == v2)
		return v2;
	else if (v1 < v2)
		return v1;
	else
		return v2;
}

template <typename T>
T	max(T& v1, T& v2)
{
	if (v1 == v2)
		return v2;
	else if (v1 > v2)
		return v1;
	else
		return v2;
}

#endif