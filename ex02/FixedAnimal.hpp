#ifndef FIXEDANIMAL_HPP
# define FIXEDANIMAL_HPP
# include <stdio.h>
# include <iostream>
# include <string.h>
# include <fstream>

class FixedAnimal
{
	protected:
		// ATTRIBUTES
		std::string	_type;

	public:
		// CONSTRUCTORS/DESTRUCTORS
		FixedAnimal();
		FixedAnimal(const FixedAnimal &a);
		virtual ~FixedAnimal() = 0;

		// GETTERS
		std::string	getType() const;

		// OPERATORS
		FixedAnimal&	operator=(const FixedAnimal &copy);

		// MEMBER FUNCTIONS
		virtual void	makeSound() const = 0;
};

#endif