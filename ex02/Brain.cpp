#include "Brain.hpp"

// CONSTRUCTORS & DESTRUCTORS

Brain::Brain()
{
	std::cout << "Brain default constructor called\n";
	for(int i = 0; i < 100; i++)
		_ideas[i] = "Im Hungry!";
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Brain copy constructor called\n";
	*this = copy;
}

Brain::~Brain()
{
	std::cout << "Brain default destructor called\n";
}

// GETTERS

std::string	Brain::getIdea(unsigned int index)const
{
	if (index >= 0 && index < 100)
		return (_ideas[index]);
	return (NULL);
}

// SETTERS

void	Brain::setIdea(unsigned int index, std::string idea)
{
	if (index >= 0 && index < 100)
		_ideas[index] = idea;
}

// OPERATORS

Brain&	Brain::operator=(const Brain &copy)
{
	std::cout << "Brain copy assignment operator called\n";
	for(int i = 0; i < 100; i++)
		_ideas[i] = copy._ideas[i];
	return (*this);
}

// MEMBER FUNCTIONS

void	Brain::printIdeas(unsigned int limit)const
{
	for (unsigned int i = 0; i < 100 && i < limit; i++)
		std::cout << i << ": \"" << _ideas[i] << "\"\n";
}