#include <iostream>
using namespace std;

class Civilization {
    public:
        string name;
        string uniqueUnits1;
        string uniqueUnits2;
        string feature;
        string bonus;
};

int main ()
{

    Civilization civ1;
        civ1.name = "French";
        civ1.uniqueUnits1 = "Royal Knight";
        civ1.uniqueUnits2 = "Arbaletiere";
        civ1.feature = "can choose what resource to trade";
        civ1.bonus = "50% cheaper drop-off resource buildings";

    Civilization civ2;
        civ2.name = "Delhi Sultanate";
        civ2.uniqueUnits1 = "War Elephants";
        civ2.uniqueUnits2 = "Tower War Elephants";
        civ2.feature = "can research technologies for free but at a much slower rate";
        civ2.bonus = "50% faster gather rate of berry bushes";

    Civilization civ3;
        civ3.name = "Mongols";
        civ3.uniqueUnits1 = "Mangudai";
        civ3.uniqueUnits2 = "Hui Hui Pao";
        civ3.feature = "can move buildings (except Outposts) to a new location";
        civ3.bonus = "the Stables available in the Dark Age (I)";

    int civNum;

    cout << "Welcome to Age of Empires IV!\nPlease choose your civilization: ";
    cin >> civNum;

    switch (civNum) {
        case 1:
            cout << "Your civilization is the " << civ1.name << " which possess the " << civ1.uniqueUnits1 << " and the " << civ1.uniqueUnits2 << "." << endl;
            cout << "The " << civ1.name << " " << civ1.feature << " and has " << civ1.bonus << "." << endl;
            break;
        
        case 2:
            cout << "Your civilization is the " << civ2.name << " which possess the " << civ2.uniqueUnits1 << " and the " << civ2.uniqueUnits2 << "." << endl;
            cout << "The " << civ2.name << " " << civ2.feature << " and has " << civ2.bonus << "." << endl;
            break;

        case 3:
            cout << "Your civilization is the " << civ3.name << " which possess the " << civ3.uniqueUnits1 << " and the " << civ3.uniqueUnits2 << "." << endl;
            cout << "The " << civ3.name << " " << civ3.feature << " and has " << civ3.bonus << "." << endl;
            break;
    }

    return 0;
}