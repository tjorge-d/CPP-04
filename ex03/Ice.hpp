#ifndef ICE_HPP
# define ICE_HPP
# include <stdio.h>
# include <iostream>
# include <string.h>
# include <fstream>
# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		// CONSTRUCTORS/DESTRUCTORS
		Ice();
		Ice(const Ice &a);
		~Ice();

		// OPERATORS
		Ice&	operator=(const Ice &copy);
		
		// MEMBER FUNCTIONS
		Ice* clone() const;
		void use(ICharacter& target);
};

#endif