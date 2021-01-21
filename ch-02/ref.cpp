#include <iostream>

int main()
{
	//int* ip, &r = ip; // error
	double dval = 5.3;
	const int &refi = dval;
	std::cout << refi << std::endl;

	int i, &ri = i;
	i = 5; ri = 10;
	std::cout << i << " " << ri << std::endl;
}
