#ifndef BOOK_H
#define BOOK_H
#include <iostream>
#include <string>
using namespace std;

struct Book {
    string title;
    string author;
    string publisher;
    string genre;
};

void editBook(Book& book);
void printBooks(const Book books[], int size);
void searchByAuthor(const Book books[], int size, const std::string& authorName);
void searchByTitle(const Book books[], int size, const std::string& bookTitle);
void sortByTitle(Book books[], int size);
void sortByAuthor(Book books[], int size);
void sortByPublisher(Book books[], int size);

#endif 

