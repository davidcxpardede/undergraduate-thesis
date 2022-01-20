#include <iostream>
using namespace std;

// A class is the specification/blueprint/template of a datatype.
class Book {
    public:
        string title;
        string author;
        int pages;

        Book() {
            title = "no title";
            author = "no author";
            pages = 0;
        }

        Book(string aTitle, string aAuthor, int aPages) {
            title = aTitle;
            author = aAuthor;
            pages = aPages;
        }
};

int main ()
{
    // An object is an actual instance of a class.
    Book book1("LotR", "Tolkien", 1000);
    Book book2("Sapiens", "Harai", 700);
    Book book3;

    cout << book3.title;

    return 0;
}