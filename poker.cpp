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

    // Declaring truly random variables to call from the array
    srand(time(0));
    int a = rand() % 12;
    int b = rand() % 3;

    // Defining the cards from the combination of random value and suit
    string cards = values[a] + " of " + suits[b];

    // Printing the cards
    cout << "Your card is the " << cards << "." << endl;


    return 0;
}