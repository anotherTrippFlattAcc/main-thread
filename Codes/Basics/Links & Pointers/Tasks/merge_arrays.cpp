#include <iostream>

using namespace std;

int main()
{
    int m, n;

    cout << "Enter M: ";
    cin >> m;
    cout << "Enter N: ";
    cin >> n;

    int* a = new int[m];
    int* b = new int[n];

    cout << "Enter A elements:" << endl;
    for (int i = 0; i < m; i++)
    {
        cout << i + 1 << ". ";
        cin >> *(a + i);
    }

    cout << "Enter B elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ". ";
        cin >> *(b + i);
    }

    int* c = new int[m + n];

    for (int i = 0; i < m; i++)
    {
        *(c + i) = *(a + i);
    }

    for (int i = 0; i < n; i++)
    {
        *(c + i + m) = *(b + i);
    }

    cout << "Result:" << endl;
    for (int i = 0; i < m + n; i++)
    {
        cout << *(c + i) << " ";
    }

    delete[] a, b, c;
}