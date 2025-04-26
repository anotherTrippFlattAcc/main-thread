#include <iostream>

using namespace std;

int main()
{
    double a, b, result;
    char op;

    cout << "Enter A: ";
    cin >> a;
    cout << "Enter B: ";
    cin >> b;
    cout << "Enter operation: ";
    cin >> op;

    double* ptrA = &a;
    double* ptrB = &b;
    double* ptrResult = &result;
    char* ptrOp = &op;

    switch (op) {
    case '+':
        *ptrResult = *ptrA + *ptrB;
        break;
    case '-':
        *ptrResult = *ptrA - *ptrB;
        break;
    case '*':
        *ptrResult = *ptrA * *ptrB;
        break;
    case '/':
        if (*ptrB != 0) *ptrResult = *ptrA / *ptrB;
        else *ptrResult = 0;
        break;
    default:
        *ptrResult = 0;
    }

    cout << "Result: " << *ptrResult << endl;
}