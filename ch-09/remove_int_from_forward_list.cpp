#include <iostream>
#include <forward_list>

using namespace std;

int main()
{
	forward_list<int> iflist {1, 2,3,4,5,6,7,8,9};
	auto curr = iflist.begin();
	auto prev = iflist.before_begin();
	while (curr != iflist.end())
		if (*curr % 2) {
			curr = iflist.erase_after(prev);
		} else {
			prev = curr;
			++curr;
		}
	for (auto elem : iflist)
		cout << elem << endl;
	return 0;
}
