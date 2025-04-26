#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    int* ptr = &a;
    
    cout << "Address of a: " << ptr << endl;
    cout << "Value of a: " << *ptr << endl;

    *ptr = 10;
    cout << a << endl;
}