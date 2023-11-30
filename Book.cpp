#include "Book.h"



void editBook(Book& book) {
    cout << "Enter new title: ";
    cin >> book.title;

    cout << "Enter new author: ";
    cin >> book.author;

    cout << "Enter new publisher: ";
    cin >> book.publisher;

    cout << "Enter new genre: ";
    cin >> book.genre;
}

void printBooks(const Book books[], int size) {
    cout << "Books in the library:\n";
    for (int i = 0; i < size; ++i) {
       cout << "Title: " << books[i].title << ", Author: " << books[i].author << ", Publisher: " << books[i].publisher << ", Genre: " << books[i].genre << endl;
    }
}

void searchByAuthor(const Book books[], int size, const string& authorName) {
    bool found = false;
    cout << "Books by author '" << authorName << "':\n";
    for (int i = 0; i < size; ++i) {
        if (books[i].author == authorName) {
            cout << "Title: " << books[i].title << ", Author: " << books[i].author << ", Publisher: " << books[i].publisher << ", Genre: " << books[i].genre <<endl;
            found = true;
        }
    }
    if (!found) {
        cout << "No books found by author '" << authorName << "'.\n";
    }
}

void searchByTitle(const Book books[], int size, const string& bookTitle) {
    bool found = false;
    cout << "Books with title '" << bookTitle << "':\n";
    for (int i = 0; i < size; ++i) {
        if (books[i].title == bookTitle) {
            cout << "Title: " << books[i].title << ", Author: " << books[i].author << ", Publisher: " << books[i].publisher << ", Genre: " << books[i].genre << endl;
            found = true;
        }
    }
    if (!found) {
        cout << "No books found with title '" << bookTitle << "'.\n";
    }
}

void sortByTitle(Book books[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (books[i].title > books[j].title) {
                Book temp = books[i];
                books[i] = books[j];
                books[j] = temp;
            }
        }
    }
}

void sortByAuthor(Book books[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (books[i].author > books[j].author) {
                Book temp = books[i];
                books[i] = books[j];
                books[j] = temp;
            }
        }
    }
}

void sortByPublisher(Book books[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (books[i].publisher > books[j].publisher) {
                Book temp = books[i];
                books[i] = books[j];
                books[j] = temp;
            }
        }
    }
}
