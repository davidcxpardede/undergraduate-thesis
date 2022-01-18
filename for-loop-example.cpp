#include <iostream>
using namespace std;

int main()
{
    string values[] = {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
    string suits[] = {"Diamonds", "Clubs", "Hearts", "Spades"};

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 13; j++) {
            cout << values[j] << " of " << suits[i] << endl;
        }
    }

    return 0;
}