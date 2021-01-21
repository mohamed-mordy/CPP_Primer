#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> ivec{1,2,2,3,4,5,6,6};
	for (auto elem : ivec)
		cout << elem << " ";
	cout << endl;
	fill(ivec.begin(), ivec.end(), 0);
	for (auto elem : ivec)
		cout << elem << " ";
	cout << endl;
	return 0;
}

