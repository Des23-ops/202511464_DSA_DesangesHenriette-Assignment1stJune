#ifndef LIBRARYBOOK_H
#define LIBRARYBOOK_H

#include <iostream>
#include <string>

using namespace std;

class LibraryBook{

private:

    int bookID;
    string title;
    string author;
    string borrowerName;
    int daysBorrowed;
    string status;

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
    void setStatus(string status);

    // getters
    int getBookID();
    string getTitle();
    string getAuthor();
    string getBorrowerName();
    int getDaysBorrowed();
    string getStatus();

    void displayBook();
};

#endif
