#include "MateriaSource.hpp"

// CONSTRUCTORS & DESTRUCTORS

MateriaSource::MateriaSource()
{
	//std::cout << "MateriaSource default constructor called\n";
	for (int i = 0; i < 4; i++)
		_clones[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	//std::cout << "MateriaSource copy constructor called\n";
	*this = copy;
}

MateriaSource::~MateriaSource()
{
	//std::cout << "MateriaSource default destructor called\n";
	for (int i = 0; i < 4; i++)
	{
		if (_clones[i])
			delete _clones[i];
	}
}

// OPERATORS

MateriaSource&	MateriaSource::operator=(const MateriaSource &copy)
{
	//std::cout << "MateriaSource copy assignment operator called\n";
	for (int i = 0; i < 4; i++)
	{
		if(_clones[i])
			delete _clones[i];
		_clones[i] = NULL;
		if (copy._clones[i])
			_clones[i] = copy._clones[i]->clone();
	}
	return (*this);
}

// MEMBER FUNCTIONS

void	MateriaSource::learnMateria(AMateria* m)
{
	if (!m)
	{
		std::cout << "Materia Source > ! There is no Materia to be learnt !\n";
		return ;
	}

	int	i = 0;
	while (i < 4 && _clones[i])
		i++;
	if (i != 4)
	{
		_clones[i] = m;
		std::cout << "Materia Source > * Learnt \"" << m->getType() << "\" Materia *\n";
	}
	else
		std::cout << "Materia Source > ! There is no space to learn more Materias !\n";
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (type == _clones[i]->getType())
		{
			std::cout << "Materia Source > * Cloned \"" << type << "\" Materia *\n";
			return (_clones[i]->clone());
		}
	}
	std::cout << "Materia Source > ! No Materia of type \"" << type << "\" was learnt !\n";
	return (NULL);
}
