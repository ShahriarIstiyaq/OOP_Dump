#include <iostream>
#include <string>
using namespace std;

class Customer
{
public:
    string name;
    string address;
    int num;          // Phone number of customers
    double price[15]; // Price of items.

    void getData()
    {
        cin.ignore();
        cout << "Enter the name of the customer: ";
        getline(cin, name);
        // cin.ignore();

        cout << "Enter the address of the customer: ";
        getline(cin, address);

        cout << "Enter the phone number of the customer: ";
        cin >> num;

        cout << "Enter the price of the 10 items: \n";
        for (int i = 0; i < 10; i++)
        {
            cout << "Item " << i + 1 << ": ";
            cin >> price[i];
        }
        cout << endl;
    }

    void showData()
    {
        cout << "Customer Name: " << name << endl;
        cout << "Customer Address: " << address << endl;
        cout << "Customer Phone Number: " << num << endl;
        for (int i = 0; i < 10; i++)
        {
            cout << "Item " << i + 1 << ": " << price[i] << endl;
        }
    }
}; // End of class.

int main()
{
    int n;
    cout << "Enter the number of customers: ";
    cin >> n;
    // cin.ignore();
    cout << endl;

    Customer c[n]; // Creating N number of customers class.

    // Taking input.
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the data of the customer " << i + 1 << ":" << endl;
        c[i].getData();
        cout << endl;
    }
    cout << endl;

    // Showing output.
    cout << "Customer data: \n";
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Showing data of customer " << i + 1 << ":" << endl;
        c[i].showData();
        cout << endl;
    }

    return 0;
}