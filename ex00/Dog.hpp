#ifndef DOG_HPP
# define DOG_HPP
# include <stdio.h>
# include <iostream>
# include <string.h>
# include <fstream>
# include "Animal.hpp"

class Dog : public Animal
{
	public:
		// CONSTRUCTORS/DESTRUCTORS
		Dog();
		Dog(const Dog &a);
		~Dog() ;

		// OPERATORS
		Dog&	operator=(const Dog &copy);
		
		// MEMBER FUNCTIONS
		void	makeSound() const;
};

#endif