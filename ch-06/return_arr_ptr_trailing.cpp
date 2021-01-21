
#include <iostream>
#include <vector>
#include <string>

using namespace std;
auto func(int i) -> int (*)[10];

int main()
{
	int (*arr)[10] = func(1);
	for (auto i = 0; i < 20; i++) {
		for (auto j = 0; j < 10; j++)
			arr[i][j] = i * j;
	}
	for (auto i = 0; i < 20; i++) {
		for (auto j = 0; j < 10; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
	return 0;
}

auto func(int i) -> int (*)[10]
{
	static int arr[20][10];
	return arr;
}
