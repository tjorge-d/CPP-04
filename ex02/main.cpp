#include "FixedAnimal.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

void	test1()
{
	std::cout << "\n==========| TEST 1 |==========\n\n";

	const FixedAnimal* j = new Dog();
	const FixedAnimal* i = new Cat();

	delete j;
	delete i;
}

void	test2()
{
	std::cout << "\n==========| TEST 2 |==========\n\n";

	std::cout << "Construction:\n";
	FixedAnimal	*veterinary[]= 
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
	Patareco->setCatIdea(1, "Scratch my back!");
	Patareco->setCatIdea(2, "Scratch my back!");
	Patareco->setCatIdea(3, "Scratch my back!");
	Cat	*copy_cat = new Cat(*Patareco);
	//Cat	*copy_cat = new Cat();
	//*copy_cat = *Patareco;
	Patareco->setCatIdea(1, "What a confortable box to sleep in...");
	copy_cat->setCatIdea(0, "Fur ball!");

	std::cout << "\nPatareco: (" << Patareco->getCatBrain() << ")\n";
	Patareco->printCatIdeas(4);
	std::cout << "\ncopy_cat: (" << copy_cat->getCatBrain() << ")\n";
	copy_cat->printCatIdeas(4);

	std::cout << std::endl;
	
	delete Patareco;
	delete copy_cat;
}

void	test4()
{
	std::cout << "\n==========| TEST 4 |==========\n\n";

	// FixedAnimal	*ChupaCabra = new FixedAnimal();
	Animal		*Gambuzino = new Animal();
	FixedAnimal	*ChupaCabra = new Cat();

	std::cout << std::endl;
	Gambuzino->makeSound();
	ChupaCabra->makeSound();
	std::cout << std::endl;
	
	delete Gambuzino;
	delete ChupaCabra;
}

int main()
{
	test1();
	test2();
	test3();
	test4();
	return 0;
}