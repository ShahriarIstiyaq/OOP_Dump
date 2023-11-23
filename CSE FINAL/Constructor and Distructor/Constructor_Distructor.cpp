#include <iostream>
using namespace std;

class A
{
public:
    A() { cout << "Constrctor of first Class is called" << endl; }
    ~A() { cout << "Distructor of first Class is called" << endl; }
};

class B
{
public:
    B() { cout << "Constrctor of second Class is called" << endl; }
    ~B() { cout << "Distructor of second Class is called" << endl; }
};

class D : public A, public B
{
public:
    D() { cout << "Constrctor of third Class is called" << endl; }
    ~D() { cout << "Distructor of third Class is called" << endl; }
};

int main()
{
    D ob;
    return 0;
}