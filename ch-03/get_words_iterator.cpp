#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

int main()
{
	vector<string> words;
	string word;
	while (cin >> word)
		words.push_back(word);
	for (auto  it = words.begin(); it != words.end(); it++)
		cout << *it << endl;
	return 0;
}
