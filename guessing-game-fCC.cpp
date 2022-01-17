#include <iostream>
using namespace std;

int main()
{
    int secretNum;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;

    cout << "Welcome to the number-guessing game. This game require two players. The first player will enter a secret number and the second will try to guess it in three chances. Goof luck and have fun!" << endl;
    cout << "First player, please enter your secret number from 1 to 10." << endl << "Secret number: ";
    cin >> secretNum;

    cout << "Second player, it is your turn now. " << endl;

    do {
        if(guessCount < guessLimit) {
            cout << "Guess the secret number! ";
            cin >> guess;
            guessCount++;
        }
    }
        while(secretNum != guess && guessCount < guessLimit);

    if(guessCount < guessLimit) {
        cout << "Player 2 wins!";
    }   else {
        cout << "Player 1 wins!";
    }


    return 0;
}