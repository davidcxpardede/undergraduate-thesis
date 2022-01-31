#include <iostream>
using namespace std;

class GenericChef {
    public:
        void makeChicken() {
            cout << "The chef makes roast chicken" << endl;
        }
        void makeSalad() {
            cout << "The chef makes salad" << endl;
        }
        void makeSpecialDish() {
            cout << "The chef makes bbq ribs" << endl;
        }
};

class ItalianChef : public GenericChef {
    public:
        void makeSpaghetti() {
            cout << "The chef makes chicken" << endl;
        }
        void makeSpecialDish() {
            cout << "The chef makes pizza" << endl;
        }

};

int main()
{   
    GenericChef chef1;
    chef1.makeSpecialDish();
    ItalianChef chef2;
    chef2.makeSpecialDish();
}