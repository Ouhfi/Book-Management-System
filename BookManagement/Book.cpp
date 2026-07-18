#include <iostream>

using namespace std;

struct StBook{
    int Id ;
    string Title;
    string Author;
    int Year;
    int Price;
};

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

void ViewBooks(StBook Info)
{
    cout << Info.Id << endl;
    cout << Info.Title << endl;
    cout << Info.Author << endl;
    cout << Info.Year<< endl;
    cout << Info.Price << endl;
}

void DeleteBook()
{
    
}
void UpdateBook()
{

}

void SearchBook()
{

}