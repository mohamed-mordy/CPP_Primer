#include <iostream>
#include <vector>
#include <string>
#include <list>

using namespace std;

int main()
{
	vector<int> ivec {1, 2, 3,4};
	ivec.erase(ivec.begin(), ivec.begin()); // won't erase anything
	for (auto elem : ivec)
		cout << elem << endl;
	// now just return
	return 0;
}
