PROGRAM:
#include<iostream>
using namespace std;
class marks
{
public:
int maths,science;
//constructor
marks()
{
cout<< “Inside constructor”<<endl;
cout<< “C++ object created”<<endl;
}
//destructor
~marks()
{
cout<< “Inside destructor”<<endl;
cout<< “ C++ object destroyed”<<endl;
}
};
int main()
{
marks m1;
marks m2;
return 0;
}
OUTPUT:
Inside constructor
C++ object created
Inside constructor
C++ object created
Inside destructor
C++ object destroyed
Inside destructor
C++ object destroyed
