#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
#include <map>


class BitcoinExchange
{
private:
	std::map<std::string, double> _data;

public:
	BitcoinExchange(std::string str);
	BitcoinExchange(const BitcoinExchange &other);
	BitcoinExchange &operator=(const BitcoinExchange &other);
	~BitcoinExchange();

	void	insert(std::string date, double value);
};

std::string	removeSpaces(std::string str);
std::vector<std::string>	split(std::string str, char delimiter);

#endif