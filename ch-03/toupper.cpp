#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
	const string s("Hello World!!!");
	for (auto &c : s)
		cout << c;
	return 0;
}
