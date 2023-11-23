#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    string name;
    int id;     // Only last 3 digit of student id.
    int sem;    // Only digits of semester
    string sec; // section name of the students

private:
    double cgpa;

public:
    void getData()
    {
        cout << "Enter student name: ";
        getline(cin, name);

        cout << "Enter student id: ";
        cin >> id;

        cout << "Enter semester: ";
        cin >> sem;

        cin.ignore();
        cout << "Enter section: ";
        cin >> sec;

        cout << "Enter cgpa: ";
        cin >> cgpa;
        cin.ignore();
    }

    void showData()
    {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Sem: " << sem << endl;
        cout << "Section: " << sec << endl;
        cout << "Cgpa: " << cgpa << endl;
    }
}; // end of class.

int main()
{
    int n;
    cout << "Enter the number of students: ";
    cin >> n;
    cin.ignore();
    cout << endl;
    Student stu[n]; // Creating N number of classes for storing data.

    // Taking input.
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the data of the student " << i + 1 << ":" << endl;
        stu[i].getData();
        cout << endl;
    }
    cout << endl;

    // Displaying data.
    cout << "Student data: ";
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Showing data of student " << i + 1 << ":" << endl;
        stu[i].showData();
        cout << endl;
    }

    return 0;
}
