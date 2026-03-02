#include <iostream>
using namespace std;

int main()
{
    int row, column;
    char symbol;

    cout << "Enter row: ";
    cin >> row;

    cout << "Enter column: ";
    cin >> column;

    cout << "Enter symbol of the rectangle: ";
    cin >> symbol;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << symbol;
        }
        cout <<'\n';
    }
}
