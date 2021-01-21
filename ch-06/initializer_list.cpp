#include <iostream>
#include <string>
#include <initializer_list>

using namespace std;
void print(initializer_list<string> lst);

int main()
{
	string s2 = "my";
	string s3 = " name";
	string s4 = " is";
	string s5 = " mohamed";
	string s6 = ".";
	print({s2, s3, s4, s5, s6});
	return 0;
}

void print(initializer_list<string> lst)
{
	for (auto s : lst)
		cout << s ;
	cout << endl;
}
