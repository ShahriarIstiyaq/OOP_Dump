#include <iostream>
using namespace std;

template <class T>
class Cal
{
private:
    T num1, num2;

public:
    Cal(T n1, T n2) : num1(n1), num2(n2) {}

    void display()
    {
        cout << "Addition is:  " << add() << endl;
        cout << "Substraction is: " << substact() << endl;
    }

    T add() { return num1 + num2; }
    T substact()
    {
        if (num1 >= num2)
            return num1 - num2;

        else
            return num2 - num1;
    }
};

int main()
{
    Cal<int> C1(10, 25);
    Cal<double> C2(10.5, 20);

    cout << "For integer: " << endl;
    C1.display();

    cout << "For double: " << endl;
    C2.display();
}