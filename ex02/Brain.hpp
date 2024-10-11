#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <stdio.h>
# include <iostream>
# include <string.h>
# include <fstream>

class Brain
{
	private:
		// ATTRIBUTES
		std::string	_ideas[100];

	public:
		// CONSTRUCTORS/DESTRUCTORS
		Brain();
		Brain(const Brain &a);
		~Brain() ;

		// GETTERS
		std::string	getIdea(unsigned int index)const;

		// SETTERS
		void	setIdea(unsigned int index, std::string idea);

		// OPERATORS
		Brain&	operator=(const Brain &copy);

		// MEMBER FUNCTIONS
		void	printIdeas(unsigned int limit)const;
};

#endif