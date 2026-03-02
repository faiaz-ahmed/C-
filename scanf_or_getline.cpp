#include <iostream>
using namespace std;

int main()
{
    string name;
    int age;

    cout << "What's your name? " << endl;
    getline(cin , name);

    cout << "What's your age? " << endl;
    cin >> age;

    cout << "Your name is " << name << endl;
    cout << "And You are " << age << " years old" << endl;

    return 0;
}

