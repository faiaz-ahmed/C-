#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x;
    double y;
    double result;
    char op;

    cout << "************ CALCULATOR ************" <<endl;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Choose an operator(+, -, *, /): ";
    cin >> op;

    switch (op)
    {
    case '+':
        result = x + y;
        cout << "Result: " << result << endl;
        break;
    case '-':
        result = x - y;
        cout << "Result: " << result << endl;
        break;
    case '*':
        result = x * y;
        cout << "Result: " << result << endl;
        break;
    case '/':
        result = x / y;
        cout << "Result: " << result << endl;
        break;
    default:
        cout << "please input a valid operator";
    }

    cout << "***********************************" <<endl;
}
