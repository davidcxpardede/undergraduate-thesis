#include <iostream>
#include <array>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    cout << endl << "Welcome to the game of Poker created by David Pardede!" << endl;

    // Defining the values and suits of the entire deck of cards

    string cards[4][13] = {
                            {"Ace of Diamonds", "Two of Diamonds", "Three of Diamonds", "Four of Diamonds", "Five of Diamonds", "Six of Diamonds", "Seven of Diamonds", "Eight of Diamonds", "Nine of Diamonds", "Ten of Diamonds", "Jack of Diamonds", "Queen of Diamonds", "King of Diamonds"},
                            {"Ace of Clubs", "Two of Clubs", "Three of Clubs", "Four of Clubs", "Five of Clubs", "Six of Clubs", "Seven of Clubs", "Eight of Clubs", "Nine of Clubs", "Ten of Clubs", "Jack of Clubs", "Queen of Clubs", "King of Clubs"},
                            {"Ace of Hearts", "Two of Hearts", "Three of Hearts", "Four of Hearts", "Five of Hearts", "Six of Hearts", "Seven of Hearts", "Eight of Hearts", "Nine of Hearts", "Ten of Hearts", "Jack of Hearts", "Queen of Hearts", "King of Hearts"},
                            {"Ace of Spades", "Two of Spades", "Three of Spades", "Four of Spades", "Five of Spades", "Six of Spades", "Seven of Spades", "Eight of Spades", "Nine of Spades", "Ten of Spades", "Jack of Spades", "Queen of Spades", "King of Spades"}
                          };

    // Initializing Random Operator

    srand(time(0));
    int values, suits;
    string community[5];
    int a, b, c, d, e;
    
    // Assigning the Player Hole Cards
    string playerOne[2], playerTwo[2];

        // Assigning the Hole Cards of First Player
        cout << endl << "The hole cards of the first player are: " << endl;
        for (int a = 0; a < 2; a++) {

            values = rand() % 13;
            suits = rand() % 4;


            if (cards[suits][values] == "Used") {
                a--; 
            } else {
                playerOne[a] = cards[suits][values];
                cout << a + 1 << ". ";
                cout << playerOne[a] << endl;
        
                cards[suits][values] = {"Used"};
            }
        
        }

        // Assigning the Hole Cards of Second Player
        // cout << endl << "The hole cards of the second player are: " << endl;
        for (a = 0; a < 2; a++) {

            values = rand() % 13;
            suits = rand() % 4;
       
            if (cards[suits][values] == "Used") {
                a--; 
            } else {
                playerTwo[a] = cards[suits][values];
                // cout << a + 1 << ". ";
                // cout << playerTwo[a] << endl;
        
                cards[suits][values] = {"Used"};
            }
        
        }

    // Assigning the Community Cards
    cout << endl << "The community cards are: " << endl;
    for (a = 0; a < 5; a++) {

        values = rand() % 13;
        suits = rand() % 4;

        if (cards[suits][values] == "Used") {
           a--; 
        } else {
            community[a] = cards[suits][values];
            cout << a + 1 << ". ";
            cout << community[a] << endl;
        
            cards[suits][values] = {"Used"};
        }
    }


    // Combining Player Hole Cards and Community Cards
    string handsOne[7];
    for (a = 0; a < 2; a++) {
        handsOne[a] = playerOne[a];
    }
    for (a = 0; a < 5; a++) {
        handsOne[a+2] = community[a];
    }    

    string handsTwo[7];
    for (a = 0; a < 2; a++) {
        handsTwo[a] = playerTwo[a];
    }
    for (a = 0; a < 5; a++) {
        handsTwo[a+2] = community[a];
    }

    cout << endl;

    // Separating Values and Suits
    string handsValues[7], handsSuits[7];

        for (a = 0; a < 7; a++) {
            int vEv = handsOne[a].find(" ", 0);
            int sEv = handsOne[a].find("s", 0);

            handsValues[a] = handsOne[a].substr(0, vEv);
            handsSuits[a] = handsOne[a].substr(vEv + 4, sEv - vEv - 3);
        }

    // Declaring the Ranks of the Hands
    /*  1. Royal Flush
        2. Straight Flush
        3. Four of a Kind
        4. Full House
        5. Flush
        6. Straight
        7. Three of a Kind
        8. Two Pair
        9. One Pair
        10. High Card           */

        // Checking for The Same Values
        int rank;
        string OnePair, TwoPair, ThreeofaKind, Straight, Flush, FourofaKind, StraightFlush, RoyalFlush;
        string Pairs[21], PairValues[21];
        c = 0;

        for (a = 0; a < 7; a++) {
            for (b = a; b < 6; b++) {
                if (handsValues[a] == handsValues[b+1]) {
                    Pairs[c] = handsOne[a] + " and " + handsOne[b+1];
                    PairValues[c] = handsValues[a];
                    PairValues[c+1] = handsValues[b+1];
                    cout << Pairs[c] << "\n \n";
                    c++;
                }
            }
        }

        // Determining Whether the Player has One Pair or Two Pair
        if (c > 1) {
            rank = 8;     // Two Pair
            TwoPair = Pairs[0] + ", and \n" + Pairs[1];
        }   else if (c == 1) {
            rank = 9;     // One Pair
            OnePair = Pairs[0];
        }   else {
            rank = 10;    // High Card
        }

        // Determining What Hands the Player Possesses
        switch(rank) {
            case 8:
                cout << "Player one has two pairs! \n";
                cout << TwoPair;
                break;
            case 9:
                cout << "Player one has one pair! \n";
                cout << OnePair;
                break;
            case 10:
                cout << "Player one has high card! \n";
                break;
        }    

    return 0;
}

// Checking every cards remaining
/*         for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 13; j++) {
                cout << cards[i][j] << endl;
            }
        }
        cout << endl;*/