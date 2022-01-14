#include <iostream>
#include <array>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    
    // Defining all cards in the deck based on suits and values
    
    string suits[4] = {"Diamonds", "Clubs", "Hearts", "Spades"};
    string values[13] = {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};

    int a, b;

    // Asking the user for input of the cards values and suits

    cout << "What is the value of your card? ";
    cin >> a;

    cout << "What is the suit of your card? ";
    cin >> b;

    // Combining the values and suits into meaningful cards

    string cards = values[a] + " of " + suits[b];

    // Displaying the cards

    cout << "Your card is the " << cards << "." << endl;

    return 0;
}