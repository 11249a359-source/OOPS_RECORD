PROGRAM:
#include <iostream>
using namespace std;
int main()
 {
    // Allocate memory for a single integer
    int *a = new int;
    *a = 10;
    cout << "Value of a: " << *a << endl; 
    // Deallocate the memory
    delete a;
    // Allocate memory for an array of integers
    int *arr = new int[5];
    for (int i = 0; i < 5; ++i) {
        arr[i] = i * 2;
    }
    // Deallocate the array memory
    delete[] arr;
    return 0:
      }

OUTPUT:
Value of a: 10

