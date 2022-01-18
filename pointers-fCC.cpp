#include <iostream>
using namespace std;

int main()
{
    int age = 21;
    int *pAge = &age;
    double gpa = 3.01;
    double *pGpa = &gpa;
    string name = "David";
    string *pName = &name;

    cout << *&gpa;


    return 0;
}