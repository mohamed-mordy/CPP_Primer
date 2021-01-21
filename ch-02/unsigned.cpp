#include <iostream>

int main()
{
	int i = -42;
	unsigned u = 10;
	std::cout << "int i = -42; unsigned u = 10;" << std::endl;
	std::cout << "i + i = " << i + i << std::endl;
	std::cout << "i + u = " << i + u << std::endl;
	unsigned u1 = 10, u2 = 42;
	std::cout << "unsigned u1 = 10, u2 = 42" << std::endl;
	std::cout << "u2 - u1 = " << u2 - u1 << std::endl; 
	std::cout << "u1 - u2 = " << u1 - u2 << std::endl;
	i = 10;
	std::cout << "i = 10" << std::endl;
	std::cout << "i - u1 = " << i - u1 << std::endl;
	return 0;
}
