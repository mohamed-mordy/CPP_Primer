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
	for (auto &w : words)
		for (auto &c : w)
			c = toupper(c);
	for (decltype(words.size()) i = 0, j = i; i < words.size(); ) {
		for (j = i; j < i+8 && j < words.size(); j++)
			cout << words[j] << " ";
		cout << endl;
		i = j;
	}
	return 0;
}
