#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string input)
{
	std::ifstream file;
	std::ifstream database;
	std::string line;
	std::string lines;

	file.open(input.c_str());
	database.open("data.csv");

	if (database.is_open())
	{
		std::getline(database, line);
		while (std::getline(database, line))
		{
			try {
				char *end;
				std::string date = line.substr(0, line.find(","));
				double value = std::strtod(line.substr(line.find(",") + 1).c_str(), &end);
				this->_data.insert(std::pair<std::string, double>(date, value));
			} catch (const std::exception& e) {
				std::cerr << "Error: bad input => " << line << std::endl;
				continue;
			}
		}
		database.close();

		if (file.is_open())
		{
			std::pair<std::string, std::string> pair;
			std::getline(file, line);
			while (std::getline(file, line))
			{
				pair = split(line, '|');

				if (pair.first.empty() || pair.second.empty())
				{
					std::cerr << "Error: bad input => " << line << std::endl;
					continue;
				}

				char*	end;
				double	value = std::strtod(pair.second.c_str(), &end);
				double	rate = getExchangeRate(pair.first);

				if ((value * rate) > std::numeric_limits<int>::max())
				{
					std::cerr << "Error: too large a number." << std::endl;
					continue;
				}
				if (value < 0)
				{
					std::cerr << "Error: not a positive number." << std::endl;
					continue;
				}
				std::cout << removeSpaces(pair.first) << " => " << removeSpaces(pair.second) << " = " << value * rate << std::endl;
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
	return *this;
}

BitcoinExchange::~BitcoinExchange()
{}

void	BitcoinExchange::insert(std::string date, double value)
{
	this->_data.insert(std::pair<std::string, double>(date, value));
}

double	BitcoinExchange::getExchangeRate(std::string date)
{
	std::map<std::string, double>::iterator it = this->_data.lower_bound(date);

	if (it->first == date)
	{
		return it->second;
	}
	else if (it == this->_data.begin())
	{
		std::cerr << "Error: no data found for date " << date << std::endl;
		return 0;
	}
	else
	{
		return (--it)->second;
	}
}

std::pair<std::string, std::string>	split(std::string str, char delimiter)
{
	std::pair<std::string, std::string> pair;
	size_t start = str.find(delimiter);

	if (start == std::string::npos)
		return pair;

	pair.first = str.substr(0, start);
	pair.second = str.substr(start + 1);
	if (pair.second.find(delimiter) != std::string::npos)
	{
		pair.first.clear();
		pair.second.clear();
	}
	return pair;
}

std::string	removeSpaces(std::string str)
{
	const std::string space = " \n\r\t";

	str.erase(str.find_last_not_of(space) + 1);
	str.erase(0, str.find_first_not_of(space));
	return str;
}
