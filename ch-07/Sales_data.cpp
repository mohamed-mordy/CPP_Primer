#include "Sales_data.h"
#include <iostream>

using namespace std;

Sales_data::Sales_data(std::istream &is) {
	read(is, *this);
}

Sales_data & Sales_data::combine(const Sales_data &rhs) {
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}

istream &read(istream &is, Sales_data &item)
{
	double price = 0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = price * item.units_sold;
	return is;
}

ostream &print(ostream &os, const Sales_data &item)
{
	os << item.bookNo << " " << item.units_sold << " " <<
	item.revenue << " " << item.avg_price();
	return os;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
	Sales_data total = lhs;
	total.combine(rhs);
	return total;
}

