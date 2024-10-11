#include "Cure.hpp"

// CONSTRUCTORS & DESTRUCTORS

Cure::Cure() : AMateria("cure")
{
	//std::cout << "Cure default constructor called\n";
}

Cure::Cure(const Cure &copy) : AMateria("cure")
{
	//std::cout << "Cure copy constructor called\n";
	*this = copy;
}

Cure::~Cure()
{
	//std::cout << "Cure default destructor called\n";
}

// OPERATORS

Cure&	Cure::operator=(const Cure &copy)
{
	//std::cout << "Cure copy assignment operator called\n";
	(void)copy;
	return (*this);
}

// MEMBER FUNCTIONS

Cure* Cure::clone() const
{
	Cure *newCure = new Cure(*this);
	return (newCure);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* Heals " << target.getName() << "'s wounds *\n";
}

