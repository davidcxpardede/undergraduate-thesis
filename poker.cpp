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
    int v1, s1;
    string v2, s2;

    for (int i = 0; i = 5; i++)
    {
        v1 = rand() % 12;
        s1 = rand() % 3;

        v2[i] = v1;
        s2[i] = s1;
    }    

    cout << v2 << endl << s2;

    return 0;
}