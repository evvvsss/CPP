#include "Convert.hpp"

int main(int argc, char**argv)
{
	if (argc != 2)
		std::cerr << "Wrong number of aruments" << std::endl;
	else
	{
		Convert nmbr(argv[1]);
		nmbr.isChar();
		nmbr.isInt();
		nmbr.isFloat();
		nmbr.isDouble();
	}
	return 0;
}