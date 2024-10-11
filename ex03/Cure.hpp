#ifndef CURE_HPP
# define CURE_HPP
# include <stdio.h>
# include <iostream>
# include <string.h>
# include <fstream>
# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		// CONSTRUCTORS/DESTRUCTORS
		Cure();
		Cure(const Cure &a);
		~Cure();

		// OPERATORS
		Cure&	operator=(const Cure &copy);
		
		// MEMBER FUNCTIONS
		Cure* clone() const;
		void use(ICharacter& target);
};

#endif