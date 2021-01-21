#include <iostream>
#include <vector>
#include <string>

using namespace std;
inline string &shorter_string(string &s1, string &s2)
{
	return (s1.size() < s2.size()) ? s1 : s2;
}

int main()
{
	string s1 = "this is short";
	string s2 = "thiiiiiiiiiis iiiiiis nooooooot shooooooooort";
	cout << shorter_string(s1, s2) << endl;
	return 0;
}
