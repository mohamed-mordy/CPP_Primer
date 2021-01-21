#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<string> svec {"a", "b", "b", "d", "e", "f","g", "h"};
	string sought = "c";
	auto beg = svec.begin(), end = svec.end();
	auto mid = beg + (end - beg) / 2;
	while (mid != end && *mid != sought) {
		if (sought < *mid)
			end = mid;
		else
			beg = mid + 1;
		mid = beg + (end - beg) / 2;
	}
	if (*mid == sought)
		cout << "sought is: " << *mid << endl;
	else
		cout << "No such element exists" << endl;
	return 0;
}
