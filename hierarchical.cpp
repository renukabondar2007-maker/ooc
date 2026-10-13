#include <iostream>
#include <string>

using namespace std;

// Base class
class LibraryItem
{
protected:
    int itemId;
    string title;

public:
    void getItemDetails()
    {
        cout << "Enter Item ID: ";
        cin >> itemId;

        cout << "Enter Title: ";
        cin >> title;
    }

    void displayItemDetails()
    {
        cout << "Item ID: " << itemId << endl;
        cout << "Title: " << title << endl;
    }
};


// Derived class 1
class Book : public LibraryItem
{
private:
    string author;

public:
    void getBookDetails()
    {
        getItemDetails();

        cout << "Enter Author: ";
        cin >> author;
    }

    void displayBookDetails()
    {
        cout << "\n----- Book Details -----" << endl;

        displayItemDetails();

        cout << "Author: " << author << endl;
    }
};


// Derived class 2
class Magazine : public LibraryItem
{
private:
    int issueNumber;

public:
    void getMagazineDetails()
    {
        getItemDetails();

        cout << "Enter Issue Number: ";
        cin >> issueNumber;
    }

    void displayMagazineDetails()
    {
        cout << "\n----- Magazine Details -----" << endl;

        displayItemDetails();

        cout << "Issue Number: " << issueNumber << endl;
    }
};


int main()
{
    Book book;
    Magazine magazine;

    cout << "Enter Book Information" << endl;
    book.getBookDetails();

    cout << "\nEnter Magazine Information" << endl;
    magazine.getMagazineDetails();

    book.displayBookDetails();

    magazine.displayMagazineDetails();

    return 0;
}
