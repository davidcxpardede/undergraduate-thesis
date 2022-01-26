#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p;
    p = &a;      // address of a

    cout << "*p = " << *p << endl;
    cout << "p = " << p << endl;
    cout << "a = " << a << endl;
    cout << "&a = " << &a << endl;

    return 0;
}