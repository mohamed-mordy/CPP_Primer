#include <iostream>
#include <vector>
#include <string>
#include <list>

using namespace std;

int main()
{
	vector<string> svec{"mohamed", "hassan", "ali", "naeem"};
	auto &svec_ref = svec;
	svec.insert(svec.begin(), "medo");
	for (auto elem : svec_ref)
		cout << elem << " ";
	cout << endl;
	return 0;
}

