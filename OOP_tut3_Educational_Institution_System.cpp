//Educational Institution System
/*Design an educational Institution that maintains a database of all staff members where the database is segregated into a number of classes having hierarchical relationships.
Define all classes with suitable data members and required member functions to build the database and fetch individual details.*/
#include <iostream>
using namespace std;

class Staff {
protected:
    int id;
    string name;

public:
    void getData() {
        cout << "Enter Staff ID: ";
        cin >> id;
        cout << "Enter Name: ";
        cin >> name;
    }

    void displayData() {
        cout << "Staff ID: " << id << "\nName: " << name << endl;
    }
};

class Teacher : public Staff {
    string subject;

public:
    void accept() {
        getData(); cout << "Enter Subject: ";
        cin >> subject;
    }

    void display() {
        cout << "\nTeacher Details\n";
        displayData();
        cout << "Subject: " << subject << endl;
    }
};

class Administrator : public Staff {
    string post;
public:
    void accept() { getData();
        cout << "Enter Post: ";
        cin >> post;
    }
    void display() {
        cout << "\nAdministrator Details\n";
        displayData();
        cout << "Post: " << post << endl;
    }
};

class SupportStaff : public Staff {
    string duty;
public:
    void accept() {
        getData();
        cout << "Enter Duty: ";
        cin >> duty;
    }

    void display() {
        cout << "\nSupport Staff Details\n";
        displayData();
        cout << "Duty: " << duty << endl;
    }
};

int main() {
    Teacher t;
    Administrator a;
    SupportStaff s;

    cout << "Enter Teacher Details\n";
    t.accept();
    cout << "\nEnter Administrator Details\n";
    a.accept();
    cout << "\nEnter Support Staff Details\n";
    s.accept();

    cout << "\n----- Details -----\n";
    t.display();
    a.display();
    s.display();

    return 0;
}
