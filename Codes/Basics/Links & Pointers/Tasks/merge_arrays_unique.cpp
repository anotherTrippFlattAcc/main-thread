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
    int uniqueCount = 0;
    bool isUnique;

    for (int i = 0; i < m; i++)
    {
        isUnique = true;
        for (int j = 0; j < uniqueCount; j++)
        {
            if (*(c + j) == *(a + i)) {
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            *(c + uniqueCount) = *(a + i);
            uniqueCount++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        isUnique = true;
        for (int j = 0; j < uniqueCount; j++)
        {
            if (*(c + j) == *(b + i)) {
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            *(c + uniqueCount) = *(b + i);
            uniqueCount++;
        }
    }

    cout << "Result:" << endl;
    for (int i = 0; i < uniqueCount; i++)
    {
        cout << *(c + i) << " ";
    }

    delete[] a;
    delete[] b;
    delete[] c;
}