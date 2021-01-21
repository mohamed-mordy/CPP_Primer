#include <iostream>
#include <vector>
#include <string>

using namespace std;
int fn(int, int);

int main()
{
	vector<decltype(fn) *> fvec;
	// or:
	vector<int(*)(int, int)> fvec2;
	return 0;
}
