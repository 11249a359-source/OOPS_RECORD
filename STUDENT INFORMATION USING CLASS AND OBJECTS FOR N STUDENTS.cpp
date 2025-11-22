PROGRAM:
#include <iostream>
using namespace std;
class Student {
private:
    int roll;
    string name;
    float marks;
public:
    // Function to input student details
    void getData() {
        cout << "Enter Roll Number: ";
        cin >> roll;
        cout << "Enter Name: ";
        cin >> ws;          // to ignore newline
        getline(cin, name);
        cout << "Enter Marks: ";
        cin >> marks;
    }
    // Function to display student details
    void displayData() {
        cout << "\nRoll Number : " << roll;
        cout << "\nName        : " << name;
        cout << "\nMarks       : " << marks;
        cout << "\n-----------------------------\n";
    }
};
int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    // Create array of objects
    Student s[n];
    cout << "\n--- Enter Student Details ---\n";
    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << ":\n";
        s[i].getData();
    }
    cout << "\n\n--- Displaying Student Details ---\n";
    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << " Details:";
        s[i].displayData();
    }
    return 0;
}
OUTPUT:

Enter number of students: 3

--- Enter Student Details ---

Student 1:
Enter Roll Number: 101
Enter Name: rithesh
Enter Marks: 87.5

Student 2:
Enter Roll Number: 102
Enter Name: irfan
Enter Marks: 92.0

Student 3:
Enter Roll Number: 103
Enter Name: iliyas


