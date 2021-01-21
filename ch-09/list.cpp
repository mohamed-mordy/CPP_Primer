#include <iostream>
#include <list>
#include <string>

using namespace std;

int main()
{

	list<string> data;
	string line;
	while (getline(cin, line))
		data.emplace_back(line);
	for (auto iter1 = data.cbegin(), iter2 = data.cend(); iter1 != iter2; ++iter1 )
		cout << *iter1 << endl;
	return 0;
}
