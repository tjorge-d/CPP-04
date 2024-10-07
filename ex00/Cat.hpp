#ifndef CAT_HPP
# define CAT_HPP
# include <stdio.h>
# include <iostream>
# include <string.h>
# include <fstream>
# include "Animal.hpp"

class Cat : public Animal
{
	public:
		// CONSTRUCTORS/DESTRUCTORS
		Cat();
		Cat(const Cat &a);
		~Cat() ;

		// OPERATORS
		Cat&	operator=(const Cat &copy);
		
		// MEMBER FUNCTIONS
		void	makeSound() const;
};

#endif