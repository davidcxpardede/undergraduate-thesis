#include <iostream>
#include <array>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    
    // Defining all cards in the deck based on suits and values  
    string values[13] = {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
    string suits[4] = {"Diamonds", "Clubs", "Hearts", "Spades"};
    
    // Declaring truly random variables to call from the array
    srand(time(0));
    int v1, s1;
    int v2[5], s2[5];

    for (int i = 0; i < 5; i++)
    {
        v1 = rand() % 12;
        s1 = rand() % 3;

        v2[i] = v1;
        s2[i] = s1;

        /*for (j = i; j < )
        values[j] = values[j-1];
        suits[j] = suits[j-1]*/
    }

    cout << "The first card is the " << values[v2[0]] + " of " + suits[s2[0]] + "." << endl;
    cout << "The second card is the " << values[v2[1]] + " of " + suits[s2[1]] + "." << endl;
    cout << "The third card is the " << values[v2[2]] + " of " + suits[s2[2]] + "." << endl;
    cout << "The fourth card is the " << values[v2[3]] + " of " + suits[s2[3]] + "." << endl;
    cout << "The fifth card is the " << values[v2[4]] + " of " + suits[s2[4]] + "." << endl;

    return 0;
}