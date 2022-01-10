#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    string color, pluralNoun, celebrity;

    cout << "Enter a color: ";
    getline(cin, color);
    cout << "Enter a noun in plural form: ";
    getline(cin, pluralNoun);
    cout << "Enter your favorite celebrity: ";
    getline(cin, celebrity);

    cout << "Roses are " << color << endl;
    cout << pluralNoun << " are blue" << endl;
    cout << "I love " << celebrity << endl;

    return 0;
}