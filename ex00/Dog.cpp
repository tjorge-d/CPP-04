#include "Dog.hpp"

// CONSTRUCTORS & DESTRUCTORS

Dog::Dog() : Animal()
{
	std::cout << "Dog default constructor called\n";
	_type = "Dog";
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	std::cout << "Dog copy constructor called\n";
	*this = copy;
}

Dog::~Dog()
{
	std::cout << "Dog default destructor called\n";
}

// OPERATORS

Dog&	Dog::operator=(const Dog &copy)
{
	std::cout << "Dog copy assignment operator called\n";
	_type = copy._type;
	return (*this);
}

// MEMBER FUNCTIONS

void	Dog::makeSound() const
{
	std::cout << "WOOOOF WOOFF WOOOOOOOOF...\n";
}
