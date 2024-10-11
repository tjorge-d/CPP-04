#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include <stdio.h>
# include <iostream>
# include <string.h>
# include <fstream>
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		// ATTRIBUTES
		AMateria	*_clones[4];

	public:
		// CONSTRUCTORS/DESTRUCTORS
		MateriaSource();
		MateriaSource(const MateriaSource &a);
		~MateriaSource() ;

		// OPERATORS
		MateriaSource&	operator=(const MateriaSource &copy);

		// MEMBER FUNCTIONS
		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const & type);
};

#endif