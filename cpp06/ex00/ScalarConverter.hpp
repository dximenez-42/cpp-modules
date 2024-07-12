#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>

enum type
{
	INVALID,
	CHAR,
	INT,
	DOUBLE,
	FLOAT
};

class ScalarConverter
{
	private:
		ScalarConverter();

	public:
		ScalarConverter(const ScalarConverter &ref);
		ScalarConverter &operator=(const ScalarConverter &ref);
		~ScalarConverter();

		static void	convert(std::string str);

		class InvalidInputException : public std::exception
		{
			virtual const char *what() const throw();
		};
};

#endif
