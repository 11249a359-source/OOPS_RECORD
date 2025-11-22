program:'
  #include <iostream>
using namespace std;

class sample
{
    int a, b;

public:
    void setvalue()
    {
        cout << "Enter value of a: ";
        cin >> a;
        cout << "Enter value of b: ";
        cin >> b;
    }

    friend float mean(sample s);  // declare friend function
};

// Friend function definition
float mean(sample s)
{
    return float(s.a + s.b) / 2.0;
}

int main()
{
    sample x;
    x.setvalue();
    cout << "Mean value is: " << mean(x);
    return 0;
}
output:
Enter value of a: 10
Enter value of b: 20
Mean value is: 15

