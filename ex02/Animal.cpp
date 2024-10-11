#include "Animal.hpp"

// CONSTRUCTORS & DESTRUCTORS

Animal::Animal() : _type("Animal")
{
	std::cout << "Animal default constructor called\n";
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Animal copy constructor called\n";
	*this = copy;
}

Animal::~Animal()
{
	std::cout << "Animal default destructor called\n";
}

// GETTERS

std::string	Animal::getType() const
{
	return (_type);
}

// OPERATORS

Animal&	Animal::operator=(const Animal &copy)
{
	std::cout << "Animal copy assignment operator called\n";
	_type = copy._type;
	return (*this);
}

// MEMBER FUNCTIONS

void	Animal::makeSound() const
{
	std::cout << "A random and irrecognizable sound.\n";
}