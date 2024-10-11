#include "Dog.hpp"

// CONSTRUCTORS & DESTRUCTORS

Dog::Dog() : FixedAnimal()
{
	std::cout << "Dog default constructor called\n";
	_type = "Dog";
	_brain = new Brain();
}

Dog::Dog(const Dog &copy) : FixedAnimal(copy)
{
	std::cout << "Dog copy constructor called\n";
	_brain = new Brain();
	*this = copy;
}

Dog::~Dog()
{
	std::cout << "Dog default destructor called\n";
	delete _brain;
}

// GETTERS

std::string	Dog::getDogIdea(unsigned int index)const
{
	return (_brain->getIdea(index));
}

// SETTERS

void	Dog::setDogIdea(unsigned int index, std::string idea)
{
	_brain->setIdea(index, idea);
}

Brain*	Dog::getDogBrain()const
{
	return (_brain);
}

// OPERATORS

Dog&	Dog::operator=(const Dog &copy)
{
	std::cout << "Dog copy assignment operator called\n";
	
	delete _brain;
	_brain = new Brain(*(copy._brain));
	_type = copy._type;
	
	return (*this);
}

// MEMBER FUNCTIONS

void	Dog::makeSound() const
{
	std::cout << "WOOOOF WOOFF WOOOOOOOOF...\n";
}

void	Dog::printDogIdeas(unsigned int limit)const
{
	_brain->printIdeas(limit);
}
