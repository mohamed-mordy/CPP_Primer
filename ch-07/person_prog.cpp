#include <iostream>
#include <vector>
#include "Person.h"

using namespace std;

int main()
{
	vector<Person> pvec;
	Person man;
	while (read(cin, man))
		pvec.push_back(man);
	for (auto p : pvec)
		print(cout, p) << endl;
	return 0;
}

