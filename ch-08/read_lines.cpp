#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void read_lines(const string &str, vector<string> & svec);
int main(int argc, char **argv)
{
	vector<string> svec;
	read_lines(argv[1], svec);
	for (auto s : svec)
		cout << s << endl;
	return 0;
}

void read_lines(const string &str, vector<string> & svec)
{
	ifstream input(str);
	if (input) {
		string line;
		while (getline(input, line))
			svec.push_back(line);
	}
	input.close();
}
