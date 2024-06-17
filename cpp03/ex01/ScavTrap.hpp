#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <string>
#include <iomanip>
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
	public:
		ScavTrap();								// Default constructor
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &ref);				// Copy constructor
		ScavTrap &operator=(const ScavTrap &ref);		// Copy assignment operator
		~ScavTrap();								// Destructor

		void	attack(const std::string& target);
		void	guardGate();
};


#endif