program:
#include<iostream>
using namespace std;

class A
{
public:
    static int add(int, int);
};

// Definition of static member function
int A::add(int a, int b)
{
    return a + b;
}

int main()
{
    int res;
    res = A::add(30, 40);  // call static function using class name
    cout << res;
    return 0;
}
output:
70
