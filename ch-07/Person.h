#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

class Person {
	friend std::istream & read(std::istream &is, Person &human);
	friend std::ostream & print(std::ostream &os, const Person &human);
	public:
	// constructors
	Person() = default;
	Person(const std::string &nm, const std::string &adr): name(nm), address(adr) {} 
	Person(std::istream &);
	// object member functions
	std::string get_name() const { return name; }
	std::string get_address() const { return address; }
	private:
	// object members
	std::string name;
	std::string address;
};

std::istream & read(std::istream &is, Person &human);
std::ostream & print(std::ostream &os, const Person &human);

#endif
