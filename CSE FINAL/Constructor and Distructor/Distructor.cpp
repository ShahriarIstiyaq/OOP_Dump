/*A destructor is a special type of member function which is called when the object is destroyed.
Destructor never takes an argument nor does it return any value

Properties of Destructor:
• It is not possible to define more than one destructor.
• The destructor is only one way to destroy the object created by the constructor.
  Hence destructor can-not be overloaded.
• Destructor neither requires any argument nor returns any value.
• It is automatically called when an object goes out of scope.
• Destructor release memory space occupied by the objects created by the constructor.
• In destructor, objects are destroyed in the reverse of an object creation.
• It cannot be declared static or const.
• An object of a class with a Destructor cannot become a member of the union.
• A destructor should be declared in the public section of the class.
• The programmer cannot access the address of the destructor.

->When is the destructor called?

A destructor function is called automatically when the object goes out of scope:

1. the function ends
2. the program ends
3. a block containing local variables ends
4. a delete operator is called
*/

#include <iostream>
using namespace std;

int count = 0; // A static variable to count the number of objects that have been created.

class num
{
public:
    num()
    {
        count++;
        cout << "This is the time when constructor is called for object number" << count << endl;
    }

    ~num()
    {
        cout << "This is the time when my destructor is called for object number" << count << endl;
        count--;
    }
};

int main()
{
    cout << "We are inside our main function" << endl;
    cout << "Creating first object n1" << endl;
    num n1;
    {
        cout << "Entering this block" << endl;
        cout << "Creating two more objects" << endl;
        num n2, n3;
        cout << "Exiting this block" << endl;
        // Object gets destroyed by calling distructor when ever our code exits a scope.
    }
    cout << "Back to main" << endl;
    return 0;
}
