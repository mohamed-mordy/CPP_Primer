#include <iostream>
#include <forward_list>

using namespace std;
void insert_after_string(forward_list<string> &sflist, string s1, string s2);

int main()
{
	forward_list<string> flist {"hassan", "ali", "john", "david", "zaid"};

	insert_after_string(flist, "hassan", "mohamed");
	for (auto elem : flist)
		cout << elem << " ";
	cout << endl;

	insert_after_string(flist, "brian", "mohamed");
	for (auto elem : flist)
		cout << elem << " ";
	cout << endl;

	return 0;
}

void insert_after_string(forward_list<string> &sflist, string s1, string s2)
{
	auto iter1 = sflist.begin();
	auto iter2 = sflist.end();
	auto prev = iter1;;
	while (iter1 != iter2) {
		if (s1 == *iter1) {
			sflist.insert_after(iter1, s2);
			return;
		}
		prev = iter1;
		++iter1;
	}
	iter1 = prev;
	sflist.insert_after(iter1, s2);
}
