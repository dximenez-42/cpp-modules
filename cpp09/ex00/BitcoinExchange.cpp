#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string input)
{
	std::ifstream file(input);
	std::ifstream database("data.csv");
	std::string line;
	std::string lines;

	if (database.is_open())
	{
		while (std::getline(database, line))
		{
			if (line == "date,exchange_rate")
				continue ;
			try {
				std::string date = line.substr(0, line.find(","));
				double value = std::stod(line.substr(line.find(",") + 1));
				this->_data.insert(std::pair<std::string, double>(date, value));
			} catch (const std::exception& e) {
				std::cerr << "Error: bad input => " << line << std::endl;
				continue ;
			}
		}
		database.close();

		if (file.is_open())
		{
			std::vector<std::string> tokens;
			while (std::getline(file, line))
			{
				tokens = split(line, '|');
				if (tokens.size() != 2)
				{
					std::cerr << "Error: bad input => " << line << std::endl;
					return ;
				}
				else
				{
					std::cout << "Inserting: " << removeSpaces(tokens[0]) << " => " << removeSpaces(tokens[1]) << std::endl;
				}
			}
			file.close();
		}
		else
		{
			std::cerr << "Error: could not open file." << std::endl;
		}
	}
	else
	{
		std::cerr << "Error: could not open database." << std::endl;
	}
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src)
{
	*this = src;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &rhs)
{
	if (this != &rhs)
	{
		this->_data = rhs._data;
	}
	return (*this);
}

BitcoinExchange::~BitcoinExchange()
{}

void	BitcoinExchange::insert(std::string date, double value)
{
	this->_data.insert(std::pair<std::string, double>(date, value));
}

std::vector<std::string>	split(std::string str, char delimiter)
{
	std::vector<std::string> tokens;
	std::string token;

	for (size_t i = 0; i < str.size(); i++)
	{
		if (str[i] == delimiter)
		{
			tokens.push_back(token);
			token.clear();
		}
		else
		{
			token += str[i];
		}
	}
	return (tokens);
}

std::string	removeSpaces(std::string str)
{
	const std::string space = " \n\r\t";

	str.erase(str.find_last_not_of(space) + 1);
	str.erase(0, str.find_first_not_of(space));
	return (str);
}