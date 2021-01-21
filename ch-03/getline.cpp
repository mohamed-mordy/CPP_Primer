#include <iostream>
#include <string>

using namespace std;

int main()
{
	string line, str;
	while (getline(cin, str))
		line += str;
	for (auto c : line)
		cout << c;
	cout << endl;
	return 0;
}
