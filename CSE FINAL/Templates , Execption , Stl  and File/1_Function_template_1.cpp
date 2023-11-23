#include <iostream>
using namespace std;

template <typename T>
T square(T x)
{
    T result = x * x;
    return result;
}

int main()
{
    int i = 2;
    double d = 2.2;

    cout << "Square of int: " << square(i) << endl;
    cout << "Square of double: " << square(d) << endl;
}