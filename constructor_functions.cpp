#include<iostream>
using namespace std;
class Book
{
    public:
        string title;
        string author;
        int pages;
        Book()
        {
            title="No title";
            author="No author";
            pages=0;
        }
        Book(string aTitle,string aAuthor, int aPages)
        {
            cout<<"Creating Objects"<<endl;
            title=aTitle;
            author=aAuthor;
            pages=aPages;
        }
};
int main()
{
    Book book1("Harry Potter","JK Rowling",500);
    // book1.title="Harry Potter";
    // book1.author="JK Rowling";
    // book1.pages=500;
    cout<<book1.title<<endl;
    cout<<book1.author<<endl;
    cout<<book1.pages<<endl;
    Book book2("Lord of the Rings","Tolkein",700);
    // book2.title="Lord of the Rings";
    // book2.author="Tolkein";
    // book2.pages=700;
    Book book3;
    cout<<book3.title<<endl;
    cout<<book3.author<<endl;
    cout<<book3.pages<<endl;

    return 0;
}