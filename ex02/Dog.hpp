#ifndef DOG_HPP
# define DOG_HPP
# include <stdio.h>
# include <iostream>
# include <string.h>
# include <fstream>
# include "FixedAnimal.hpp"
# include "Brain.hpp"


class Dog : public FixedAnimal
{
	private:
		// ATTRIBUTES
		Brain*	_brain;
		
	public:
		// CONSTRUCTORS/DESTRUCTORS
		Dog();
		Dog(const Dog &a);
		~Dog() ;

		// GETTERS
		std::string	getDogIdea(unsigned int index)const;
		Brain*		getDogBrain()const;

		// SETTERS
		void	setDogIdea(unsigned int index, std::string idea);

		// OPERATORS
		Dog&	operator=(const Dog &copy);
		
		// MEMBER FUNCTIONS
		void	makeSound() const;
		void	printDogIdeas(unsigned int limit)const; 
};

#endif