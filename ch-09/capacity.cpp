#include <iostream>
#include <vector>
#include <string>
#include <list>

using namespace std;

int main()
{
	vector<int> ivec;
	for (auto i = 0; i < 100; i++)
		ivec.push_back(i);
	cout << "ivec : size :" << ivec.size() << endl <<
		"ivec : capacity :" << ivec.capacity() << endl;
	ivec.reserve(10000);
	cout << "after calleng reserve()" << endl;
	cout << "ivec : size :" << ivec.size() << endl <<
		"ivec : capacity :" << ivec.capacity() << endl;
	ivec.shrink_to_fit();
	cout << "after calleng shrink_to_fit()" << endl;
	cout << "ivec : size :" << ivec.size() << endl <<
		"ivec : capacity :" << ivec.capacity() << endl;
	return 0;
}
