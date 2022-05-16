#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"


int main()
{
	int n;
	int i = 0;

	std::cout << "Input number of animals:" << std::endl;
	std::cin >> n;
	Animal *animals[n];

	while (i < n)
	{
		if (i < n / 2)
			animals[i] = new Dog();
		else 
			animals[i] = new Cat();
		i++;		
	}

	for (int j = 0; j < n; j++)
	{
		std::cout << j + 1 << "	Type: " << animals[j]->getType() << " ";
		animals[j]->makeSound();
	}

	std::cout << "\n**** DESTROYING ANIMALS ****\n\n";
	for (int j = 0; j < n; j++)
		delete animals[j++];

	std::cout << "\n**** COPY ANIMALS ****\n\n";
	Dog d = Dog();
	Dog d2 = d;
	std::cout << "\nType of d: " << d.getType() << "  ";
	d.makeSound();
	d.getIdea(28);
	std::cout << "Type of d2: " << d2.getType() << " ";
	d2.makeSound();
	d2.getIdea(53);

	std::cout << "\n**** MAIN FROM SUBJECT ****\n\n";
	const Animal* j1 = new Dog();
	const Animal* i1 = new Cat();
	std::cout << "\n**** CLEANING ****\n\n";
	delete j1;
	delete i1;

	return 0;
}