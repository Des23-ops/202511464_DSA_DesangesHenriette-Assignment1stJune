#include "Functions.h"

int main()
{
    LibraryBook books[100];

    int count = 0;
    int choice;

    do
    {
        cout<<"\t\t===== LIBRARY BOOK BORROWING SYSTEM ====="<<endl;
        cout<<"\t\t1. Add New Book"<<endl;
        cout<<"\t\t2. Display All Books"<<endl;
        cout<<"\t\t3. Borrow Book"<<endl;
        cout<<"\t\t4. Return Book"<<endl;
        cout<<"\t\t5. Search Book By ID"<<endl;
        cout<<"\t\t6. Display Overdue Books"<<endl;
        cout<<"\t\t7. Calculate Total Fines"<<endl;
        cout<<"\t\t8. Exit"<<endl;

        cout<<"Enter Choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                addBook(books,count);
                break;

            case 2:
                displayBooks(books,count);
                break;

            case 3:
                borrowBookMenu(books,count);
                break;

            case 4:
                returnBookMenu(books,count);
                break;

            case 5:
                searchBook(books,count);
                break;

            case 6:
                displayOverdueBooks(books,count);
                break;

            case 7:
                calculateTotalFines(books,count);
                break;

            case 8:
                cout<<"Exiting bye"<<endl;
                break;

            default:
                cout<<"Invalid Choice! Follow the menu"<<endl;
        }

    }
    while(choice != 8);

    return 0;
}
