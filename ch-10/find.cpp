#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> ivec {1, 2, 3, 4, 5, 6, 7};
	auto res = find(ivec.cbegin(), ivec.cend(), 7);
	cout << *res << endl;
	return 0;
}

