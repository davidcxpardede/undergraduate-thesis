#include <iostream>
using namespace std;

int main()
{
    int civNum;
    string civName;
    string uniqueUnit;

    cout << "Choose a number for a civilization: ";
    cin >> civNum;
    
    switch(civNum) {
        case 1:
            civName = "English";
            uniqueUnit = "Longbowman";
            break;
        case 2:
            civName = "French";
            uniqueUnit = "Royal Knight";
            break;
        case 3:
            civName = "Chinese";
            uniqueUnit = "Zhuge Nu";
            break;
        case 4:
            civName = "Holy Roman Empire";
            uniqueUnit = "Landsknechte";
            break;
        case 5:
            civName = "Mongols";
            uniqueUnit = "Mangudai";
            break;
        case 6:
            civName = "Rus";
            uniqueUnit = "Warrior Monk";
            break;
        case 7:
            civName = "Delhi Sultanate";
            uniqueUnit = "War Elephant";
            break;
        case 8:
            civName = "Abbasid Dynasty";
            uniqueUnit = "Camel Archer";
            break;
        default:
            cout << "Invalid Number";
    }

    cout << "Your chosen civilization is the " << civName << " which has the extraordinary " << uniqueUnit << ". Happy playing!";

    return 0;
}