PROGRAM:
#include<iostream>
using  namespace std;
class employee
{
int basicpay;
char name[10];
float da,hra,gs,tax,ns;
public:
void read();
void cal();
void display();
};
void  employee :: read()
{
cout<< “Enter employee name :”;
cin>>name;
cout<< “Enter basicpay:”;
cin>>basicpay;
}
void employee :: cal()
{
da=basicpay*(70/100);
hra=basicpay*(10/100);
gs=basicpay+da+hra;
tax=gs*(20/100);
ns=gs-tax;
}
void employee :: display()
{
cout<< “Name of the employee :”<<name<<endl;
cout<< “Basicpay of the employee :”<<basicpay<<endl;
cout<< “Tax of the employee :”<<tax<<endl;
cout<< “Netsalary of the employee :”<<ns<<endl;
}
int main()
{
employee a;
a.read();
a.cal();
a.display();
return 0;
}

OUTPUT:

Enter employee name: Raj
Enter basic pay: 10000

  
