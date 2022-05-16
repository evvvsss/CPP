#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <time.h>
#include <unistd.h>

Base * generate(void)
{
	usleep(rand() % 987654);
	srand(time(NULL));
	int num = rand() % 3;

	switch (num)
	{
	case 0:
		return new A;

	case 1:
		return new B;

	case 2:
		return new C;
	}
	return NULL;
}

/* Оператор dynamic_cast гарантирует преобразование указателя на базовый класс в указатель на производный класс или преобразование lvalue,
ссылающегося на базовый класс, в ссылку на производный класс.*/

void identify(Base* p)
{
	A *a;
	if ((a = dynamic_cast<A *>(p))) {

		std::cout << "A" << std::endl;
		return ;
	}

	B *b;
	if ((b = dynamic_cast<B *>(p))) {

		std::cout << "B" << std::endl;
		return ;
	}

	C *c;
	if ((c = dynamic_cast<C *>(p))) {

		std::cout << "C" << std::endl;
		return ;
	}
}

void identify(Base& p)
{
	try {

		A &a = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
		(void)a;
	}
	catch(const std::exception& e) {
		try {

			B &b = dynamic_cast<B &>(p);
			std::cout << "B" << std::endl;
			(void)b;
		}
		catch(const std::exception& e) {
			try {

				C &c = dynamic_cast<C &>(p);
				std::cout << "C" << std::endl;
				(void)c;
			}
			catch(const std::exception& e) {
				std::cerr << "incorrect class" << std::endl;
			}
		}
	}
}

int main()
{
	Base *ptr;

	ptr = generate();
	identify(ptr);
	delete ptr;

	Base *p;

	p = generate();
	identify(*p);
	delete p;

}