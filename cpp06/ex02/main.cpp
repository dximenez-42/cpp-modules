#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <iostream>

Base*	generate()
{
	srand(time(0));
	int	num = rand() % 3;

	switch (num)
	{
		case 0:
			return new A();
		case 1:
			return new B();
		case 2:
			return new C();
	}
	return NULL;
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p))
	{
		std::cout << "Pointer type is\t\tA" << std::endl;
		return;
	}
	if (dynamic_cast<B*>(p))
	{
		std::cout << "Pointer type is\t\tB" << std::endl;
		return;
	}
	if (dynamic_cast<C*>(p))
	{
		std::cout << "Pointer type is\t\tC" << std::endl;
		return;
	}
	std::cout << "Pointer type is invalid" << std::endl;
}

void	identify(Base& p)
{
	try
	{
		A& a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "Reference type is\tA" << std::endl;
	}
	catch(const std::exception& e)
	{
		try
		{
			B& b = dynamic_cast<B&>(p);
			(void)b;
			std::cout << "Reference type is\tB" << std::endl;
		}
		catch(const std::exception& e)
		{
			try
			{
				C& c = dynamic_cast<C&>(p);
				(void)c;
				std::cout << "Reference type is\tC" << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cout << "Reference type is invalid" << std::endl;
			}
		}
	}
}

int	main()
{
	Base* base;

	base = generate();

	identify(base);
	identify(*base);

	delete(base);
}