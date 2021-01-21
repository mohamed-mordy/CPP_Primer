#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<string> svec;
	string line;
	while (getline(cin, line))
		svec.push_back(line);
	while (svec.size() > 10)
		svec.pop_back();
	for (auto s : svec)
		cout << s << endl;
	cout << "the vector svec size = " << svec.size() << endl;
	return 0;
}
