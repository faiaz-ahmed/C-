#include <iostream>
using namespace std;

int main()

{
    string name;
    int age;

    cout << "What's your name? " << endl;
    getline (cin, name);

    cout << "What's your age? "<< endl;
    cin >> age;

    cout << "Hello " << name << endl;
    cout << "you are " << age << " years old";
}
