#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s1;
	getline(cin, s1);
	cout << "The length of input string is: " << s1.size() << endl;
	cout << "The input string itself is: " << s1 << endl;
	return 0;
}
