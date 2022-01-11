#include <iostream>
using namespace std;

void sayHi(string name, int age);

int main ()
{
    string name;
    int age;
    cout << "Hello, what's your name? ";
    getline(cin, name);
    cout << "And what's your age? ";
    cin >> age;
    sayHi(name, age);

    return 0;
}

void sayHi(string name, int age)
{
    cout << "Hello, " << name  << "!" << endl;
    cout << "You are " << age << " years old.";
}