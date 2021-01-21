#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	deque<string> cstr_deq{"ali", "mohamed"};
	vector<const char *> cstr_vec{"ali", "hassan", "mohamed"};
	list<const char *> cstr_lst{"ali", "hassan", "mohamed"};
	cout << (equal(cstr_vec.cbegin(),
	               cstr_vec.cend(),
				   cstr_lst.cbegin()) ? "yes": "no") << endl;
	cout << (equal(cstr_deq.cbegin(),
	               cstr_deq.cend(),
				   cstr_lst.cbegin()) ? "yes": "no") << endl;
	return 0;
}

