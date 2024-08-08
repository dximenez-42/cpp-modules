#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{}

ScalarConverter::ScalarConverter(const ScalarConverter &ref)
{
	*this = ref;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &ref)
{
	if (this != &ref)
		*this = ref;
	return *this;
}

ScalarConverter::~ScalarConverter()
{}

bool	isChar(std::string str)
{
	if (str.length() == 1 && !std::isdigit(str[0]))
		return true;
	return false;
}

bool	isInt(std::string str)
{
	if (str.length() == 1 && !std::isdigit(str[0]))
		return false;
	for (size_t i = 0; i < str.length(); i++)
	{
		if (i == 0 && (str[i] == '-' || str[i] == '+'))
			continue;
		if (!std::isdigit(str[i]))
			return false;
	}
	return true;
}

bool	isDouble(std::string str)
{
	bool	hasDot = false;

	if (str == "nan" || str == "+inf" || str == "-inf")
		return true;
	if (str.length() == 1 && !std::isdigit(str[0]))
		return false;
	for (size_t i = 0; i < str.length(); i++)
	{
		if (i == 0 && (str[i] == '-' || str[i] == '+'))
			continue;
		if (str[i] == '.' && !hasDot)
		{
			hasDot = true;
			continue;
		}
		if (!std::isdigit(str[i]))
			return false;
	}
	return true;
}

bool	isFloat(std::string str)
{
	bool	hasDot = false;

	if (str == "nanf" || str == "+inff" || str == "-inff")
		return true;
	if ((str.length() == 1 && !std::isdigit(str[0])) || str[str.length() - 1] != 'f')
		return false;
	for (size_t i = 0; i < str.length() - 1; i++)
	{
		if (i == 0 && (str[i] == '-' || str[i] == '+'))
			continue;
		if (str[i] == '.' && !hasDot)
		{
			hasDot = true;
			continue;
		}
		if (!std::isdigit(str[i]))
			return false;
	}
	return true;
}

bool	isPseudoLiteral(std::string str)
{
	if (str == "nan"
			|| str == "+inf"
			|| str == "-inf"
			|| str == "nanf"
			|| str == "+inff"
			|| str == "-inff")
		return true;
	return false;
}

type	getType(std::string str)
{
	if (isChar(str))
		return CHAR;
	else if (isInt(str))
		return INT;
	else if (isDouble(str))
		return DOUBLE;
	else if (isFloat(str))
		return FLOAT;
	else
		return INVALID;
}

void	printChar(std::string str)
{
	char c = str[0];

	std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << std::endl;
}

void	printInt(std::string str)
{
	char*	end;
	long	i = static_cast<long>(std::strtod(str.c_str(), &end));
	char	c = static_cast<char>(i);
	double	d = static_cast<double>(i);
	float	f = static_cast<float>(i);

	if (std::isprint(i))
		std::cout << "char: '" << c << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;


	std::cout << "int: " << i << std::endl;

	if (i == static_cast<int>(f))
		std::cout << "float: " << f << ".0f" << std::endl;
	else
		std::cout << "float: " << f << "f" << std::endl;

	if (i == static_cast<int>(d))
		std::cout << "double: " << d << ".0" << std::endl;
	else
		std::cout << "double: " << d << std::endl;
}

void	printDouble(std::string str)
{
	char*	end;
	double	d = std::strtod(str.c_str(), &end);
	char	c = static_cast<char>(d);
	int		i = static_cast<int>(d);
	float	f = static_cast<float>(d);

	if (std::isprint(d))
		std::cout << "char: '" << c << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;

	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << f << "f" << std::endl;

	if (d == static_cast<double>(i))
		std::cout << "double: " << d << ".0" << std::endl;
	else
		std::cout << "double: " << d << std::endl;
}

void	printFloat(std::string str)
{
	char*	end;
	float	f = std::strtof(str.c_str(), &end);
	char	c = static_cast<char>(f);
	int		i = static_cast<int>(f);
	double	d = static_cast<double>(f);

	if (std::isprint(f))
		std::cout << "char: '" << c << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;

	std::cout << "int: " << i << std::endl;
	if (f == static_cast<float>(i))
		std::cout << "float: " << f << ".0f" << std::endl;
	else
		std::cout << "float: " << f << "f" << std::endl;

	if (f == static_cast<float>(d))
		std::cout << "double: " << d << ".0" << std::endl;
	else
		std::cout << "double: " << d << std::endl;
}

void	printPseudoLiteral(type t, std::string str)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if (t == DOUBLE)
	{
		std::cout << "float: " << str << "f" << std::endl;
		std::cout << "double: " << str << std::endl;
	}
	else if (t == FLOAT)
	{
		std::cout << "float: " << str << std::endl;
		std::cout << "double: " << str.substr(0, str.length() - 1) << std::endl;
	}
}

void	ScalarConverter::convert(std::string str)
{
		switch(getType(str))
		{
			case CHAR:
				printChar(str);
				break;
			case INT:
				printInt(str);
				break;
			case DOUBLE:
				if (isPseudoLiteral(str))
					printPseudoLiteral(DOUBLE, str);
				else
					printDouble(str);
				break;
			case FLOAT:
				if (isPseudoLiteral(str))
						printPseudoLiteral(FLOAT, str);
				else
					printFloat(str);
				break;
			default:
				throw InvalidInputException();
				break;
		}
}

const char *ScalarConverter::InvalidInputException::what() const throw()
{
	return "Invalid input";
}
