
PROGRAM:
#include<iostream>
using  namespace std;
class sample
{
int n;
public:
sample() //default constructor
{
n=0;
}
sample( int a)//parameterized constructor
{
n=a;
}
sample(sample &x)//copy constructor
{
n=x.n;
}
void display()
{
cout<<n<<endl;
}
};
int main()
{
sample  a(100);
sample b(a);
sample c=a;
sample d;
d=a;
a.display();
b.display();
c.display();
d.display();
return 0;
}

OUTPUT:
100
100
100
100
