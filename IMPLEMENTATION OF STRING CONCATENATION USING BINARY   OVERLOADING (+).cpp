PROGRAM:
#include <iostream>
using namespace std;
class MyString {
private:
 char str[100];
public:
// Constructor
 MyString(const char s[] = "")
 {
 strcpy(str, s); 
}
 // Overloading + operator
MyString operator + (const MyString &obj)
 {
MyString temp;
strcpy(temp.str, str);          // Copy first string
strcat(temp.str, obj.str);      // Concatenate second string
return temp;
}
// Display function
void display()
 {
cout << str;
}
};
int main()
 {
MyString s1("Hello ");
MyString s2("World!");
MyString s3 = s1 + s2;  // String concatenation using + operator
cout << "Concatenated String: ";
s3.display();
return 0;
}
OUTPUT:

Concatenated String: Hello World!
