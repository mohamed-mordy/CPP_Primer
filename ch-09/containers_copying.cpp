#include <iostream>
#include <vector>
#include <string>
#include <list>

using namespace std;

int main()
{
	list<string> names {"ali", "hassan", "mahmoud"};
	vector<const char *> articles {"a", "an", "the"};

	list<string> authors(names);
	cout << "authors as copy of names" << endl;
	for (auto s : authors)
		cout << s << endl;

	vector<string> names2(names.begin(), names.end());
	cout << "names2 as copy of names" << endl;
	for (auto s : names2)
		cout << s << endl;

	vector<string> words(articles.begin(), articles.end());
	cout << "words as converted copy of articles" << endl;
	for (auto w : words)
		cout << w << endl;
	return 0;
}
