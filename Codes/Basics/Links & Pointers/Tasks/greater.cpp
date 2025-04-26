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

	if (*ptrA > *ptrB) cout << *ptrA << endl;
	else if (*ptrA < *ptrB) cout << *ptrB << endl;
	else cout << "Tie" << endl;
}