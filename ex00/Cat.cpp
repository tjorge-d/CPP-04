#include "Cat.hpp"

// CONSTRUCTORS & DESTRUCTORS

Cat::Cat() : Animal()
{
	std::cout << "Cat default constructor called\n";
	_type = "Cat";
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	std::cout << "Cat copy constructor called\n";
	*this = copy;
}

Cat::~Cat()
{
	std::cout << "Cat default destructor called\n";
}

// OPERATORS

Cat&	Cat::operator=(const Cat &copy)
{
	std::cout << "Cat copy assignment operator called\n";
	_type = copy._type;
	return (*this);
}

// MEMBER FUNCTIONS

void	Cat::makeSound() const
{
	std::cout << "MeeeeEEEEeeeEEeeOOooooOW!\n";
}

