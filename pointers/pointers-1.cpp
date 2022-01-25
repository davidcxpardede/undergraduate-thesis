#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p;      // pointers
    p = &a;      // address of a

    cout << p << endl << *p << endl << &a;
    
    *p = 12;     // dereferencing
    cout << endl << *p << endl;

    int b = 20;
    *p = b;

    cout << b << endl << *p << endl << p << endl << a << endl;
    return 0;
}