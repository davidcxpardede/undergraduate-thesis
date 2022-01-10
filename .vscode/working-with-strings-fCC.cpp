#include <iostream>
using namespace std;

int main()
{

    string phrase = "Aerospace Engineering";    // Declaring a String variable
    cout << phrase.length() << endl;            // Counting the length of a String
    cout << phrase[2] << endl;                  // Indexing a String
    
    phrase[0] = 'Q';                            // Changing a character in a String
    cout << phrase << endl;

    phrase[0] = 'A';
    cout << phrase << endl;

    cout << phrase.find("Engineering", 0) << endl;      // Finding a specific string of characters inside of the String variable (syntax: stringName.find("What to look for:, index where to start looking"))
    
    cout << phrase.substr(10, 3) << endl;     // Calling out a specific substring inside of the String variable (syntax: substr(starting_index, substring_length))
    
    return 0;
}