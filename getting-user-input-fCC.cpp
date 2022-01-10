#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    
    int age;
    cout << "Enter your age: ";
    cin >> age;

    cout << "Hello, " << name << endl;
    cout << "You are " << age << " years old." << endl;
        

    return 0;
}