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
class test : public student
{
protected:
    int math, eng, sci;
public:
    void gettest()
    {
        getstudent();
        cout << "Enter math marks: ";
        cin >> math;
        cout << "Enter english marks: ";
        cin >> eng;
        cout << "Enter science marks: ";
        cin >> sci;
    }
    void displaytest()
    {
        displaystudent();
        cout << "\nMath marks: " << math;
        cout << "\nEnglish marks: " << eng;
        cout << "\nScience marks: " << sci;
    }
};
class result : public test
{
private:
    int total, avg;

public:
    void getresult()
    {
        gettest();
        total = math + eng + sci;
        avg = total / 3;
    }
    void displayresult()
    {
        displaytest();
        cout << "\nTotal Marks: " << total;
        cout << "\nAverage Marks: " << avg;
    }
};
int main()
{
    result r1;
    r1.getresult();
    cout << "\n--- Student Result ---\n";
    r1.displayresult();
    return 0;
}
output:Enter name of the student: Rithesh
Enter roll number of the student: 359
Enter math marks: 85
Enter english marks: 90
Enter science marks: 80
--- Student Result ---
Name of the student: Rithesh
Roll number of the student: 359
Math marks: 85
English marks: 90
Science marks: 80
Total Marks: 255
Average Marks: 85

