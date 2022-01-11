#include <iostream>
using namespace std;

double cube(double num)
{
    double result = num * num * num;
    return result;
}

int main()
{
    double ans;
    cin >> ans;
    cout << cube(ans);
    return 0;
}