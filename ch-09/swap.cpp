#include <iostream>
#include <vector>
#include <string>
#include <list>

using namespace std;

int main()
{
	int i = 5, j = 10;
	cout << "i = " << i << "  " << "j = " << j << endl;
	swap(i, j);
	cout << "i = " << i << "  " << "j = " << j << endl;
	// now just return
	return 0;
}
