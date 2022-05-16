#include "Replace.hpp"

int main(int argc, char **argv)
{
	setlocale (LC_ALL, "Russian");
	if (argc != 4)
	{
		std::cout << "The wrong number of arguments." << std::endl;
		return 1;
	}
	Replace a;
	a.openAndReplace(argv[1], argv[2], argv[3]);
	return 0;
}