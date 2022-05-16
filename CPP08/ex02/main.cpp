#include "MutantStack.hpp"

int	main()
{
	MutantStack<int>	mstack;

	mstack.push(7);	
	mstack.push(58);
	mstack.push(7917);

	std::cout << "Top of stack: " << mstack.top() << std::endl;
	std::cout << "Size of stack: " << mstack.size() << std::endl;

	mstack.pop();
	mstack.pop();

	std::cout << "Size of stack: " << mstack.size() << std::endl;

	mstack.push(655);
	mstack.push(552);
	mstack.push(37);

	std::cout << "Print stack: " << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	return 0;
}