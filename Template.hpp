#ifndef TEMPLATE_HPP
#define TEMPLATE_HPP

#include <string>
#include <iomanip>
#include <iostream>

class Template
{
	private:
	public:
		Template();								// Default constructor
		Template(const Template &ref);				// Copy constructor
		Template &operator=(const Template &ref);		// Copy assignment operator
		~Template();								// Destructor
};


#endif