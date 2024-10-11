#include "Character.hpp"
#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

void	test2()
{
	std::cout << "\n==========| TEST 2 |==========\n\n";

	IMateriaSource* src = new MateriaSource();
}

void	test1()
{
	std::cout << "\n==========| TEST 1 |==========\n\n";

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");	
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
}

int main()
{
	test1();
}