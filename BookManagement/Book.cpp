#include <iostream>
#include "Book.h"
using namespace std;


StBook AddBook()
{
    StBook Info;

    cout << "Enter Book ID: ";
    cin >> Info.Id;

    cin.ignore();

    cout << "Enter Title: ";
    getline(cin, Info.Title);

    cout << "Enter Author: ";
    getline(cin, Info.Author);

    cout << "Enter Year: ";
    cin >> Info.Year;

    cout << "Enter Price: ";
    cin >> Info.Price;

    return Info;
}

void ViewBook(const StBook& Info)
{
    cout << "ID: " << Info.Id << endl;
    cout << "Title: " << Info.Title << endl;
    cout << "Author: " << Info.Author << endl;
    cout << "Year: " << Info.Year << endl;
    cout << "Price: " << Info.Price << endl;
}