#include "iter.hpp"
#include <string>

void	func(std::string& str)
{
	for (size_t i = 0; i < str.size(); i++)
	{
		str[i] = toupper(str[i]);
	}
}

int	main()
{
	std::string	str[] = {"Hola", "que", "tal", "!"};

	::iter(str, str->length(), func);
	::iter(str, str->length(), ::print<std::string>);
}