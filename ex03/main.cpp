#include "Character.hpp"
#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

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

void	test2()
{
	std::cout << "\n==========| TEST 2 |==========\n\n";

	MateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	MateriaSource* copy = new MateriaSource(*src);
	//MateriaSource* copy = new MateriaSource();
	//*copy = *src;
	copy->learnMateria(new Cure());

	std::cout << "\nsrc ("<< src <<") :\n";
	AMateria *t1 = src->createMateria("cure");

	std::cout << "\ncopy ("<< copy <<") :\n";
	AMateria *t2 = copy->createMateria("ice");

	delete src;
	std::cout << "\nDeleted src and still can use copy:\n";
	AMateria *t3 = copy->createMateria("ice");

	delete copy;
	delete t1;
	delete t2;
	delete t3;
}

int main()
{
	test1();
	test2();
}