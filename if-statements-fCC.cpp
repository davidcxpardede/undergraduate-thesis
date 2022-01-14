#include <iostream>
using namespace std;

int main()
{
    bool isMale;
    bool isTall;

    string answer1, answer2;

    cout << "Are you a male? ";
    getline(cin, answer1);

    cout << "Are you tall? ";
    getline(cin, answer2);

    if(answer1 == "yes")
    {
        isMale = true;
    }   else if(answer1 == "no"){
        isMale = false;
    }   else {
        cout << "Error!";
    }

    if(answer2 == "yes")
    {
        isTall = true;
    }   else if (answer2 == "no") {
        isTall = false;
    }   else {
        cout << "Error!";
    }

    if(isMale == true && isTall == true)
    {
        cout << "You are a tall man!";
    }   else if(isMale == true && isTall == false) {
        cout << "You are a short man!";
    }   else if(isMale == false && isTall == true) {
        cout << "You are a tall woman!";
    }   else {
        cout << "You are a short woman!";
    }

    return 0;
}