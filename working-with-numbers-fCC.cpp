#include <iostream>
#include <cmath>                    // Using some math functions

using namespace std;

int main()
{

    int wnum = 5;
    double dnum = 5.5;

    cout << wnum + dnum << endl;

    cout << 10 / 3 << endl;         // Operations with integers only yield Integer result
    cout << 10.0 / 3.0 << endl;     // Specifying floats to yield a Float result
    
    cout << pow(2, 5) << endl;              // Exponential operation (syntax: pow(number, power))
    cout << sqrt(625) << endl;              // Square of a number
    cout << round(4.6) << endl;             // Rounding a number
    cout << floor(4.8) << endl;             // Taking a number to the closest lower integer
    cout << fmax(3,10) << endl;             // Finding the largest number
    cout << fmin(3,10) << endl;             // Finding the smallest number

    return 0;
}