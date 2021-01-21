#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> ivec {1,2,2,2,2,2,3,8,2,3,3,6,4};
	cout << count(ivec.cbegin(), ivec.cend(), 3) << endl;
	return 0;
}

