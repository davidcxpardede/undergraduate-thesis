#include <iostream>
using namespace std;

int main() {

    string card = "Jack of Hearts";
    int check = card.find("c",0);
    string status;

    if (check > 0) {
        status = "Found";
    }   else {
        status = "Not Found";
    }

    cout << check << endl << status;

    return 0;
}