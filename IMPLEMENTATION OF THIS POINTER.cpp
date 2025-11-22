program:
#include <iostream>
using namespace std;

class num
{
    int a, b;
public:
    num(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "a=" << a << " and b=" << b << endl;
    }
    num add(num x)
    {
        a = a + x.a;
        b = b + x.b;
        return *this;
    }
};

int main()
{
    num obj1(1, 2), obj2(3, 4);
    obj1.display();   // Display obj1
    obj2.display();   // Display obj2
    obj1.add(obj2);   // Add obj2 to obj1
    obj1.display();   // Display obj1 after addition
    return 0;
}
output:
a=1 and b=2
a=3 and b=4
a=4 and b=6

