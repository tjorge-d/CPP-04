#include "WrongCat.hpp"

// CONSTRUCTORS & DESTRUCTORS

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "WrongCat default constructor called\n";
	_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy)
{
	std::cout << "WrongCat copy constructor called\n";
	*this = copy;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat default destructor called\n";
}

// OPERATORS

WrongCat&	WrongCat::operator=(const WrongCat &copy)
{
	std::cout << "WrongCat copy assignment operator called\n";
	_type = copy._type;
	return (*this);
}

// MEMBER FUNCTIONS

void	WrongCat::makeSound() const
{
	std::cout << "Mee  eeEE   EEeee  EEe eOOo ooo OW!\n";
}

