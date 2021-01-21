#ifndef SALES_DATA_INCLUDED
#define SALES_DATA_INCLUDED

#include <string>

struct Sales_data {
	std::string bookNo;
	unsigned Units_sold = 0;
	double revenue = 0.0;
};

#endif
