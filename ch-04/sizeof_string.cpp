#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string s = "hhello worldhello worldhello worldhello worldhello worldhello worldello world";
	cout << "sizeof (s) = " << sizeof (s) << endl;
	cout << "sizeof (string) = " << sizeof (string) << endl;
	cout << "sizeof (vector<string>) = " << sizeof (vector<string>) << endl;
	cout << "sizeof (vector<int>) = " << sizeof (vector<int>) << endl;
	return 0;
}
