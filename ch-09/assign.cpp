#include <iostream>
#include <vector>
#include <string>
#include <list>

using namespace std;

int main()
{
	list<string> names;
	vector<const char *> vec_names = {"ali", "hassan", "mohamed"};
	//
	names.assign(vec_names.cbegin(), vec_names.cend());
	for (auto elem : names)
		cout << elem << " ";
	cout << endl;
	//
	names.assign(10, "Mohamed");
	for (auto elem : names)
		cout << elem << " ";
	cout << endl;
	//
	return 0;
}
