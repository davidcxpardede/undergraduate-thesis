#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    string civilizations[] = {"English", "French", "Chinese", "Holy Roman Empire", "Mongols", "Rus", "Delhi Sultanate", "Abbasid Dynasty"};
    string uniqueUnits[] = {"Longbowman", "Royal Knight", "Imperial Guard", "Landsknechte", "Mangudai", "Cavalry Archer", "War Elephant", "Camel Riders"};

    int num;
    cout << "Enter a number from 1 - 8: ";
    cin >> num;
    num--;
    
    cout << "Your civilization is the " << civilizations[num] << " which will use the great " << uniqueUnits[num] << ".";

    return 0;
}