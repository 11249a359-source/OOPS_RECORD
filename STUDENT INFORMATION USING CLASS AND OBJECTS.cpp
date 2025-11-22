PROGRAM:
#include<iostream>
#include<string> 
using namespace std;
class Student {
    int year, reg, m1, m2, m3;
    string name, dep;  
    float total, avg, per;
public:
    void read();
    void cal();
    void display();
};
void Student::read() {
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter department: ";
    cin >> dep;
    cout << "Enter year and registration number: ";
    cin >> year >> reg;
    cout << "Enter marks of student (3 subjects): ";
    cin >> m1 >> m2 >> m3;
}
void Student::cal() {
    total = m1 + m2 + m3;
    avg = total / 3.0f;  
    per = (total / 300.0f) * 100; 
}

void Student::display() {
    cout << "\n--- Student Details ---\n";
    cout << "Name of the Student: " << name << endl;
    cout << "Department of the Student: " << dep << endl;
    cout << "Year of the Student: " << year << endl;
    cout << "Registration number of the Student: " << reg << endl;
    cout << "Total marks of Student: " << total << endl;
    cout << "Percentage of Student: " << per << "%" << endl;

    // Grade Calculation
    if (per >= 90) {
        cout << "Grade: S" << endl;
    } else if (per >= 80) {
        cout << "Grade: A" << endl;
    } else if (per >= 70) {
        cout << "Grade: B" << endl;
    } else if (per >= 60) {
        cout << "Grade: C" << endl;
    } else if (per >= 50) {
        cout << "Grade: D" << endl;
    } else {
        cout << "Result: FAIL" << endl;
    }
}

int main() {
    Student a;
    a.read();
    a.cal();
    a.display();
    return 0;
}


output:

Enter name: rithesh
Enter department: cse
Enter year and registration number: 11249a359
Enter marks of student (3 subjects): 
--- Student Details ---
Name of the Student: rithesh
Department of the Student: cse
Year of the Student: 11249
Registration number of the Student: 0
Total marks of Student: 8.08797e+08
Percentage of Student: 2.69599e+08%
Grade: S

