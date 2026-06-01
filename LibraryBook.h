#ifndef LIBRARYBOOK_H
#define LIBRARYBOOK_H

#include <iostream>
#include <string>

using namespace std;

class LibraryBook
{
private:

    int bookID;
    string title;
    string author;
    string borrowerName;
    int daysBorrowed;
    bool borrowed;

public:

    LibraryBook();

    LibraryBook(int id,string title,string author);

    ~LibraryBook();

    // setters
    void setBookID(int bookID);
    void setTitle(string title);
    void setAuthor(string author);
    void setBorrowerName(string borrowerName);
    void setDaysBorrowed(int daysBorrowed);
    void setBorrowed(bool borrowed);

    // getters
    int getBookID();
    string getTitle();
    string getAuthor();
    string getBorrowerName();
    int getDaysBorrowed();
    bool getBorrowed();

    void displayBook();
};

#endif
