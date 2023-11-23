/*2. Create three classes: Employee, Manager, and Director. Each class should have a data
member called salary representing the salary of the respective role. Create another class called
SalaryReport which should inherit from Employee, Manager, and Director classes. The
SalaryReport class should have a member function called calculateAverageSalary() that
calculates the average salary of all the roles and stores it in a data member called
averageSalary. Display the average salary using the displayAverageSalary() member function.*/

#include <iostream>
using namespace std;

class Employee
{
protected:
    double salary;

public:
    Employee() // default constructor
    {
        salary = 0;
    }

    void inputSalary()
    {
        cout << "Enter the salary for Employee: ";
        cin >> salary;
    }

    double getSalary() const
    {
        return salary;
    }
};

class Manager
{
protected:
    double salary;

public:
    Manager() // default constructor
    {
        salary = 0;
    }

    void inputSalary()
    {
        cout << "Enter the salary for Manager: ";
        cin >> salary;
    }

    double getSalary() const
    {
        return salary;
    }
};

class Director
{
protected:
    double salary;

public:
    Director() // default constructor
    {
        salary = 0;
    }

    void inputSalary()
    {
        cout << "Enter the salary for Director: ";
        cin >> salary;
    }

    double getSalary() const
    {
        return salary;
    }
};

class SalaryReport : public Employee, public Manager, public Director
{
private:
    double averageSalary;

public:
    void calculateAverageSalary()
    {

        Employee::inputSalary();
        Manager::inputSalary();
        Director::inputSalary();

        averageSalary = (Employee::getSalary() + Manager::getSalary() + Director::getSalary()) / 3;
    }

    void displayAverageSalary()
    {
        cout << "Average Salary of all roles: " << averageSalary << endl;
    }
};

int main()
{
    SalaryReport report;

    report.calculateAverageSalary();
    report.displayAverageSalary();

    return 0;
}
