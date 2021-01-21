#include <iostream>
#include <vector>
#include <string>

using namespace std;

void funny(int (&arr)[10])
{
	for (auto i : arr)
		cout << i << " " ;
	cout << endl;
}

int main()
{
	int iarr[10];
	for (auto &i : iarr) {
		static int j = 0;
		i = j++;
	}
	funny(iarr);
	return 0;
}
