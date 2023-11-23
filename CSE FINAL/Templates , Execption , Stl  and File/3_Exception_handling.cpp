#include <iostream>
using namespace std;

double Div(int a, int b)
{
    if (b == 0)
        throw "Division by zero is not possible";

    return (a / b);
}

int main()
{
    int x = 50, y = 0;
    double result;

    try
    {
        result = Div(x, y);
        cout << result << endl;
    }
    catch (const char *msg)
    {
        cout << msg << endl;
    }
}
