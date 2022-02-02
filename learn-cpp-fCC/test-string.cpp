#include <iostream>
using namespace std;

int main()
{
    string a = "Eight of Clubs";
    int endsuits = a.find("s", 0);
    int values = a.find(" ", 0);

    cout << a.substr(0, values) << " and " << a.substr(values + 4, endsuits - values - 3);
    return 0;
}