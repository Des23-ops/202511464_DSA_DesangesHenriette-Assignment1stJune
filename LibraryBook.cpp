#include "LibraryBook.h"

LibraryBook::LibraryBook(){

    bookID = 0;
    title = "";
    author = "";
    borrowerName = "";
    daysBorrowed = 0;
    status = "Available";
}

LibraryBook::LibraryBook(int id,string title,string author){

    this->bookID = id;
    this->title = title;
    this->author = author;

    borrowerName = "";
    daysBorrowed = 0;
    status = "Available";
}

LibraryBook::~LibraryBook(){

    cout<<"Book object destroyed"<<endl;
}

void LibraryBook::setBookID(int bookID){

    this->bookID = bookID;
}

void LibraryBook::setTitle(string title){

    this->title = title;
}

void LibraryBook::setAuthor(string author){

    this->author = author;
}

void LibraryBook::setBorrowerName(string borrowerName){

    this->borrowerName = borrowerName;
}

void LibraryBook::setDaysBorrowed(int daysBorrowed){

    this->daysBorrowed = daysBorrowed;
}

void LibraryBook::setStatus(string status){

    this->status = status;
}

int LibraryBook::getBookID(){

    return bookID;
}

string LibraryBook::getTitle(){

    return title;
}

string LibraryBook::getAuthor(){

    return author;
}

string LibraryBook::getBorrowerName(){

    return borrowerName;
}

int LibraryBook::getDaysBorrowed(){

    return daysBorrowed;
}

string LibraryBook::getStatus(){

    return status;
}

void LibraryBook::displayBook(){

    cout<<"Book ID: "<<bookID<<endl;
    cout<<"Title: "<<title<<endl;
    cout<<"Author: "<<author<<endl;
    cout<<"Status: "<<status<<endl;

    if(status == "Borrowed"){
    
        cout<<"Borrower Name: "<<borrowerName<<endl;
        cout<<"Days Borrowed: "<<daysBorrowed<<endl;
    }

    cout<<"-------Library Book Borrowing system-------------"<<endl;
}
