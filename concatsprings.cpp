#include <iostream>
using namespace std;

string concatstrings(string string1, string string2);

int main()
{
    string firstname, lastname;

    cout << "Enter your first name: " << endl;
    cin >> firstname;

    cout << "Enter your last name: " << endl;
    cin >> lastname;

    string fullname = concatstrings(firstname, lastname);

    cout << "Your full name is " << fullname << endl;

    return 0;
}


string concatstrings(string string1,string string2)
{
   string  string3;

   string3 = string1 + " " + string2;

   return string3;

}
