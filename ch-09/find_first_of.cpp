#include <iostream>

using namespace std;

int main()
{
	string numbers("0123456789");
	string data("wertyui86yuidf456ydj567euiwkdjfry6e7u8wi");
	string::size_type pos = 0;
	while ((pos = data.find_first_of(numbers, pos)) != string::npos) {
		cout << "found number at index: " << pos << " element is: "
		     << data[pos] << endl;
		++pos;
	}
	return 0;
}
