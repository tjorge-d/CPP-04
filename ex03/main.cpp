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
	std::cout << "\n==========| TEST 2 |==========\n";

	std::cout << "\nMateriaSource :\n\n";
	MateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	MateriaSource* copy = new MateriaSource(*src);
	//MateriaSource* copy = new MateriaSource();
	//*copy = *src;
	copy->learnMateria(new Cure());

	std::cout << "\nsrc ("<< src <<") :\n";
	AMateria *m1 = src->createMateria("cure");

	std::cout << "\ncopy ("<< copy <<") :\n";
	AMateria *m2 = copy->createMateria("ice");

	delete src;
	std::cout << "\nDeleted src and still can use copy:\n";
	AMateria *m3 = copy->createMateria("ice");

	std::cout << "\nEvery materia has diferent addresses:\n";
	std::cout << "m1 (" << m1 << ")\n";
	std::cout << "m2 (" << m2 << ")\n";
	std::cout << "m3 (" << m3 << ")\n";
	delete copy;

	std::cout << "\nCharacters (using AMaterias from above) :\n\n";
	Character* alvares = new Character("Alvares");
	Character* cabral = new Character("Cabral");
	Cure* cure = new Cure();

	alvares->equip(m2);
	alvares->equip(cure);
	cabral->equip(m3);

	*cabral = *alvares;

	cabral->use(0, *alvares);
	cabral->use(1, *alvares);

	std::cout << "\nCabral now has Alvares name and AMaterias but they use different addresses:\n";
	std::cout << "Alvares (" << alvares << ")\n";
	std::cout << "Cabral (" << cabral << ")\n";

	delete alvares;
	delete cabral;

	std::cout << "This test wont have leaks even tho we didn't delete m3\n" <<\
		"This is because when using the = operator on cabral everything he had was deleted\n";
}

void	test3()
{
	std::cout << "\n==========| TEST 3 |==========\n";
	Character* diogo = new Character("Diogo");
	Character* cao = new Character("Cao");
	Ice *ice1 = new Ice();
	Ice *ice2 = new Ice();
	Cure *cure1 = new Cure();
	Cure *cure2 = new Cure();
	Cure *cure3 = new Cure();

	diogo->equip(ice1);
	diogo->equip(ice2);
	diogo->equip(cure1);
	diogo->equip(cure2);
	diogo->equip(cure3);
	diogo->unequip(1);
	diogo->unequip(3);

	cao->use(0, *diogo);
	cao->equip(ice2);
	cao->equip(cure2);
	cao->use(0, *diogo);
	(void)cao;

	delete diogo;
	delete cao;
	delete cure3;
}

int main()
{
	test1();
	test2();
	test3();
}