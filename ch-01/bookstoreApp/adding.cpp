#include <iostream>
#include "Sales_item.h"


int main()
{
	Sales_item sum, val;
	if (std::cin >> val)
		sum = val;
	while (std::cin >> val)
		if (sum.isbn() == val.isbn()) {
			sum += val;
		} else {
			std::cout << "Error: data must refer to same ISBN" << std::endl;
			return -1;
		}
	std::cout << "The sum of input transactions is: " << sum << std::endl;
	return 0;
}
