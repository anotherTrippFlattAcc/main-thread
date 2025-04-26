#include <iostream>

using namespace std;

int main()
{
	// 1

	int a = 10;
	cout << &a << endl;

	// 2
	
	int* ptr = &a;
	*ptr = 5;
	cout << a << endl;

	// 3

	int& ref = a;
	ref = 10;
	cout << a << endl;
}