#include <iostream>
#include <array>
#include <string>
using namespace std;

int main()
{

    string a = "2", b = "3", c = "4", d = "5", e = "6", f = "7", g = "8", h = "10", i = "Jack", j = "Queen", k = "King", l = "Ace";

    string table1 = h, table2 = k, table3 = l;
    string hand1 = i, hand2 = j;

    string arr1[5] = {table1, hand1, hand2, table2, table3};

    for (int i = 0; i < 5; i++)
        std::cout << arr1[i] << " ";

    std::cout << endl << "You got a royal straight!";
    return 0;
}