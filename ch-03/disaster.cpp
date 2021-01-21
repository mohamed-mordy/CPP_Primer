#include <iostream>

using namespace std;

int main()
{
	const char ca[5] = {'h', 'e', 'l', 'l', 'o'};
	const char *cp = ca;
	while (*cp) {
		cout << *cp << endl;
		++cp;
	}	
	return 0;
}
