#include "FixedAnimal.hpp"

// CONSTRUCTORS & DESTRUCTORS

FixedAnimal::FixedAnimal() : _type("FixedAnimal")
{
	std::cout << "FixedAnimal default constructor called\n";
}

FixedAnimal::FixedAnimal(const FixedAnimal &copy)
{
	std::cout << "FixedAnimal copy constructor called\n";
	*this = copy;
}

FixedAnimal::~FixedAnimal()
{
	std::cout << "FixedAnimal default destructor called\n";
}

// GETTERS

std::string	FixedAnimal::getType() const
{
	return (_type);
}

// OPERATORS

FixedAnimal&	FixedAnimal::operator=(const FixedAnimal &copy)
{
	std::cout << "FixedAnimal copy assignment operator called\n";
	_type = copy._type;
	return (*this);
}