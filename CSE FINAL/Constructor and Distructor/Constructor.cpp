/*A Constuctor is a special type of member function with the same name as its class,
which is used to initialize the data members for an Object of its class autometically,
when an object of the same class is created.
Constructor do not return value, hence they do not have a return type.
Constructor is called autometically whenever a new object is created.*/

/*
Syntax:
a.  Syntax for defining the constructor within the class
        class_name(parameter_list)
        {
            //constructor definition
        }

b.    Syntax for defining the constructor outside the class
        class_name :: class_name(parameter_list)
        {
            //constructor definition
        }
*/
/*
Characteristics of constructor:
    • The name of the constructor is same as its class name.
    • Constructors are mostly declared in the public section of the class though it can be declared in the private section of the class.
    • Constructors do not return values; hence they do not have a return type.
    • A constructor gets called automatically when we create the object of the class.
    • Constructors can be overloaded.
    • Constructor can not be declared virtual.
*/
/*
Types of constructor:
    • Default constructor
    • Parameterized constructor
    • Overloaded constructor
    • Constructor with default value
    • Copy constructor
    • Inline constructor
*/

// Defining the constructor within the class

#include <iostream>
#include <string>
using namespace std;
class student
{
    int rno;
    string name;
    double fee;

public:
    student()
    {
        cout << "Enter the RollNo:";
        cin >> rno;
        cin.ignore();

        cout << "Enter the Name:";
        getline(cin, name);

        cout << "Enter the Fee:";
        cin >> fee;
    }

    void display()
    {
        cout << "\nStudent data: \n";
        cout << rno << "\t" << name << "\t" << fee;
    }
};

int main()
{
    student s; // constructor gets called automatically when we create the object of the class
    s.display();
    return 0;
}

/*A constructor is different from normal functions in following ways:

• Constructor has same name as the class itself
• Default Constructors don’t have input argument however, Copy and Parameterized Constructors have input arguments
• Constructors don’t have return type
• A constructor is automatically called when an object is created.
• It must be placed in public section of class.
• If we do not specify a constructor, C++ compiler generates a default constructor for object (expects no parameters and has an empty body).
*/