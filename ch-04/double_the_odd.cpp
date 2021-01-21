#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> ivec;
	for (auto i = 0; i < 10; i++)
		ivec.push_back(i);
	for (auto &i : ivec)
		i&1 ? i = 2*i : i = i;
	for (auto i : ivec)
		cout << i << " ";
	cout << endl;
	return 0;
}
