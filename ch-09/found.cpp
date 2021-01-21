#include <iostream>
#include <vector>

using namespace std;

bool found(vector<int>::iterator, vector<int>::iterator, int);

int main()
{
	vector<int> ivec {1, 2, 3, 4, 5};
	if (found(ivec.begin(),ivec.end(), 3))
		cout << "found" << endl;
	else
		cout << "not found" << endl;
	return 0;
}

bool found(vector<int>::iterator beg, vector<int>::iterator end, int i)
{
	while (beg != end) {
		if ((*beg) == i)
			return true;
		++beg;
	}
	return false;
}
