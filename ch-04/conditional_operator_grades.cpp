#include <vector>
#include <iostream>

using namespace std;

int main()
{
	int grade = 65;
	cout << (grade >= 90 ? "hish pass" :
		(grade >= 75 ? "pass" :
			(grade >= 60 ? "low pass" : "fail")));
	cout << endl;
	return 0;
}
