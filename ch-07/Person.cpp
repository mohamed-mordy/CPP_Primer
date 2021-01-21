#include <iostream>
#include "Person.h"

using namespace std;

Person::Person(istream &is) {
	read(is, *this);
}

istream &read(istream &is, Person &human)
{
	is >> human.name >> human.address ;
	return is;
}

ostream &print(ostream &os, const Person &human)
{
	os << human.name << " " << human.address;
	return os;
}

