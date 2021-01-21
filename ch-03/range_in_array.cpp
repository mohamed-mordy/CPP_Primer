#include <iostream>

using namespace std;

int main()
{
	int arr[10][20][30];
	int count = 0;
	for (auto &i : arr)
		for (auto &j : i)
			for (auto &k : j) {
				k = count;
				count++;
			}
	for (auto &i : arr) {
		for (auto &j : i) {
			for (auto &k : j) {
				cout << k << " ";
			}
			cout << endl;
		}
	}
	return 0;
}
