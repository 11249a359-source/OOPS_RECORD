program:
#include <iostream>
using namespace std;

template <typename T>
T sum(T n1, T n2)
{
    T rs;
    rs = n1 + n2;
    return rs;
}
int main()
{
    int a = 10, b = 20, c;
    long l = 11, j = 22, k;

    c = sum(a, b);
    cout << "Sum of integer values: " << c << endl;

    k = sum(l, j);
    cout << "Sum of long values: " << k << endl;
    return 0;
}
output:
Sum of integer values: 30
Sum of long values: 33
