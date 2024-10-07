#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <stdio.h>
# include <iostream>
# include <string.h>
# include <fstream>

class WrongAnimal
{
	protected:
		// ATTRIBUTES
		std::string	_type;

	public:
		// CONSTRUCTORS/DESTRUCTORS
		WrongAnimal();
		WrongAnimal(const WrongAnimal &a);
		virtual ~WrongAnimal();
		
		// GETTERS
		std::string	getType() const;
		
		// OPERATORS
		WrongAnimal&	operator=(const WrongAnimal &copy);
		
		// MEMBER FUNCTIONS
		void	makeSound() const;
};

#endif