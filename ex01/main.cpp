#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

void	test1()
{
	std::cout << "\n==========| TEST 1 |==========\n\n";

	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const Dog doggo;

	delete j;
	delete i;
}

void	test2()
{
	std::cout << "\n==========| TEST 2 |==========\n\n";

	std::cout << "Construction:\n";
	Animal	*veterinary[]= 
	{
		new Cat(),
		new Cat(),
		new Cat(),
		new Dog(),
		new Dog(),
		new Dog()
	};

	std::cout << "\nDestruction:\n";
	for (int i = 0; i < 6; i++)
		delete veterinary[i];
}

void	test3()
{
	std::cout << "\n==========| TEST 3 |==========\n\n";

	Cat	*Patareco = new Cat();

	std::cout << "\nPatareco:\n";
	Patareco->printCatIdeas(4);

	std::cout << std::endl;
	Patareco->setCatIdea(2, "Scratch my back!");
	Cat	*copy_cat = new Cat();
	copy_cat->setCatIdea(3, "A laser dot!");
	*copy_cat = *Patareco;
	Patareco->setCatIdea(1, "Scratch my back!");
	copy_cat->setCatIdea(0, "A laser dot!");

	std::cout << "\nPatareco: (" << Patareco->getCatBrain() << ")\n";
	Patareco->printCatIdeas(4);

	std::cout << "\ncopy_cat: (" << copy_cat->getCatBrain() << ")\n";
	copy_cat->printCatIdeas(4);

	std::cout << std::endl;
	delete Patareco;
	delete copy_cat;
}

int main()
{
	test1();
	test2();
	test3();
	return 0;
}