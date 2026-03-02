#include <iostream>
#include <ctime>

using namespace std;
int main()
{
    int num, guess, tries = 5;

    srand(time(NULL));

    num = rand() % 100 + 1;

    cout << "Guess the number between 1 to 100 in 5 tries" << endl;
    while (tries > 0)
    {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess == num){
            cout << "You have guessed the number. CONGRATULATIONS!!!!" << endl;
            break;}
        else if (guess > num)
            cout << "It is less than your guessed number."<< endl;
        else if (guess < num)
            cout << "It is higher than your guessed number"<< endl;
        tries--;
    }
    cout << "The number was " << num;

}
