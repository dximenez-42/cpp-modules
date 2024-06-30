/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 19:39:25 by dximenez          #+#    #+#             */
/*   Updated: 2024/06/30 15:03:56 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "program.hpp"
#include <fstream>

void	program(std::string filename, std::string s1, std::string s2)
{
	std::ifstream	infile;
	std::ofstream	outfile;
	std::string		str;
	std::string		ret;

	infile.open(filename.c_str());
	outfile.open((filename + ".replace").c_str(), std::ofstream::out | std::ofstream::trunc);
	outfile.clear();
	
	if (infile.is_open())
		std::getline(infile, str, '\0');

	if (s1.empty() || s2.empty())
	{
		outfile << str;
		infile.close();
		outfile.close();
		return ;
	}
	
	long			i = 0;
	while ((i = str.find(s1)) != -1)
	{
		ret.append(str, 0, i);
		ret.append(s2);
		str = str.substr(i + s1.length());
	}
	if (str.empty() == false)
		ret.append(str);

	outfile << ret;
	infile.close();
	outfile.close();
}
