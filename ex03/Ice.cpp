#include "Ice.hpp"

// CONSTRUCTORS & DESTRUCTORS

Ice::Ice() : AMateria("ice")
{
	//std::cout << "Ice default constructor called\n";
}

Ice::Ice(const Ice &copy) : AMateria("ice")
{
	//std::cout << "Ice copy constructor called\n";
	*this = copy;
}

Ice::~Ice()
{
	//std::cout << "Ice default destructor called\n";
}

// OPERATORS

Ice&	Ice::operator=(const Ice &copy)
{
	//std::cout << "Ice copy assignment operator called\n";
	(void)copy;
	return (*this);
}

// MEMBER FUNCTIONS

Ice* Ice::clone() const
{
	Ice *newIce = new Ice(*this);
	return (newIce);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* Shoots an ice bolt at " << target.getName() << " *\n";
}

