#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP
# include <stdio.h>
# include <iostream>
# include <string.h>
# include <fstream>
# include "AMateria.hpp"

class IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif