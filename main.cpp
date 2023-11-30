#include <iostream>
#include "Book.h"

int main() {
    const int size = 10;
    Book library[size];

   

    int choice;
    do {
       cout << "Choose an option:\n"
            << "1. Edit a book\n"
            << "2. Print all books\n"
            << "3. Search by author\n"
            << "4. Search by title\n"
            << "5. Sort by title\n"
            << "6. Sort by author\n"
            << "7. Sort by publisher\n"
            << "8. Exit\n";
       cin >> choice;

        switch (choice) {
        case 1:
           
            editBook(library[0]); 
            break;
        case 2:
            
            printBooks(library, size);
            break;
        case 3: {
            string authorName;
            cout << "Enter author's name: ";
            cin >> authorName;
            
            searchByAuthor(library, size, authorName);
            break;
        }
        case 4: {
            string bookTitle;
            cout << "Enter book title: ";
            cin >> bookTitle;
           
            searchByTitle(library, size, bookTitle);
            break;
        }
        case 5:
            
            sortByTitle(library, size);
            break;
        case 6:
            sortByAuthor(library, size);
            break;
        case 7:
            sortByPublisher(library, size);
            break;
        case 8:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice. Please enter a valid option.\n";
        }
    } while (choice != 8);

    return 0;
}
