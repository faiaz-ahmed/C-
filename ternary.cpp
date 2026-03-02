#include <iostream>
using namespace std;

int main()
{
    int grade;
    cout << "Enter your number: ";
    cin >> grade;

    grade % 2 == 0 ? cout << "even" : cout << "odd";

    return 0;
}
