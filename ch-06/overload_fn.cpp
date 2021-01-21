#include <iostream>
#include <vector>
#include <string>

using namespace std;
void print(int i)
{
	cout << "This is int: " << i << endl;
}
void print(double j)
{
	cout << "This is double: " << j << endl;
}
void print(const string s)
{
	cout << "This is string: " << s << endl;
}

int main()
{
	print(4);
	print(3.1);
	print("This is Moo");
	return 0;
}
