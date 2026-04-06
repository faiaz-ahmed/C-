#include <iostream>

using namespace std;

void bankbalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
    double balance = 10000;
    int choice;

    do
    {
        cout << "Enter your choice: " << endl;
        cout  << "1. Balance " << endl;
        cout  << "2. Withdraw " << endl;
        cout  << "3. Depostit " << endl;
        cout  << "4. Exit!" << endl;
        cin >> choice;

        switch(choice)
        {
        case 1:
            bankbalance(balance);
            break;

        case 2:
            balance -= withdraw(balance);
            cout << "Your bank balance is $" << balance << endl;
            break;
        case 3:
            balance += deposit();
            cout << "Your bank balance is $" << balance << endl;
            break;

        case 4:
            cout << "Thanks for visiting!!!";
            break;
        default:
            cout << "Invalid option!!!";
        }
    }
    while (choice != 4);
}

void bankbalance(double balance)
{
    cout << "Your account balance is $" << balance << endl;

}
double deposit()
{
    double amount;

    cout <<  "enter the amount you want to deposit: " << endl;
    cin >> amount;

    if (amount <= 0)
    {
        cout << "Insufficient amount" << endl;
        return 0;
    }

    return amount;
}
double withdraw(double balance)
{
    double amount;
    cout << "Enter the amount you want: " << endl;
    cin >> amount;
    if (amount > balance)
    {
        cout << "Insufficient funds! You can withdraw at most $" << balance << endl;
        return 0;
    }

    else if (amount <= 0)
    {
        cout << "Insufficient amount. try again." << endl;
        return 0;
    }

    return amount;
}

