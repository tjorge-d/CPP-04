#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include <stdio.h>
# include <iostream>
# include <string.h>
# include <fstream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		// CONSTRUCTORS/DESTRUCTORS
		WrongCat();
		WrongCat(const WrongCat &a);
		~WrongCat() ;

		// OPERATORS
		WrongCat&	operator=(const WrongCat &copy);
		
		// MEMBER FUNCTIONS
		void	makeSound() const;
};

#endif