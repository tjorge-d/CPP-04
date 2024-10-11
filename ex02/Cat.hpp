#ifndef CAT_HPP
# define CAT_HPP
# include <stdio.h>
# include <iostream>
# include <string.h>
# include <fstream>
# include "FixedAnimal.hpp"
# include "Brain.hpp"

class Cat : public FixedAnimal
{
	private:
		// ATTRIBUTES
		Brain*	_brain;
		
	public:
		// CONSTRUCTORS/DESTRUCTORS
		Cat();
		Cat(const Cat &a);
		~Cat() ;

		// GETTERS
		std::string	getCatIdea(unsigned int index)const;
		Brain*		getCatBrain()const;

		// SETTERS
		void	setCatIdea(unsigned int index, std::string idea);
		
		// OPERATORS
		Cat&	operator=(const Cat &copy);

		// MEMBER FUNCTIONS
		void	makeSound() const;
		void	printCatIdeas(unsigned int limit)const; 
};

#endif