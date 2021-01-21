#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <iostream>

class Sales_data {
	friend Sales_data add(const Sales_data &, const Sales_data &);
	friend std::ostream &print(std::ostream &, const Sales_data &);
	friend std::istream &read(std::istream &, Sales_data &);
	public:
	// constructors
	Sales_data() = default;
	Sales_data(const std::string &s): bookNo(s) {}
	Sales_data(const std::string &s, unsigned n, double p):
			   bookNo(s), units_sold(n), revenue(p * n) {}
	Sales_data(std::istream &);
	// operations on Sales_data objects
	std::string isbn() const { return bookNo; }
	Sales_data &combine(const Sales_data &);
	private:
	inline double avg_price() const;
	// data members
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

inline double Sales_data::avg_price() const {
	if (units_sold)
		return revenue / units_sold;
	else
		return 0;
}

// nonmember Sales_data interface functions
Sales_data add(const Sales_data &, const Sales_data &);
std::ostream &print(std::ostream &, const Sales_data &);
std::istream &read(std::istream &, Sales_data &);

#endif
