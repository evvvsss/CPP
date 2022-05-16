#include <iostream>

int main (int argc, char **argv)
{
	char ch;
	int 	i;
	int 	j;

	i = 0;
	j = 0;
	ch = 0;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		i++;
		while (i < argc)
		{
			j = 0;
			while (argv[i][j])
			{
				if (argv[i][j] >= 97 && argv[i][j] <= 122)
				{
					ch = argv[i][j] - 32;
					std::cout << ch;
				}
				else
					std::cout << argv[i][j];
				j++;
			}
			i++;
			if (i == argc)
				std::cout << "\n";
		}
	}
}