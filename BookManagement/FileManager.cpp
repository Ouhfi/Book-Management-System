#include "FileManager.h"
#include <fstream>
#include <iostream>

using namespace std;

void SaveBook(const StBook& book)
{
    ofstream file("books.txt", ios::app);

    if (!file.is_open())
    {
        cout << "Error: Cannot open books.txt\n";
        return;
    }

    file << book.Id << "|"
         << book.Title << "|"
         << book.Author << "|"
         << book.Year << "|"
         << book.Price << endl;

    file.close();

    cout << "Book saved successfully.\n";
}