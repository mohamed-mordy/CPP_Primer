#include <iostream>

void a();
int i;

int main()
{
	i++;
	a();
}


void a()
{
	std::cout << "Calling main from another function !!" << i << std::endl;
	main();
}

