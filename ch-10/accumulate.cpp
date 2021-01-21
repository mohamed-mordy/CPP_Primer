#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
	vector<double> ivec{1.5,2,3.1,3,4.7,5.9};
	cout << accumulate(ivec.cbegin(), ivec.cend(), 0) << endl;
	return 0;
}

