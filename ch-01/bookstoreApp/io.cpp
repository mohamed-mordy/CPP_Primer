#include <iostream>
#include "Sales_item.h"

int main()
{
	// reading and writing a transaction
	Sales_item book;
	std::cout << "Enter a transaction:" << std::endl;
	// read: ISBN, number of copies sold, and sales price
	std::cin >> book;
	std::cout << "The entered transaction is:"  << std::endl;
	// write: ISBN, number of copies sold, total revenue, and average price
	std::cout << book << std::endl;
	return 0;
}
