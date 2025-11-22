PROGRAM:
#include<iostream.h>
using namespace std;
 class student
{
private:
char name[20];
int rno;
public:
void getstudent()
{
cout<<”enter name of the student=”;
cin>>name;
cout<<”enter roll number of the student=”;
cin>>rno;
}
void displaystudent()
{
cout<<”name of the student=”<<name;
cout<<”\nroll number of the student=”<<rno;
}
};
class address
{
private:
char city[20];
public:
void getaddress()
{
cout<<”\nenter city=”;
cin>>city;
}
void displayaddress()
{
cout<<”\ncity=”<<city;
}
};
class account: public student, public address
{
private:
int tfee,submit,balance;
public:
void getaccount()
{
getstudent();
getaddress();
cout<<“\nenter total fee=“;
cin>>tfee;
cout<<“\nenter submit fee=“ ;
cin>>submit;
}
};
void displayaccount()
{
displaystudent();
displayaddress();
cout<<”\ntotal fee=”<<tfee;
cout<<”\nsubmit fee=”<<submit;
balance=tfee-submit;
cout<<“\nbalance fee=“<<balance;
}
int main()
{
account a1;
a1.getaccount();
a1.displayaccount();
return 0;
}#include <iostream>
using namespace std;

class student
{
private:
    char name[20];
    int rno;

public:
    void getstudent()
    {
        cout << "Enter name of the student: ";
        cin >> name;
        cout << "Enter roll number of the student: ";
        cin >> rno;
    }

    void displaystudent()
    {
        cout << "Name of the student: " << name;
        cout << "\nRoll number of the student: " << rno;
    }
};

class address
{
private:
    char city[20];

public:
    void getaddress()
    {
        cout << "Enter city: ";
        cin >> city;
    }

    void displayaddress()
    {
        cout << "\nCity: " << city;
    }
};

class account : public student, public address
{
private:
    int tfee, submit, balance;

public:
    void getaccount()
    {
        getstudent();
        getaddress();
        cout <<

OUTPUT:
Enter name of the student: ritesh
Enter roll number of the student: 101
Enter city: Mumbai
Enter total fee: 5000
Enter submitted fee: 3000
--- Student Account Details ---
Name of the student: rithesh
Roll number of the student: 101
City: Mumbai
Total fee: 5000
Submitted fee: 3000
Balance fee: 2000
