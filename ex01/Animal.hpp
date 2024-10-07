#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <stdio.h>
# include <iostream>
# include <string.h>
# include <fstream>

class Animal
{
	protected:
		// ATTRIBUTES
		std::string	_type;

	public:
		// CONSTRUCTORS/DESTRUCTORS
		Animal();
		Animal(const Animal &a);
		virtual ~Animal();

		// GETTERS
		std::string	getType() const;

		// OPERATORS
		Animal&	operator=(const Animal &copy);

		// MEMBER FUNCTIONS
		virtual void	makeSound() const;
};

#endif