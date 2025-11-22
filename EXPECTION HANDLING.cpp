PROGRAM:
#include <iostream>
using namespace std;
int main()
 {
int a = 10, b = 0;
try
 {
if (b == 0)
throw "Division by zero not allowed!"; // throwing an exception
cout << "Result: " << a / b << endl;
}
catch (const char* msg) { // catching the exception
cout << "Error: " << msg << endl;
}
cout << "Program continues..." << endl;
return 0;
}

OUTPUT:
Error: Division by zero not allowed!
Program continues...
