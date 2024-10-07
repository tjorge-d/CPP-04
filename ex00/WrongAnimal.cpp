#include "WrongAnimal.hpp"

// CONSTRUCTORS & DESTRUCTORS

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
	std::cout << "WrongAnimal default constructor called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << "WrongAnimal copy constructor called\n";
	*this = copy;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal default destructor called\n";
}

// GETTERS

std::string	WrongAnimal::getType() const
{
	return (_type);
}

// OPERATORS

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal &copy)
{
	std::cout << "WrongAnimal copy assignment operator called\n";
	_type = copy._type;
	return (*this);
}

// MEMBER FUNCTIONS

void	WrongAnimal::makeSound() const
{
	std::cout << "A scary and alien-like sound.\n";
}