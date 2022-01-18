#include <iostream>
using namespace std;

int powerf(int base, int power) {
    int result = 1;

    for (int i = 1; i <= power; i++) {
        result *= base;
    }

    return result;
}

int main()
{
    int base, power, result;

    cout << "Enter the base number: ";
    cin >> base;

    cout << "Enter the power: ";
    cin >> power;

    cout << base << " to the power of " << power << " equals to " << powerf(base, power);
    
    return 0;
}