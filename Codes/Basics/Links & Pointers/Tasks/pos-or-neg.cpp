#include <iostream>

using namespace std;

int main()
{
	int num;

	cout << "Enter a number: ";
	cin >> num;

	int* ptrNum = &num;

	if (*ptrNum > 0) cout << '+';
	else if (*ptrNum < 0) cout << '-';
	else cout << '0';
}