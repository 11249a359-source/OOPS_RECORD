program:
#include <iostream>
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
        cin >> name;  // for single-word name
        cout << "Enter roll number of the student: ";
        cin >> rno;
    }

    void displaystudent()
    {
        cout << "Name of the student: " << name;
        cout << "\nRoll number of the student: " << rno;
    }
};

class address : public student
{
private:
    char city[20];

public:
    void getaddress()
    {
        getstudent();
        cout << "\nEnter city: ";
        cin >> city;
    }

    void displayaddress()
    {
        displaystudent();
        cout << "\nCity: " << city;
    }
};

int main()
{
    address a1;
    a1.getaddress();
    cout << "\n\nDisplaying student details:\n";
    a1.displayaddress();
    return 0;
}
output:

Enter name of the student: rithesh
Enter roll number of the student: 11249a359
Enter city: Mumbai
Displaying student details:
Name of the student: rithesh
Roll number of the student: 11249a359
City: Mumbai


