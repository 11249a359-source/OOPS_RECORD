PROGRAM:
#include <iostream>
using namespace std;
int add(int a, int b)
 {
    return a + b;
}
int add(int a, int b, int c)
 {
    return a + b + c;
}
double add(double a, double b)
 {
    return a + b;
}
int main()
 {
    cout << "Addition of two integers: " << add(5, 10) << endl;
    cout << "Addition of three integers: " << add(5, 10, 15) << endl;
    cout << "Addition of two doubles: " << add(3.5, 2.7) << endl;

    return 0;
}
OUTPUT:

Addition of two integers: 15
Addition of three integers: 30
Addition of two doubles: 6.2
