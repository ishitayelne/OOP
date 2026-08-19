//Operations on Bank Account
/*Implement a class to illustrate working of a bank account of a customer that consists of following members:
Data members:
i. Name of the customer
ii. Account Type
iii. Account Number
iv. Available balance amount in the account
Member Functions:
i. Assign initial values using constructors.
ii. Deposit an amount in account
iii. Withdraw an amount
iv. Display account details
*/
#include <iostream>
#include <string>
using namespace std;

class Bank {
public:
    string name;
    string acc_type;
    int acc_num;
    float acc_balance;

    //Parameterized constructor
    Bank(string n, string type, int num) {
        name = n;
        acc_type = type;
        acc_num = num;
        acc_balance = 0;

        cout << "\nAccount has been created.";
        cout << "\nName: " << name;
        cout << "\nAccount type: " << acc_type;
        cout << "\nAccount number: " << acc_num << "\n";
    }

    // Depositing amt into acc
    void deposit() {
        float deposit_amt;

        cout << "\nEnter amount to be deposited in account number "
             << acc_num << ": ";
        cin >> deposit_amt;

        if (deposit_amt <= 0) {
            cout << "Enter a valid amount to deposit\n";
        }
        else {
            acc_balance += deposit_amt;

            cout << "Your amount " << deposit_amt
                 << " has been deposited\n";
            cout << "Current account balance: "
                 << acc_balance << "\n";
        }
    }

    // Withdrawing amt from acc
    void withdraw() {
        float withdraw_amt;

        while (true) {
            cout << "\nEnter the amount to withdraw from account number "
                 << acc_num << ": ";
            cin >> withdraw_amt;

            if (withdraw_amt <= 0) {
                cout << "Enter a valid amount to withdraw\n";
            }
            else if (withdraw_amt > acc_balance) {
                cout << "Not enough funds present in account. "
                     << "Choose a smaller amount.\n";
            }
            else {
                acc_balance -= withdraw_amt;

                cout << "Your amount " << withdraw_amt
                     << " has been withdrawn.\n";
                cout << "Current account balance: "
                     << acc_balance << "\n";

                break;
            }
        }
    }

    // Displaying acc details
    void details() {
        cout << "\nAccount details:\n";
        cout << "Name: " << name;
        cout << "\nAccount number: " << acc_num;
        cout << "\nAccount type: " << acc_type;
        cout << "\nAccount balance: " << acc_balance << "\n";
    }

    // Destructor
    ~Bank() {
        cout << "\nAccount object has been destroyed.";
    }
};

int main() {
    string name, acc_type;
    int acc_num;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your account type (savings/checking): ";
    cin >> acc_type;

    cout << "Enter your account number: ";
    cin >> acc_num;

    // Obj using parameterized constructor
    Bank account(name, acc_type, acc_num);

    account.deposit();
    account.withdraw();
    account.details();

    return 0;
}
