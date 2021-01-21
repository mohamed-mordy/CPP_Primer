#include <iostream>
#include <vector>
#include <string>
#include <list>

using namespace std;

int main()
{
	vector<string> svec;
	svec.push_back("mohamed");
	for (auto elem : svec)
		cout << "from first loop " << elem << endl;
	//
	string name = " moawed";
	svec.emplace_back(name);
	for (auto elem : svec)
		cout << "from second loop " <<  elem << endl;
	cout << "string name = " << name << endl;
	// now just return
	return 0;
}
