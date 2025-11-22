
PROGRAM:
#include <iostream>
using namespace std;
class Number
 {
private:
int value;
public:
// Constructor
Number(int v = 0)
 {
        value = v;
 }
// Function that displays value
    void display()
 {
        cout << "Value: " << value << endl;
 }
    // Function that takes an object as argument
    void add(Number n) {   // object passed as argument
        cout << "Sum = " << value + n.value << endl;
    }
};

int main() {
    Number n1(10);
    Number n2(20);
  cout << "Object n1: ";
  n1.display();
  cout << "Object n2: ";
  n2.display();
  cout << "\nPassing object n2 to n1.add() function:\n";
   n1.add(n2);
   return 0;
}
OUTPUT:
Object n1: Value: 10
Object n2: Value: 20

Passing object n2 to n1.add() function:
Sum = 30

  
