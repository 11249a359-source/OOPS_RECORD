PROGRAM:
#include <iostream>
using namespace std;
class Sample {
private:
 int x, y;
public:
 Sample(int a, int b)
 {
 x = a;
  y = b;
 }
 // Overload unary minus
 void operator - ()
 {
  x = -x;
   y = -y;
 }
 void display()
 {
    cout << "x = " << x << ", y = " << y << endl;
 }
};

int main() 
{
 Sample s(5, -7);
 cout << "Before applying unary - :" << endl;
  s.display();
 -s;   // Calls operator-()
 cout << "After applying unary - :" << endl;
 s.display();
 return 0;
}          
OUTPUT:      
Before applying unary - :
x = 5, y = -7
After applying unary - :
x = -5, y = 7
