#include <iostream>
#include <string>
using namespace std;

template <class T>
void Swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 10, y = 20;
    Swap(x, y);
    cout << x << " " << y << endl;
}