PROGRAM:
#include <iostream>
using namespace std;
class Complex 
{
private:
 float real, imag;
public:
Complex(float r = 0, float i = 0)
{
real = r;
 imag = i;
 }
Complex operator + (const Complex &obj)
 {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }

 // Function to display result
    void display() 
{
        cout << real << " + " << imag << "i" << endl;
    }
};
int main() {
Complex c1(3.2, 5.4);
 Complex c2(2.1, 3.6);
Complex c3 = c1 + c2;   // Calls operator+
 cout << "Result of addition: ";
 c3.display();
return 0;
}
OUTPUT:
Result of addition: 5.3 + 9i
