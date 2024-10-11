#include "Cat.hpp"

// CONSTRUCTORS & DESTRUCTORS

Cat::Cat() : FixedAnimal()
{
	std::cout << "Cat default constructor called\n";
	_type = "Cat";
	_brain = new Brain();
}

Cat::Cat(const Cat &copy) : FixedAnimal(copy)
{
	std::cout << "Cat copy constructor called\n";
	_brain = new Brain();
	*this = copy;
}

Cat::~Cat()
{
	std::cout << "Cat default destructor called\n";
	delete _brain;
}

// GETTERS

std::string	Cat::getCatIdea(unsigned int index)const
{
	return (_brain->getIdea(index));
}

Brain*	Cat::getCatBrain()const
{
	return (_brain);
}


// SETTERS

void	Cat::setCatIdea(unsigned int index, std::string idea)
{
	_brain->setIdea(index, idea);
}

// OPERATORS

Cat&	Cat::operator=(const Cat &copy)
{
	std::cout << "Cat copy assignment operator called\n";

	delete _brain;
	_brain = new Brain(*(copy._brain));
	_type = copy._type;
	
	return (*this);
}

// MEMBER FUNCTIONS

void	Cat::makeSound()const
{
	std::cout << "MeeeeEEEEeeeEEeeOOooooOW!\n";
}

void	Cat::printCatIdeas(unsigned int limit)const
{
	_brain->printIdeas(limit);
}