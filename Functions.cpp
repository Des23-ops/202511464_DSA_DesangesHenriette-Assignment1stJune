#include "Functions.h"

void addBook(LibraryBook books[],int &count){

    int id;
    string title;
    string author;

    cout<<"Enter Book ID: ";
    cin>>id;

    cin.ignore();

    cout<<"Enter Title: ";
    getline(cin,title);

    cout<<"Enter Author: ";
    getline(cin,author);

    books[count] = LibraryBook(id,title,author);

    count++;

    cout<<"Book Added Successfully"<<endl;
}

void displayBooks(LibraryBook books[],int count){

    for(int i=0;i<count;i++){
    
        books[i].displayBook();
    }
}

void searchBook(LibraryBook books[],int count){

    int id;

    cout<<"Enter Book ID: ";
    cin>>id;

    for(int i=0;i<count;i++) {
   
        if(books[i].getBookID() == id){
        
            books[i].displayBook();
            return;
        }
    }

    cout<<"Book Not Found"<<endl;
}

void borrowBookMenu(LibraryBook books[],int count){

    int id;

    cout<<"Enter Book ID: ";
    cin>>id;

    for(int i=0;i<count;i++) {
   
        if(books[i].getBookID() == id){
        
            string name;
            int days;

            cin.ignore();

            cout<<"Enter Borrower Name: ";
            getline(cin,name);

            cout<<"Enter Number of Days: ";
            cin>>days;

            books[i].setBorrowerName(name);
            books[i].setDaysBorrowed(days);
            books[i].setStatus("Borrowed");

            cout<<"Book Borrowed Successfully"<<endl;

            return;
        }
    }

    cout<<"Book Not Found"<<endl;
}

void returnBookMenu(LibraryBook books[],int count){

    int id;

    cout<<"Enter Book ID: ";
    cin>>id;

    for(int i=0;i<count;i++) {
   
        if(books[i].getBookID() == id){
        
            books[i].setBorrowerName("");
            books[i].setDaysBorrowed(0);
            books[i].setStatus("Available");

            cout<<"Book Returned Successfully"<<endl;

            return;
        }
    }

    cout<<"Book Not Found"<<endl;
}

void displayOverdueBooks(LibraryBook books[],int count){

    cout<<"\t\t ===OVERDUE BOOKS ===";

    for(int i=0;i<count;i++){
    
        if(books[i].getDaysBorrowed() > 7){
        
            books[i].displayBook();
        }
    }
}

void calculateTotalFines(LibraryBook books[],int count){

    int totalFine = 0;

    for(int i=0;i<count;i++){
    
        if(books[i].getDaysBorrowed() > 7){
        
            totalFine = totalFine +
            ((books[i].getDaysBorrowed() - 7) * 100);
        }
    }

    cout<<"Total Fine: "<<totalFine<<" RWF"<<endl;
}
