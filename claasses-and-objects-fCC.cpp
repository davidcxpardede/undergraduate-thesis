#include <iostream>
using namespace std;

// A class is the specification/blueprint/template of a datatype.
class Book {
    public:
        string title;
        string author;
        int pages;
};

int main ()
{
    // An object is an actual instance of a class.
    Book book1;
        book1.title = "The Lord of the Rings";
        book1.author = "J. R. R. Tolkien";
        book1.pages = 1000;

    Book book2;
        book2.title = "Sapiens: The Brief History of Humankind";
        book2.author = "Yuval Noah Harari";
        book2.pages = 700;

    Book book3;
        book3.title = "747: Queen of the Skies";
        book3.author = "Joe Sutter";
        book3.pages = 500;
    
    

    return 0;
}