#include <iostream>
using namespace std;

class electricity
{
    int con_num, pr, cr;
    char name[20], type[10];
    float total_units, bill_amount;

public:
    void getdata()
    {
        cout << "Enter consumer number: ";
        cin >> con_num;
        cout << "Enter consumer name: ";
        cin >> name;
        cout << "Enter previous month reading: ";
        cin >> pr;
        cout << "Enter current month reading: ";
        cin >> cr;
        cout << "Enter connection type (D/Domestic or C/Commercial): ";
        cin >> type;
    }
    void cal()
    {
        total_units = cr - pr;
        bill_amount = 0;

        // Domestic Connection
        if (type[0] == 'd' || type[0] == 'D')
        {
            if (total_units <= 100)
                bill_amount = total_units * 1;
            else if (total_units <= 200)
                bill_amount = 100 * 1 + (total_units - 100) * 2.5;
            else if (total_units <= 500)
                bill_amount = 100 * 1 + 100 * 2.5 + (total_units - 200) * 4;
            else
                bill_amount = 100 * 1 + 100 * 2.5 + 300 * 4 + (total_units - 500) * 6;
        }
        else   // Commercial Connection
        {
            if (total_units <= 100)
                bill_amount = total_units * 2;
            else if (total_units <= 200)
                bill_amount = 100 * 2 + (total_units - 100) * 4.5;
            else if (total_units <= 500)
                bill_amount = 100 * 2 + 100 * 4.5 + (total_units - 200) * 6;
            else
                bill_amount = 100 * 2 + 100 * 4.5 + 300 * 6 + (total_units - 500) * 7;
        }
    }
    void display()
    {
        cout << "\n----- ELECTRICITY BILL DETAILS -----\n";
        cout << "Consumer number: " << con_num << endl;
        cout << "Consumer name: " << name << endl;
        cout << "Connection type: " << type << endl;
        cout << "Previous reading: " << pr << endl;
        cout << "Current reading: " << cr << endl;
        cout << "Total units consumed: " << total_units << endl;
        cout << "Total bill amount: Rs. " << bill_amount << endl;
    }
};
int main()
{
    electricity e;
    e.getdata();
    e.cal();
    e.display();
    return 0;
}

output:
----- ELECTRICITY BILL DETAILS -----
Consumer number: 101
Consumer name: rithesh
Connection type: D
Previous reading: 1200
Current reading: 1350
Total units consumed: 150
Total bill amount: Rs. 225
