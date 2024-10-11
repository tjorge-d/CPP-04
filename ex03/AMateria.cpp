#include "AMateria.hpp"

// CONSTRUCTORS & DESTRUCTORS

AMateria::AMateria() : _type("useless")
{
	//std::cout << "AMateria default constructor called\n";
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	//std::cout << "AMateria Type constructor called\n";
}

AMateria::AMateria(const AMateria &copy)
{
	//std::cout << "AMateria copy constructor called\n";
	*this = copy;
}

AMateria::~AMateria()
{
	//std::cout << "AMateria default destructor called\n";
}

// GETTERS

std::string const & AMateria::getType() const
{
	return (_type);
}

// SETTERS

void	AMateria::setType(std::string type)
{
	_type = type;
}

// OPERATORS

AMateria&	AMateria::operator=(const AMateria &copy)
{
	std::cout << "AMateria copy assignment operator called\n";
	(void)copy;
	return (*this);
}

// MEMBER FUNCTIONS

void AMateria::use(ICharacter& target)
{
	std::cout << "* Nothing relevant happens to " << target.getName() << " *\n";
}
