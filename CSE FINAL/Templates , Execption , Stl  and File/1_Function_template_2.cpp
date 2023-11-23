#include <iostream>
using namespace std;

template <typename T1, typename T2>
T1 add(T1 a, T2 b)
{
    return a + b;
}

int main()
{
    cout << "The sum value is : " << add(10, 20) << endl;
    cout << "The sum value is : " << add(10, 10.3) << endl;
    cout << "The sum value is : " << add(10.3, 10) << endl;
}