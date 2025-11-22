PROGRAM:
#include<iostream>
using namespace std;
class bookdetails
{
 int year, cost;
char title[20],name[10];
public:
void read();
void display();
};
void  bookdetails :: read()
{
cout<< “Enter title name of the book :”;
cin>>title;
cout<< “Enter Author name of the book :”;
cin>>name;
cout<< “Enter year of the book :”;
cin>>year;
cout<< “Enter cost of the book : “;
cin>>cost;
}
void  bookdetails :: display()
{
cout<< “The details of the Book are :”<<endl;
cout<< “Title of the Book is :”<<title<<endl;
cout<< “Author of the Book is :”<<name<<endl;
cout<< “Publication year of the Book is :”<<year<<endl;
cout<< “Price of the Book is :”<<cost <<endl;
}
int main()
{
bookdetails a;
a.read();
a.display();
return 0;
}

OUTPUT:
Enter title name of the book: The Great Gatsby
Enter Author name of the book: F. Scott Fitzgerald
Enter year of the book: 1925
Enter cost of the book: 250

The details of the Book are:
Title of the Book: The Great Gatsby
Author of the Book: F. Scott Fitzgerald
Publication year of the Book: 1925
Price of the Book: 250




