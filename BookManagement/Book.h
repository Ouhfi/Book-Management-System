#ifndef BOOK_H
#define BOOK_H

#include <string>

using namespace std;

struct StBook
{
    int Id;
    string Title;
    string Author;
    int Year;
    float Price;
};

StBook AddBook();
void ViewBook(const StBook& Info);

#endif