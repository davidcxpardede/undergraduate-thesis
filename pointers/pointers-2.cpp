#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p;
    p = &a;

    // cout << p << endl << *p << endl;

    // Pointer Arithmetic
    cout << "The value of p is " << p << endl;      
    cout << "The value of p+1 is " << p+1 << endl;
    cout << "The value of p+2 is " << p+2 << endl;
    cout << "The value of p+3 is " << p+3 << endl;
    cout << "The value of p+4 is " << p+4 << endl;
    cout << "The value of p+5 is " << p+5 << endl;
    cout << "The value of p+6 is " << p+6 << endl;
    cout << "The value of p+7 is " << p+7 << endl;
    cout << "The value of p+8 is " << p+8 << endl;
    cout << "The value of p+9 is " << p+9 << endl;
    cout << "The value of p+10 is " << p+10 << endl;  

    return 0;
}