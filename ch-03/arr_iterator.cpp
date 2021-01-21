#include <iostream>

using namespace std;

int main()
{
	int arr[10];
	for (auto i = 0; i < 10; i++)
		arr[i] = i;
	for (auto i : arr)
		cout << i << " ";
	cout << endl;
	auto arr_begin = begin(arr);
	auto arr_end = end(arr);
	for (auto i = arr_begin; i != arr_end; i++)
		cout << *i << " ";
	cout << endl;
	return 0;
}
