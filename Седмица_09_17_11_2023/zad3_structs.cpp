#include<iostream>
#include<string>
using namespace std;
struct Book
{
    string title;
    string author;
    int year;
};
int main()
{

    const int n = 3;
    //cin>>n
    //int* arr = new int[n];
    Book* books = new Book[n];

    for (int i = 0; i < n; ++i)
    {
        cout << "Enter information for Book " << (i + 1) << ":\n";
        cout << "Title: ";
        getline(cin, books[i].title);
        cout << "Author: ";
        getline(cin, books[i].author);
        cout << "Year of publication: ";
        cin >> books[i].year;

        cin.ignore();
    }
    for(int i = 0; i < n; i++)
    {
        cout<<"Kniga nomer "<<i+1<<" :"<<endl;
        cout<<"Zaglavie: ";
        cout<<books[i].title<<endl;
        cout<<"Avtor: ";
        cout<<books[i].author<<endl;
        cout<<"Godina na izdavane: ";
        cout<<books[i].year<<endl;
    }

    for(int i = 0; i < n; i++)
    {
        delete[] books;
    }

    return 0;
}
