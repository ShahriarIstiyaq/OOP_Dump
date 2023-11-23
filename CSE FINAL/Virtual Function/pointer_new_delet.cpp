#include <iostream>
using namespace std;

int main()
{
    // pointer.
    int a = 4;
    int *p = &a; // declared pointer to a.

    cout << "Value of a = " << *(p) << endl;
    cout << "Address of a = " << p << endl;

    // new operator
    int *i = new int;
    *i = 50;
    cout << "Value of dynamically allocated variable = " << *(i) << endl;

    // for array int *arr= new int[10];

    // The 'delete' operator is used to free the memory that was previously allocated using 'new.'
    delete i;

    // for array delete[] arr;
}