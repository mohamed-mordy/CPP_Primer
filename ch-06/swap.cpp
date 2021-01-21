#include <iostream>
#include <vector>
#include <string>

using namespace std;

void swap1(int *i1, int *i2);
void swap2(int &i1, int &i2);

int main()
{
	int i1 = 3, i2 = 4;
	cout << i1 << " " << i2 << endl;
	swap1(&i1, &i2);
	cout << i1 << " " << i2 << endl;
	swap2(i1, i2);
	cout << i1 << " " << i2 << endl;
	return 0;
}

void swap1(int *i1, int *i2)
{
	int tmp = *i1;
	*i1 = *i2;
	*i2 = tmp;
}
void swap2(int &i1, int &i2)
{
	int tmp = i1;
	i1 = i2;
	i2 = tmp;
}
