#include <iostream>

using namespace std;

int main()
{
	int a, b;

	cout << "Enter A: ";
	cin >> a;
	cout << "Enter B: ";
	cin >> b;

	int* ptrA = &a;
	int* ptrB = &b;
	int temp = *ptrA;
	
	a = *ptrB;
	b = temp;

	cout << a << endl << b;
}