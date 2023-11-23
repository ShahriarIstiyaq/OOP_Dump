/*A pointer declareda as a pointer to the base class can also be used to point to
any class derived from that base class. But the reverse is not true.*/

#include <iostream>
using namespace std;

class Base
{
    int x;

public:
    void setx(int i) { x = i; }
    int getx() { return x; }
};

class Derived : public Base
{
    int y;

public:
    void sety(int i) { y = i; }
    int gety() { return y; }
};

int main()
{
    Base *p; // point to base class
    Base b_obj;
    Derived d_obj;

    // use p to access base class
    p = &b_obj;
    p->setx(10);
    cout << "X =" << p->getx() << endl;

    // use p to access derived class
    p = &d_obj;

    // p->sety(90);
    d_obj.setx(90);
    cout << "y = " << p->getx() << endl;
}