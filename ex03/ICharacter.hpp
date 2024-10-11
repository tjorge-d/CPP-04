#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP
# include <stdio.h>
# include <iostream>
# include <string.h>
# include <fstream>
# include "AMateria.hpp"

class AMateria;

class ICharacter
{
	public:
		// CONSTRUCTORS/DESTRUCTORS
		virtual ~ICharacter() {};

		// GETTERS
		virtual std::string const & getName() const = 0;

		// MEMBER FUNCTIONS
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

#endif