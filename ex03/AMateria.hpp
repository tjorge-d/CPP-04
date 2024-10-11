#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <stdio.h>
# include <iostream>
# include <string.h>
# include <fstream>
# include "Character.hpp"

class ICharacter;

class AMateria
{
	protected:
		// ATTRIBUTES
		std::string	_type;

	public:
		// CONSTRUCTORS/DESTRUCTORS
		AMateria();
		AMateria(std::string const & type);
		AMateria(const AMateria &a);
		virtual	~AMateria() = 0;

		// GETTERS
		std::string const & getType() const; //Returns the materia type
		
		// SETTERS
		void	setType(std::string type);

		// OPERATORS
		AMateria&	operator=(const AMateria &copy);

		// MEMBER FUNCTIONS
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif