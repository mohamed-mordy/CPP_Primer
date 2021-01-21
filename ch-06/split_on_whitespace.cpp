#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	string s = "split on    whitespace   "; 
	istringstream iss(s); 
	vector<string> result; 
	for(string s; iss >> s; ) 
		result.push_back(s); 
	for (auto s: result)
		cout << s << endl;
	return 0;
}
