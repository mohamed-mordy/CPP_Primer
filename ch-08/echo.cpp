#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

istream &echo(istream &is);
int main()
{
	
	echo(cin);
	return 0;
}

istream &echo(istream &is)
{
	string word;
	while (getline(is, word))
		cout << word << endl;
	is.clear();
	return is;
}
