#include <iostream>
#include <string>

using namespace std;

int main()
{
	double d = 2.2;
	string str = to_string(d);
	double dd = stod(str);
	cout << d << endl;
	cout << str << endl;
	cout << dd << endl;
	string bin ("011010101000101010101");
	int i = stoi(bin, 0, 2);
	cout << bin << endl;
	cout << i << endl;
	return 0;
}
