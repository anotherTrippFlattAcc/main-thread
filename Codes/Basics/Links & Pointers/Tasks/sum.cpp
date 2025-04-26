#include <iostream>

using namespace std;

int main()
{
    const int size = 5;
    int array[size];
	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		cout << "Enter element " << i + 1 << ": ";
		cin >> array[i];
	}

	for (int i = 0; i < size; i++)
	{
		sum += *(array + i);
	}

	cout << "Result: " << sum;
}