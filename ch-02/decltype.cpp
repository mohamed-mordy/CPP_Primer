#include <iostream>

int main()
{
	int a = 3, b = 4;
	decltype(a) c = a;
	decltype(a = b) d = a;
	std::cout << a << std::endl;
	++c;
	++d;
	std::cout << a << std::endl;
	return 0;
}
