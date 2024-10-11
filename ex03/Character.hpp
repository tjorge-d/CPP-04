#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <stdio.h>
# include <iostream>
# include <string.h>
# include <fstream>
# include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		// ATTRIBUTES
		std::string		_name;
		AMateria		*_inventory[4];

		// MEMBER FUNCTIONS
		bool	_checkInvSize(int idx);
		bool	_checkInvSlot(int idx);
		bool	_checkMateria(AMateria* m);

	public:
		// CONSTRUCTORS/DESTRUCTORS
		Character();
		Character(std::string name);
		Character(const Character &a);
		~Character();

		// GETTERS
		std::string const & getName() const;

		// SETTERS
		void	setName(std::string name);

		// OPERATORS
		Character&	operator=(const Character &copy);

		// MEMBER FUNCTIONS
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif