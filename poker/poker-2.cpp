#include <iostream>
using namespace std;

int main()
{
    // LISTING ALL CARDS IN A STANDARD DECK
    string cardsName[52] = {"Ace of Diamonds", "Two of Diamonds", "Three of Diamonds", "Four of Diamonds", "Five of Diamonds", "Six of Diamonds", "Seven of Diamonds", "Eight of Diamonds", "Nine of Diamonds", "Ten of Diamonds", "Jack of Diamonds", "Queen of Diamonds", "King of Diamonds",
                        "Ace of Clubs", "Two of Clubs", "Three of Clubs", "Four of Clubs", "Five of Clubs", "Six of Clubs", "Seven of Clubs", "Eight of Clubs", "Nine of Clubs", "Ten of Clubs", "Jack of Clubs", "Queen of Clubs", "King of Clubs",
                        "Ace of Hearts", "Two of Hearts", "Three of Hearts", "Four of Hearts", "Five of Hearts", "Six of Hearts", "Seven of Hearts", "Eight of Hearts", "Nine of Hearts", "Ten of Hearts", "Jack of Hearts", "Queen of Hearts", "King of Hearts",
                        "Ace of Spades", "Two of Spades", "Three of Spades", "Four of Spades", "Five of Spades", "Six of Spades", "Seven of Spades", "Eight of Spades", "Nine of Spades", "Ten of Spades", "Jack of Spades", "Queen of Spades", "King of Spades"};

        /*  NOTES:
            Cards Indices based on Suits
            - cards[0] to cards[12] = Diamonds
            - cards[13] to cards[25] = Clubs
            - cards[26] to cards[38] = Hearts
            - cards[39] to cards[51] = Spades
            Cards Indices based on Values
            - cards[0], cards[13], cards[26], and cards[39] are Aces.
            - cards[12], cards[25], cards[38], and cards[51] are Kings.
            - etc.      */

    int a, b, c, d, e, n;                          // Defining useful variables
    srand(time(0));                             // Initializing random operator

    // ASSIGNING THE CARDS
    int numofPlayer = 1;                        // Determining the number of player
    int numofCards = 5 + (numofPlayer * 2);     // Calculating the number of cards to be considered
    int cardsNum[numofCards];                   // Creating an array to store the cardsName indices

        // Assigning Player Cards
        string playerOneName[2];
        int playerOneNum[2];

            // Assigning Player One Cards
            cout << endl << "The cards of the first player are: " << endl;
            for (a = 0; a < 2; a++) {
                n = rand() % 52;
                if (cardsName[n] == "Used") {
                    a--; 
                } else {
                    playerOneName[a] = cardsName[n];
                    cout << a + 1 << ". " << playerOneName[a] << endl;
                    cardsName[n] = {"Used"};
                    playerOneNum[a] = n;
                }
            }

            // Assigning Player Two Cards
            // LATER

        // Assigning Community Cards
        string communityName[5];
        int communityNum[5];
        
        cout << endl << "The community cards are: " << endl;
        for (a = 0; a < 5; a++) {
            n = rand() % 52;
            if (cardsName[n] == "Used") {
                a--; 
            } else {
                communityName[a] = cardsName[n];
                cout << a + 1 << ". " << communityName[a] << endl;
                cardsName[n] = {"Used"};
                communityNum[a] = n;
            }
        }

    // IDENTIFYING THE PLAYER HANDS
    string handsName[7];
    int handsNum[7];
    for(a = 0; a < 2; a++) {
        handsName[a] = playerOneName[a];
        handsNum[a] = playerOneNum[a];
        cout << handsNum[a] << " " << handsName[a] << "\n";
    }
    for(a = 0; a < 5; a++) {
        handsName[a+2] = communityName[a];
        handsNum[a+2] = communityNum[a];
        cout << handsNum[a+2] << " " << handsName[a+2] << "\n";
    }
    
    int rank = 0;

        // Identifying Royal Flush

        // Identifying Straight Flush

        // Identifying Four of a Kind

        // Identifying Full House

        // Identifying Flush

        // Identifying Straight

        // Identifying Three of a Kind

        // Identifying Two Pair

        // Identifying One Pair

        // Identifying High Card


    // DETERMINING WHICH PLAYER HAS THE STRONGEST HANDS




    return 0;
}