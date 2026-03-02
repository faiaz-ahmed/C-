#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));

    int randNum = rand() % 5 + 1;

    switch (randNum)
    {
    case 1:
        cout << "Goalkeeper will pass the ball to the defender";
        break;
    case 2:
        cout << "GK will play it short";
        break;
    case 3:
        cout << "GK will shoot it long";
        break;

    case 4:
        cout << "GK = will Play it wide";
        break;
    case 5:
        cout << "GK will pass it to the opponent";
        break;
    }

}
