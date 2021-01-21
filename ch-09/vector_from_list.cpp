#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main(void)
{
	vector<int> ivec {1, 2, 3,4,5};
	list<double> dlist(ivec.begin(), ivec.end());
	for (auto elem : dlist)
		cout << elem << " ";
	cout << endl;
	return 0;
}
