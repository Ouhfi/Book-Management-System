#include <iostream>
#include "Book.h"
using namespace std;

int Menu()
{
    int nbr = 0;
    cout << "==============================\n";
    cout << "    Book Management System       \n";
    cout << "==============================\n";

    cout << "\n";
    cout << "1. Add Book\n";
    cout << "2. View Books\n";
    cout << "3. Search Book\n";
    cout << "4. Update Book\n";
    cout << "5. Delete Book\n";
    cout << "6. Exit\n";

   do
   {
        cout << "==============================\n";
        cout << "Please select the number from the list :";
        cin >> nbr;
   } while ( nbr >= 6); //!There is an error   ==>>"0" return 0  

   return nbr;  
}

int main()
{
   
}