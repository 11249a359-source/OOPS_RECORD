program:
#include <iostream>
#include <iomanip>
#include <cmath>   // use <cmath> instead of <math.h>
using namespace std;

int main()
{
    cout << "This is first line" << endl;
    cout << "This is second line" << endl;
    cout << 123 << endl;

    cout << setw(3) << 10 << endl;

    cout << setprecision(3);
    cout << sqrt(3) << endl;

    cout << setw(5) << 10 << endl;
    cout << setw(5) << 257 << endl;

    return 0;
}
output:
This is first line
This is second line
123
 10
1.73
   10
  257
