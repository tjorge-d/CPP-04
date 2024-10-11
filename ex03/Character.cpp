#include "Character.hpp"

// CONSTRUCTORS & DESTRUCTORS

Character::Character() : _name("Joe")
{
	//std::cout << "Character default constructor called\n";
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(std::string name) : _name(name)
{
	//std::cout << "Character name constructor called (" << _name << ")\n";
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(const Character &copy)
{
	//std::cout << "Character copy constructor called\n";
	*this = copy;
}

Character::~Character()
{
	//std::cout << "Character default destructor called\n";
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
	}
}

// GETTERS

std::string const & Character::getName() const
{
	return (_name);
}

// SETTERS

void	Character::setName(std::string name)
{
	_name = name;
}

// OPERATORS

Character&	Character::operator=(const Character &copy)
{
	std::cout << "Character copy assignment operator called\n";
	_name = copy._name;
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
		_inventory[i] = NULL;
		if (copy._inventory[i])
			_inventory[i] = copy._inventory[i]->clone();
	}
	return (*this);
}

// MEMBER FUNCTIONS

bool	Character::_checkInvSize(int idx)
{
	if (idx > 3)
	{
		std::cout << _name << \
		" > ! There is only 4 Inventory slots !\n";
		return (false);
	}
	if (idx < 0)
	{
		std::cout << _name << \
		" > ! The pockets don't seem to go any deeper !\n";
		return (false);
	}
	return (true);
}

bool	Character::_checkInvSlot(int idx)
{
	if (idx < 0 || idx > 4)
		return (false);
	if (!_inventory[idx])
	{
		std::cout << _name << \
		 " > ! There is no Materia equiped in the slot " << idx << " !\n";
		return (false);
	}
	return (true);
}

bool	Character::_checkMateria(AMateria* m)
{
	if (!m)
	{
		std::cout << _name << \
		 " > ! There is no Materia !\n";
		return (false);
	}
	return (true);
}

void Character::equip(AMateria* m)
{
	if (!_checkMateria(m))
		return ;

	int	i = 0;
	while (i < 4 && _inventory[i])
		i++;
	if (i != 4)
	{
		_inventory[i] = m;
		std::cout << _name << \
		" > * Added \"" << m->getType() << "\" Materia to the Inventory slot " << i << " *\n";
	}
	else
		std::cout << _name << "> ! No space on Inventory !\n";
}

void Character::unequip(int idx)
{
	if (!_checkInvSize(idx) || !_checkInvSlot(idx))
		return ;

	std::cout << _name << \
	" > * Removed \"" << _inventory[idx]->getType() << \
	"\" Materia from the Inventory slot " << idx << "*\n";
	_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (!_checkInvSize(idx) || !_checkInvSlot(idx))
		return ;

	std::cout << _name << " > ";
	_inventory[idx]->use(target);
}

