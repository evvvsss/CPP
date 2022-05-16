#include "Span.hpp"

int	main()
{
	Span sp = Span(5);


	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(9);
	sp.addNumber(17);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;



	try
	{
		Span spShort = Span(1);
		spShort.addNumber(34);
		spShort.addNumber(4);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
}