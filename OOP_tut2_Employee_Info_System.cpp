//Employee Information System
/*Develop a program in C++ to create a database of an employee&#39;s information system containing the following fields:
Name, employee ID, Department, Date of Joining, Contact address, Telephone number etc.
Construct the database with suitable member functions to accept and print employee details.
Make use of constructor types, destructor, static members, inline function and dynamic memory allocation using operators-new and delete.*/
#include <iostream>
#include <string>
using namespace std;

class EmployeeDetails
{
public:
    string name;
    int id;
    string department;
    string joining_date;
    string address;
    string telephone_num;
    static int count;

    EmployeeDetails()
    {
        name = "";
        id = 0;
        department = "";
        joining_date = "";
        address = "";
        telephone_num = "";
        count++;
    }

    //Destructor
    ~EmployeeDetails()
    {
        cout << "Employee object destroyed\n";
    }

    void addData() {
        cout << "Enter your name: ";
        cin >> name;

        cout << "Enter your ID: ";
        cin >> id;

        cout << "Enter your department: ";
        cin >> department;

        cout << "Enter your joining date: ";
        cin >> joining_date;

        cout << "Enter your address: ";
        cin >> address;

        cout << "Enter your telephone number: ";
        cin >> telephone_num;
    }

    void displayData()
    {
        cout << "\nName: " << name;
        cout << "\nID: " << id;
        cout << "\nDepartment: " << department;
        cout << "\nJoining Date: " << joining_date;
        cout << "\nAddress: " << address;
        cout << "\nTelephone: " << telephone_num << endl;
    }

    static void showCount()
    {
        cout << "\nTotal Employees: " << count << endl;
    }
};

int EmployeeDetails::count = 0;

int main()
{
    EmployeeDetails emp[2];

    for (int i = 0; i < 2; i++)
    {
        emp[i].addData();
        cout << "\n";
    }

    cout << "Employee details: \n";

    for (int i = 0; i < 2; i++)
        emp[i].displayData();

    EmployeeDetails::showCount();

    return 0;
}
