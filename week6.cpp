//bcs-03-0100/2025 //
//judah Muriithi//
//week 6//
#include <iostream>
using namespace std;

class Book
{
private:
    string title;
    string author;
    int copies;

public:
    void inputDetails()
    {
        cout << "Enter book title: ";
        getline(cin, title);

        cout << "Enter author: ";
        getline(cin, author);

        cout << "Enter number of copies: ";
        cin >> copies;
    }

    void borrowBook()
    {
        if (copies > 0)
        {
            copies--;
            cout << "\nBook borrowed successfully." << endl;
        }
        else
        {
            cout << "\nSorry, no copies available." << endl;
        }
    }

    void displayDetails()
    {
        cout << "\n------ Book Details ------" << endl;
        cout << "Title : " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Copies Available: " << copies << endl;
    }
};

int main()
{
    Book book;

    book.inputDetails();
    book.borrowBook();
    book.displayDetails();

    return 0;
}
